#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTcpServer>
#include <QTcpSocket>
#include <QTextStream>
#include "connectdialog.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
	, server(nullptr)
	, connection(nullptr)
{
	// Aplica el disenno hecho en mainwindow.ui a este objeto MainWindow
	ui->setupUi(this);

	// Cada vez que se presiona el boton connectOrSendButton se invoca el metodo connectOrSend()
	connect(ui->connectOrSendButton, SIGNAL(clicked()), this, SLOT(connectOrSend()));
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::connectOrSend()
{
	// Si el boton connectOrSend tiene la leyenda "Connect", mostrar el cuadro dialogo para
	// solicitar los datos de conexion. Si tiene la leyenda "Send" se envia un mensaje
	ui->connectOrSendButton->text() == tr("&Connect") ? connectToNetwork() : sendMessage();
}

void MainWindow::connectToNetwork()
{
	// Se invoca cuando se presiona el boton Connect. Solicitar los datos de conexion al
	// usuario usando un dialogo para tal fin
	ConnectDialog* dialog = new ConnectDialog(this);

	// Muestra al dialogo en forma modal con el metodo exec(). Es decir, el dialogo reacciona
	// a eventos, mientras que el mainWindow se mantiene bloqueado. Esto ocurre por invocar al
	// metodo exec(), el cual impone otro ciclo de eventos que oculta el ciclo de eventos de la
	// aplicacion. Si se quiere que tanto el dialog como el MainWindow reaccionen a eventos
	// se invocaria al metodo dialog->show()
	if ( dialog->exec() )
	{
		// El dialogo fue aceptado. Obtener los datos escritos del usuario y establecer la conexion
		quint16 port = dialog->getPort().toUInt();

		// El establecimiento de la conexion depende de si el usuario marco "Servidor" o "Cliente"
		if ( dialog->shouldConnectAsServer() )
			connectAsServer(port);
		else
			connectAsClient(dialog->getHost(), port);
	}
}

bool MainWindow::connectAsServer(quint16 port)
{
	// El usuario quiere que esta instancia del programa sea un servidor que espere (o escuche)
	// por conexiones de clientes. Un QTcpServer se encarga de esta ecucha
	if ( ! server ) server = new QTcpServer(this);

	// El servidor tratara de escuchar en esta maquina en el puerto dado por el usuario
	// en todas (Any) las conexiones de red que tenga
	if ( server->listen(QHostAddress::Any, port) )
	{
		// El puerto esta libre y ahora el servidor esta esperando conexiones, informarlo
		// en la barra de estado. Estos datos los ocupara el cliente para conectarse
		statusBar()->showMessage(tr("Listening in %1:%2")
			.arg(server->serverAddress().toString()).arg(server->serverPort()));

		// Mientra el servidor espera por clientes que se quieran conectar, puede realizar
		// otras tareas. Es decir, escuchar no implica bloquear la aplicacion. Cuando un
		// cliente decida conectarse, el QTcpServer emitira una sennal newConnection()
		// la cual la conectamos con nuestro metodo newConnectionAsked()
		connect(server, SIGNAL(newConnection()), this, SLOT(newConnectionAsked()));
		return true;
	}
	else
	{
		// El servidor no pudo iniciar la espera en el puerto dado, posiblemente porque ya hay
		// otro servidor escuchando en ese puerto. Los puertos inferiores a 1024 requieren
		// permisos de administracion. Informar al usuario lo ocurrido en la barra de estado
		statusBar()->showMessage(tr("Could not listen: %1").arg(server->errorString()));
		return false;
	}
}

bool MainWindow::connectAsClient(const QString& host, quint16 port)
{
	// El usuario quiere que esta instancia del programa se conecte a un servidor que esta
	// esperando en la direccion y puerto dado
	statusBar()->showMessage(tr("Connecting to %1:%2...").arg(host).arg(port));

	// Un socket es una conexion con otra maquina. Crear uno tratar de establecer la conexion
	if ( ! connection ) connection = new QTcpSocket(this);
	connection->connectToHost(host, port);

	// La conexion no se establece de inmediato. Mientras tanto, el cliente puede hacer otras
	// tareas. Cuando la conexion finalmente se haya establecido, el QTcpSocket lo avisara
	// emitiendo la sennal connected(). En ese momento, invocaremos el metodo connectionEstablished
	// el cual se encarga de habilitar la interfaz para poder chatear
	connect(connection, SIGNAL(connected()), this, SLOT(connectionEstablished()));
	return false;
}

void MainWindow::newConnectionAsked()
{
	// Un cliente solicito conectarse con este servidor en el puerto dado. Aceptarle la
	// conexion con nextPendingConnection() y avisarlo en la barra de estado
	connection = server->nextPendingConnection();

	// Si se pierde la conexion con este cliente, eliminar el objeto connection para
	// ahorrar recursos y evitar enviarle datos que no va a recibir
	connect(connection, SIGNAL(disconnected()), connection, SLOT(deleteLater()));

	// Preparar la interfaz para que el usuario pueda escribir mensajes en el chat
	connectionEstablished();
}

void MainWindow::connectionEstablished()
{
	// Se ha establecido una conexion, sea como cliente o como servidor. Informarlo
	statusBar()->showMessage(tr("Connection established"), 2000);

	// Ahora se puede chatear con alguien mas. Habilitar el campo para introducir mensajes
	ui->messageLineEdit->setEnabled(true);

	// El boton de Connect ahora se comporta como el boton de Send
	ui->connectOrSendButton->setText(tr("&Send"));

	// Tambien alguien al otro lado de la conexion puede enviarnos mensajes. El socket
	// emite la sennal readyRead() cuando se nos ha enviado datos por la red
	connect(connection, SIGNAL(readyRead()), this, SLOT(messageReceived()));
}

void MainWindow::messageReceived()
{
	// Se ha recibido un mensaje por la conexion. La conexion trabaja como un archivo.
	// Cuando leemos de un archivo tradicional la informacion proviene de disco o del
	// teclado. Cuando leemos de un QTcpSocket la informacion no viene de disco o teclado
	// sino de otra maquina, al otro lado de la conexion. El QTcpSocket trabaja en binario.
	// Si queremos leer texto, un QTextStream se comporta como un std::cin, que
	// en lugar de procesar texto ingresado en teclado, procesa texto enviado desde el otro
	// lado de la conexion.
	QTextStream otherMachine(connection);

	// Sacar la linea enviada desde la otra maquina y agregarla al historial de la conversacion
	ui->conversationHistory->append(otherMachine.readLine());
}

void MainWindow::sendMessage()
{
	// El usuario escribe el mensaje que quiere enviar en el campo de texto. Obtener el mensaje
	const QString& message = ui->messageLineEdit->text();

	// Si el mensaje tras quitarle espacios en blanco al inicio y final es vacio, no enviar nada
	if ( message.trimmed().length() == 0 ) return;

	// Agregar el mensaje al historial de la conversacion
	ui->conversationHistory->append(message);

	// Se va a enviar el mensaje por la conexion. La conexion trabaja como un archivo.
	// Cuando escribimos en un archivo tradicional la informacion va a parar al disco.
	// Cuando escribimos en un QTcpSocket la informacion no va a parar a disco sino a
	// otra maquina, al otro lado de la conexion. El QTcpSocket trabaja en binario. Si
	// queremos enviar texto, un QTextStream se comporta como un std::cout, que
	// en lugar de enviar salida a la pantalla, lo hace al otro lado de la conexion
	Q_ASSERT(connection);
	QTextStream otherMachine(connection);
	otherMachine << message << endl;
}

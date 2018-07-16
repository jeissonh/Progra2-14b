#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>

// Forward declarations
namespace Ui { class MainWindow; }
class QTcpServer;
class QTcpSocket;

/**
	@brief Ventana principal del Chat
	Contiene un campo de texto multilinea para representar el historial de la conversacion,
	un campo de texto para introducir nuevos mensajes y un boton que actua como boton de
	conectar cuando no hay conexion, o boton de enviar mensajes cuando se tiene conexion.
 */
class MainWindow : public QMainWindow
{
	Q_OBJECT
	Q_DISABLE_COPY(MainWindow)

  private:
	/// Interfaz creada con el disennador de formularios de Qt (QtDesigner)
	Ui::MainWindow* ui = nullptr;
	/// Si el usuario solicita que esta copia de la aplicacion corriendo se comporte como un
	/// servidor, se creara un servidor TCP capaz de escuchar por conexiones
	QTcpServer* server = nullptr;
	/// Conexion con otra instancia de esta aplicacion ejecutandose. Se usa tanto en modo
	/// cliente como en modo servidor
	QTcpSocket* connectionWithServer = nullptr;
	/// Registra todas las conexiones aceptadas de clientes. Esto permite que varias personas
	/// puedan chatear simultaneamente, y no solo dos
	QList<QTcpSocket*> connectionsWithClients;
	/// Nombre del usuario actual que es usado para identificar a cada interlocutor
	QString nickname;

  public:
	/// Constructor
	explicit MainWindow(QWidget* parent = nullptr);
	/// Destructor
	virtual ~MainWindow();

  protected slots:
	/// Se invoca cuando se presiona el boton Connect o el boton Send
	void connectOrSend();
	/// Se invoca cuando esta en modo servidor y un cliente solicito conectarse con el
	void clientAskedForNewConnection();
	/// Se invoca cuando el servidor ha aceptado una conexion con el cliente en ambos lados:
	/// tanto en el servidor como en el cliente
	void connectionEstablished();
	/// Se invoca cuando ocurre un error de conexion
	void connectionFailed();
	/// Se invoca cuando se ha desconectado con el servidor o cuando un cliente se desconecta
	void connectionTerminated();
	/// Se invoca cuando se ha recibido un mensaje de la otra instancia del programa con la que
	/// esta conectada esta instancia. Los mensajes son normalmente textos que los usuarios del
	/// chat quieren comunicar a los demas, y deben aparecer en el historial de la conversacion
	void messageReceived();
	/// Se invoca cada vez que el usuario pide enviar un mensaje a la conversacion. Ocurre cuando
	/// se presiona Enter en el campo de texto de mensaje o cuando se presiona el boton Send
	void sendMessage();
	/// Envia el mensaje dado a todos los clientes conectados
	/// @param El mensaje a enviar a cada cliente
	void broadcastMessage(const QString& message);

  protected:
	/// Muestra el dialogo para solicitar los detalles de conexion. Si el dialogo es aceptado
	/// intenta establecer una conexion
	void connectToNetwork();
	/// Si el usuario pide que esta instancia del programa se conecte como servidor, pondra al
	/// TCP Server a escuchar en un puerto de esta maquina
	bool connectAsServer(quint16 port);
	/// Si el usuario pide que esta instancia del programa se conecte como cliente, tratara de
	/// establecer una conexion con un servidor que esta escuchando en esta u otra maquina en
	/// en cierto puerto de red
	bool connectAsClient(const QString& host, quint16 port);
};

#endif // MAINWINDOW_H

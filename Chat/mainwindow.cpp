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
	ui->setupUi(this);

	connect(ui->connectOrSendButton, SIGNAL(clicked()), this, SLOT(connectOrSend()));
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::connectOrSend()
{
	ui->connectOrSendButton->text() == tr("&Connect") ? connectToNetwork() : sendMessage();
}

void MainWindow::newConnectionAsked()
{
	//statusBar()->showMessage(tr("New connection stablished"));
	connection = server->nextPendingConnection();
	connect(connection, SIGNAL(disconnected()), connection, SLOT(deleteLater()));
	connectionStablished();
}

void MainWindow::connectionStablished()
{
	statusBar()->showMessage(tr("Connection stablished!"));
	ui->connectOrSendButton->setText(tr("&Send"));
	connect(connection, SIGNAL(readyRead()), this, SLOT(messageReceived()));
}

void MainWindow::messageReceived()
{
	QTextStream otherMachine(connection);
	ui->conversationHistory->append(otherMachine.readLine());
}

void MainWindow::connectToNetwork()
{
	ConnectDialog* dialog = new ConnectDialog(this);
	if ( dialog->exec() )
	{
		quint16 port = dialog->getPort().toUInt();
		if ( dialog->shouldConnectAsServer() )
			connectAsServer(port);
		else
			connectAsClient(dialog->getHost(), port);
	}
}

bool MainWindow::connectAsServer(quint16 port)
{
	if ( ! server ) server = new QTcpServer(this);
	if ( server->listen(QHostAddress::LocalHost, port) )
	{
		statusBar()->showMessage(tr("Listening in %1:%2")
			.arg(server->serverAddress().toString()).arg(server->serverPort()));
	}
	else
	{
		statusBar()->showMessage(tr("Could not listen: %1").arg(server->errorString()));
		return false;
	}
	connect(server, SIGNAL(newConnection()), this, SLOT(newConnectionAsked()));
	return true;
}

bool MainWindow::connectAsClient(const QString& host, quint16 port)
{
	statusBar()->showMessage(tr("Connecting as client to %1:%2...").arg(host).arg(port));
	if ( ! connection ) connection = new QTcpSocket(this);
	connection->connectToHost(host, port);
	connect(connection, SIGNAL(connected()), this, SLOT(connectionStablished()));
	return false;
}

void MainWindow::sendMessage()
{
	Q_ASSERT(connection);

	const QString& message = ui->messageLineEdit->text();
	if ( message.trimmed().length() == 0 ) return;

	ui->conversationHistory->append(message);

	QTextStream otherMachine(connection);
	otherMachine << message << endl;
}

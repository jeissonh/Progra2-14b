#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui { class MainWindow; }
class QTcpServer;
class QTcpSocket;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private:
	Ui::MainWindow *ui;
	QTcpServer* server;
	QTcpSocket* connection;

protected slots:
	void connectOrSend();
	void newConnectionAsked();
	void connectionStablished();
	void messageReceived();

  protected:
	void connectToNetwork();
	bool connectAsServer(quint16 port);
	bool connectAsClient(const QString& host, quint16 port);
	void sendMessage();
};

#endif // MAINWINDOW_H

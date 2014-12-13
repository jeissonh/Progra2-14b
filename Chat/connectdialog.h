#ifndef CONNECTDIALOG_H
#define CONNECTDIALOG_H

#include <QDialog>

namespace Ui {class ConnectDialog;}

/**
	@brief Dialogo que solicita informacion necesaria para establecer conexion con otros
	usuarios del chat. Se solicita el modo de conexion (cliente / servidor), el nombre del
	servidor (en modo cliente), y el puerto (en ambos modos).
 */
class ConnectDialog : public QDialog
{
	Q_OBJECT

  private:
	/// Disenno del dialogo hecho con QtDesigner y aplicado a este objeto
	Ui::ConnectDialog *ui;

  public:
	/// Constructor
	explicit ConnectDialog(QWidget *parent = 0);
	/// Destructor
	~ConnectDialog();
	/// Retorna true si el usuario quiere que esta instancia del programa espere por clientes
	/// Si retorna false, es porque el usuario quiere que esta copia del programa se conecte
	/// como un cliente a un servidor que esta escuchando por conexiones
	bool shouldConnectAsServer() const;
	/// Retorna el nombre del servidor al que quiere conectar el usuario si es en modo cliente
	QString getHost() const;
	/// Retorna el puerto introducido por el usuario. Esta instancia del programa esperara por
	/// conexiones en este puerto si corre en modo servidor. Si corre en modo cliente, buscara
	/// al servidor en este puerto
	QString getPort() const;

  private slots:
	void on_clientRadioButton_clicked();
};

#endif // CONNECTDIALOG_H

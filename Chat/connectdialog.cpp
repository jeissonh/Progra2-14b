#include "connectdialog.h"
#include "ui_connectdialog.h"

ConnectDialog::ConnectDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::ConnectDialog)
{
	ui->setupUi(this);
	setFixedHeight( sizeHint().height() );
}

ConnectDialog::~ConnectDialog()
{
	delete ui;
}

bool ConnectDialog::shouldConnectAsServer() const
{
	return ui->serverRadioButton->isChecked();
}

QString ConnectDialog::getHost() const
{
	return ui->hostLineEdit->text();
}

QString ConnectDialog::getPort() const
{
	return ui->portLineEdit->text();
}

void ConnectDialog::on_clientRadioButton_clicked()
{
	if ( ui->hostLineEdit->text().trimmed().length() == 0 )
		ui->hostLineEdit->setText("localhost");
}

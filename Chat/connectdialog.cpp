#include "connectdialog.h"
#include "ui_connectdialog.h"

ConnectDialog::ConnectDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::ConnectDialog)
{
	ui->setupUi(this);
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

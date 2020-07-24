#include "window_registernewaccount.h"
#include "ui_window_registernewaccount.h"

Window_RegisterNewAccount::Window_RegisterNewAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_RegisterNewAccount)
{
    ui->setupUi(this);
}

Window_RegisterNewAccount::~Window_RegisterNewAccount()
{
    delete ui;
}

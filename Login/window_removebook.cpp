#include "window_removebook.h"
#include "ui_window_removebook.h"

Window_RemoveBook::Window_RemoveBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_RemoveBook)
{
    ui->setupUi(this);
}

Window_RemoveBook::~Window_RemoveBook()
{
    delete ui;
}

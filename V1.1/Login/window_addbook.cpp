#include "window_addbook.h"
#include "ui_window_addbook.h"

Window_AddBook::Window_AddBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_AddBook)
{
    ui->setupUi(this);
}

Window_AddBook::~Window_AddBook()
{
    delete ui;
}

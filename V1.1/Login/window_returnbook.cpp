#include "window_returnbook.h"
#include "ui_window_returnbook.h"

Window_ReturnBook::Window_ReturnBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_ReturnBook)
{
    ui->setupUi(this);
}

Window_ReturnBook::~Window_ReturnBook()
{
    delete ui;
}

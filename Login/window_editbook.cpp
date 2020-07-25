#include "window_editbook.h"
#include "ui_window_editbook.h"

Window_EditBook::Window_EditBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_EditBook)
{
    ui->setupUi(this);
}

Window_EditBook::~Window_EditBook()
{
    delete ui;
}

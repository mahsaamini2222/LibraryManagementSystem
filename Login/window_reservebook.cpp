#include "window_reservebook.h"
#include "ui_window_reservebook.h"

Window_ReserveBook::Window_ReserveBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_ReserveBook)
{
    ui->setupUi(this);
}

Window_ReserveBook::~Window_ReserveBook()
{
    delete ui;
}

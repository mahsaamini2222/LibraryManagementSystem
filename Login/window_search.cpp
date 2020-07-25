#include "window_search.h"
#include "ui_window_search.h"

Window_Search::Window_Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Window_Search)
{
    ui->setupUi(this);
}

Window_Search::~Window_Search()
{
    delete ui;
}

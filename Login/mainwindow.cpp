#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_Login_clicked()
{
    QString UserName=ui->lineEdit_Username->text();
    QString Password=ui->lineEdit_Password->text();

    if(UserName=="ADMIN"&&Password=="ADMINPASS"){
        QMessageBox::information(this," ","Login Succesful!");
        hide();
        Window_Main =new Window_main(this);
        Window_Main->show();
       // Window_main->show();
   }
    else{
         QMessageBox::warning(this," ","Incorrect UserName or Password");
    }
}

#include "window_removebook.h"
#include "ui_window_removebook.h"
#include <QJsonObject>
#include <QString>
#include <QFile>
#include <QDebug>

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

void Window_RemoveBook::on_pushButton_RemoveBook_clicked()
{
    const QString & BookId = ui->lineEdit_BookId->text();
    QFile file("/home/nilsa/Documents/AP/LibraryManagementSystem/V1.1/Login/AddedBooks.json"); // json file
    if( !file.open( QIODevice::ReadWrite ) ) //write json content to file.
    {
        qDebug()<<"error opening file for removing the book.\n";
    }
     QJsonDocument jsonOrg = QJsonDocument::fromJson( file.readAll() );
//    char book_id[30];
//    strcpy(book_id,BookId);
//      jsonOrg.remove(BookId);
      QJsonArray arrLog = jsonOrg.array();
//      remove(arrLog.find(BookId));
      QJsonObject element [arrLog.count];
      for(int i=0;i<arrLog.count();i++) {
      element[i] = arrLog.at(i).toObject();
      }
//      qDebug() << element.value("number").toInt();
      QJsonDocument doc( arrLog );

      file.write(doc.toJson());
      file.close();
//    file.write(doc.toJson());
    file.close();


}

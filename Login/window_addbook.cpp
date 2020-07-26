#include "window_addbook.h"
#include "ui_window_addbook.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <bits/stdc++.h>
#include <QDateTime>
#include <QString>

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

void Window_AddBook::on_pushButton_AddBook_clicked()
{
     QString BookId = ui->lineEdit_BookId->text();
     QString BookName = ui->lineEdit_BookName->text();
     QString Author = ui->lineEdit_AuthorName->text();
     QString Subject = ui->lineEdit_Subject->text();
    QFile file("/home/nilsa/Documents/AP/LibraryManagementSystem/V1.1/Login/AddedBooks.json"); // json file
    if( !file.open( QIODevice::ReadOnly ) ) //read json content
    {
        qDebug()<<"error opening file for read.\n";
    }

    QJsonDocument jsonDoc = QJsonDocument::fromJson( file.readAll() );
    file.close();


    QJsonObject Books = { /*{"id", BookId},*/
                                   {"status", "available"},
                                   {"date_added", QDateTime::currentDateTime().toString( "yyyy-MM-dd hh:mm:ss" )},
                                   {"name", BookName},
                                   {"author", Author},
                                   {"subject", Subject}
                                 };
    QJsonObject ObjID =  {{ BookId, Books }};

    QJsonArray jArr = jsonDoc.array();
    jArr.push_back( ObjID );

    QJsonDocument doc( jArr );

    if( !file.open( QIODevice::WriteOnly ) ) //write json content to file.
    {
        qDebug()<<"error opening file for write.\n";
    }

    file.write(doc.toJson());
    file.close();


}



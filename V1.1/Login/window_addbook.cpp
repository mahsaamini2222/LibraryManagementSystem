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
int LibraryBookCount=0;
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
     QString BookName = ui->lineEdit_BookName->text();
     QString Author = ui->lineEdit_AuthorName->text();
     QString Subject = ui->lineEdit_Subject->text();
//    QFile f2("/home/nilsa/Documents/AP/LibraryManagementSystem/V1.1/Login/AddedBooks.json");
//    f2.open(QIODevice::Append);
//    QVector <QJsonObject> j;
//    int id=LibraryBookCount;
//    j[id]["id"] = LibraryBookCount;
    LibraryBookCount ++;
//    j[id]["status"] ="available";
//    j[id]["name"] ="Titiana";
//    j[id]["author"] ="felani";
//    j[id]["subject"] ="psychology";
//    QJsonDocument d(j[id]);

//    f2.write(d.toJson());

    QFile file("/home/nilsa/Documents/AP/LibraryManagementSystem/V1.1/Login/AddedBooks.json"); // json file
    if( !file.open( QIODevice::ReadOnly ) ) //read json content
    {
        qDebug()<<"error opening file for read.\n";
    }

    QJsonDocument jsonOrg = QJsonDocument::fromJson( file.readAll() );
    file.close();


    QJsonObject projectDetails = { /*{"id", LibraryBookCount},*/
                                   {"status", "available"},
                                   {"date_added", QDateTime::currentDateTime().toString( "yyyy-MM-dd hh:mm:ss" )},
                                   {"name", BookName},
                                   {"author", Author},
                                   {"subject", Subject}
                                 };
    QJsonObject notificationObj =  {{ BookName, projectDetails }};

    QJsonArray arrLog = jsonOrg.array();
    arrLog.push_back( notificationObj );

    QJsonDocument doc( arrLog );

    if( !file.open( QIODevice::WriteOnly ) ) //write json content to file.
    {
        qDebug()<<"error opening file for write.\n";
    }

    file.write(doc.toJson());
    file.close();


}



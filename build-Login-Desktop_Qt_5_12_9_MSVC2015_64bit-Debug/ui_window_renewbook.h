/********************************************************************************
** Form generated from reading UI file 'window_renewbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_RENEWBOOK_H
#define UI_WINDOW_RENEWBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_RenewBook
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget_RentedBooks;
    QPushButton *pushButton_RenewBook;

    void setupUi(QDialog *Window_RenewBook)
    {
        if (Window_RenewBook->objectName().isEmpty())
            Window_RenewBook->setObjectName(QString::fromUtf8("Window_RenewBook"));
        Window_RenewBook->resize(747, 538);
        widget = new QWidget(Window_RenewBook);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 70, 521, 381));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget_RentedBooks = new QTableWidget(widget);
        if (tableWidget_RentedBooks->columnCount() < 4)
            tableWidget_RentedBooks->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_RentedBooks->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_RentedBooks->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_RentedBooks->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_RentedBooks->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_RentedBooks->setObjectName(QString::fromUtf8("tableWidget_RentedBooks"));

        verticalLayout->addWidget(tableWidget_RentedBooks);

        pushButton_RenewBook = new QPushButton(widget);
        pushButton_RenewBook->setObjectName(QString::fromUtf8("pushButton_RenewBook"));

        verticalLayout->addWidget(pushButton_RenewBook);


        retranslateUi(Window_RenewBook);

        QMetaObject::connectSlotsByName(Window_RenewBook);
    } // setupUi

    void retranslateUi(QDialog *Window_RenewBook)
    {
        Window_RenewBook->setWindowTitle(QApplication::translate("Window_RenewBook", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_RentedBooks->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Window_RenewBook", "BookName", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_RentedBooks->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Window_RenewBook", "Subject", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_RentedBooks->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Window_RenewBook", "Author", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_RentedBooks->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Window_RenewBook", "RentedUntil", nullptr));
        pushButton_RenewBook->setText(QApplication::translate("Window_RenewBook", "RenewBook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_RenewBook: public Ui_Window_RenewBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_RENEWBOOK_H

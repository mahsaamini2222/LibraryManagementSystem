/********************************************************************************
** Form generated from reading UI file 'window_returnbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_RETURNBOOK_H
#define UI_WINDOW_RETURNBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_ReturnBook
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget_BorrowedBooks;
    QPushButton *pushButton_ReturnBook;

    void setupUi(QDialog *Window_ReturnBook)
    {
        if (Window_ReturnBook->objectName().isEmpty())
            Window_ReturnBook->setObjectName(QStringLiteral("Window_ReturnBook"));
        Window_ReturnBook->resize(673, 529);
        widget = new QWidget(Window_ReturnBook);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 80, 511, 341));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget_BorrowedBooks = new QTableWidget(widget);
        if (tableWidget_BorrowedBooks->columnCount() < 4)
            tableWidget_BorrowedBooks->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_BorrowedBooks->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_BorrowedBooks->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_BorrowedBooks->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_BorrowedBooks->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_BorrowedBooks->setObjectName(QStringLiteral("tableWidget_BorrowedBooks"));

        verticalLayout->addWidget(tableWidget_BorrowedBooks);

        pushButton_ReturnBook = new QPushButton(widget);
        pushButton_ReturnBook->setObjectName(QStringLiteral("pushButton_ReturnBook"));

        verticalLayout->addWidget(pushButton_ReturnBook);


        retranslateUi(Window_ReturnBook);

        QMetaObject::connectSlotsByName(Window_ReturnBook);
    } // setupUi

    void retranslateUi(QDialog *Window_ReturnBook)
    {
        Window_ReturnBook->setWindowTitle(QApplication::translate("Window_ReturnBook", "Dialog", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_BorrowedBooks->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Window_ReturnBook", "BookName", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_BorrowedBooks->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Window_ReturnBook", "Subject", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_BorrowedBooks->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Window_ReturnBook", "Author", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_BorrowedBooks->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Window_ReturnBook", "RentedUntil", Q_NULLPTR));
        pushButton_ReturnBook->setText(QApplication::translate("Window_ReturnBook", "ReturnBook", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_ReturnBook: public Ui_Window_ReturnBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_RETURNBOOK_H

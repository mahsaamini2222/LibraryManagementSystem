/********************************************************************************
** Form generated from reading UI file 'window_removereservation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_REMOVERESERVATION_H
#define UI_WINDOW_REMOVERESERVATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_RemoveReservation
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget_ReservedBooks;
    QPushButton *pushButton_CancelReservation;

    void setupUi(QDialog *Window_RemoveReservation)
    {
        if (Window_RemoveReservation->objectName().isEmpty())
            Window_RemoveReservation->setObjectName(QString::fromUtf8("Window_RemoveReservation"));
        Window_RemoveReservation->resize(620, 467);
        widget = new QWidget(Window_RemoveReservation);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 80, 391, 311));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget_ReservedBooks = new QTableWidget(widget);
        if (tableWidget_ReservedBooks->columnCount() < 3)
            tableWidget_ReservedBooks->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_ReservedBooks->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_ReservedBooks->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_ReservedBooks->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget_ReservedBooks->setObjectName(QString::fromUtf8("tableWidget_ReservedBooks"));

        verticalLayout->addWidget(tableWidget_ReservedBooks);

        pushButton_CancelReservation = new QPushButton(widget);
        pushButton_CancelReservation->setObjectName(QString::fromUtf8("pushButton_CancelReservation"));

        verticalLayout->addWidget(pushButton_CancelReservation);


        retranslateUi(Window_RemoveReservation);

        QMetaObject::connectSlotsByName(Window_RemoveReservation);
    } // setupUi

    void retranslateUi(QDialog *Window_RemoveReservation)
    {
        Window_RemoveReservation->setWindowTitle(QApplication::translate("Window_RemoveReservation", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_ReservedBooks->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Window_RemoveReservation", "BookName", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_ReservedBooks->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Window_RemoveReservation", "Subject", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_ReservedBooks->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Window_RemoveReservation", "Author", nullptr));
        pushButton_CancelReservation->setText(QApplication::translate("Window_RemoveReservation", "CancelReservation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_RemoveReservation: public Ui_Window_RemoveReservation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_REMOVERESERVATION_H

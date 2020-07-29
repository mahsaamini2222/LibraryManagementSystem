/********************************************************************************
** Form generated from reading UI file 'window_addbook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_ADDBOOK_H
#define UI_WINDOW_ADDBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_AddBook
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit_BookId;
    QHBoxLayout *horizontalLayout;
    QLabel *label_BookName;
    QLineEdit *lineEdit_BookName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_AuthorName;
    QLineEdit *lineEdit_AuthorName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Subject;
    QLineEdit *lineEdit_Subject;
    QPushButton *pushButton_AddBook;

    void setupUi(QDialog *Window_AddBook)
    {
        if (Window_AddBook->objectName().isEmpty())
            Window_AddBook->setObjectName(QString::fromUtf8("Window_AddBook"));
        Window_AddBook->resize(617, 490);
        widget = new QWidget(Window_AddBook);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(170, 80, 271, 291));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        lineEdit_BookId = new QLineEdit(widget);
        lineEdit_BookId->setObjectName(QString::fromUtf8("lineEdit_BookId"));

        horizontalLayout_4->addWidget(lineEdit_BookId);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_BookName = new QLabel(widget);
        label_BookName->setObjectName(QString::fromUtf8("label_BookName"));

        horizontalLayout->addWidget(label_BookName);

        lineEdit_BookName = new QLineEdit(widget);
        lineEdit_BookName->setObjectName(QString::fromUtf8("lineEdit_BookName"));

        horizontalLayout->addWidget(lineEdit_BookName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_AuthorName = new QLabel(widget);
        label_AuthorName->setObjectName(QString::fromUtf8("label_AuthorName"));

        horizontalLayout_2->addWidget(label_AuthorName);

        lineEdit_AuthorName = new QLineEdit(widget);
        lineEdit_AuthorName->setObjectName(QString::fromUtf8("lineEdit_AuthorName"));

        horizontalLayout_2->addWidget(lineEdit_AuthorName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_Subject = new QLabel(widget);
        label_Subject->setObjectName(QString::fromUtf8("label_Subject"));

        horizontalLayout_3->addWidget(label_Subject);

        lineEdit_Subject = new QLineEdit(widget);
        lineEdit_Subject->setObjectName(QString::fromUtf8("lineEdit_Subject"));

        horizontalLayout_3->addWidget(lineEdit_Subject);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_AddBook = new QPushButton(widget);
        pushButton_AddBook->setObjectName(QString::fromUtf8("pushButton_AddBook"));

        verticalLayout->addWidget(pushButton_AddBook);


        retranslateUi(Window_AddBook);

        QMetaObject::connectSlotsByName(Window_AddBook);
    } // setupUi

    void retranslateUi(QDialog *Window_AddBook)
    {
        Window_AddBook->setWindowTitle(QCoreApplication::translate("Window_AddBook", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Window_AddBook", "Book Id", nullptr));
        label_BookName->setText(QCoreApplication::translate("Window_AddBook", "BookName", nullptr));
        label_AuthorName->setText(QCoreApplication::translate("Window_AddBook", "Author", nullptr));
        label_Subject->setText(QCoreApplication::translate("Window_AddBook", "Subject", nullptr));
        pushButton_AddBook->setText(QCoreApplication::translate("Window_AddBook", "AddBook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_AddBook: public Ui_Window_AddBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_ADDBOOK_H

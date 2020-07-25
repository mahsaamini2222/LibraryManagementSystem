/********************************************************************************
** Form generated from reading UI file 'window_editbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_EDITBOOK_H
#define UI_WINDOW_EDITBOOK_H

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

class Ui_Window_EditBook
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_BookName;
    QLineEdit *lineEdit_BookName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_AuthorName;
    QLineEdit *lineEdit_AuthorName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Subject;
    QLineEdit *lineEdit_Subject;
    QPushButton *pushButton_EditBook;

    void setupUi(QDialog *Window_EditBook)
    {
        if (Window_EditBook->objectName().isEmpty())
            Window_EditBook->setObjectName(QString::fromUtf8("Window_EditBook"));
        Window_EditBook->resize(581, 482);
        layoutWidget = new QWidget(Window_EditBook);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 110, 271, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_BookName = new QLabel(layoutWidget);
        label_BookName->setObjectName(QString::fromUtf8("label_BookName"));

        horizontalLayout->addWidget(label_BookName);

        lineEdit_BookName = new QLineEdit(layoutWidget);
        lineEdit_BookName->setObjectName(QString::fromUtf8("lineEdit_BookName"));

        horizontalLayout->addWidget(lineEdit_BookName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_AuthorName = new QLabel(layoutWidget);
        label_AuthorName->setObjectName(QString::fromUtf8("label_AuthorName"));

        horizontalLayout_2->addWidget(label_AuthorName);

        lineEdit_AuthorName = new QLineEdit(layoutWidget);
        lineEdit_AuthorName->setObjectName(QString::fromUtf8("lineEdit_AuthorName"));

        horizontalLayout_2->addWidget(lineEdit_AuthorName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_Subject = new QLabel(layoutWidget);
        label_Subject->setObjectName(QString::fromUtf8("label_Subject"));

        horizontalLayout_3->addWidget(label_Subject);

        lineEdit_Subject = new QLineEdit(layoutWidget);
        lineEdit_Subject->setObjectName(QString::fromUtf8("lineEdit_Subject"));

        horizontalLayout_3->addWidget(lineEdit_Subject);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_EditBook = new QPushButton(layoutWidget);
        pushButton_EditBook->setObjectName(QString::fromUtf8("pushButton_EditBook"));

        verticalLayout->addWidget(pushButton_EditBook);


        retranslateUi(Window_EditBook);

        QMetaObject::connectSlotsByName(Window_EditBook);
    } // setupUi

    void retranslateUi(QDialog *Window_EditBook)
    {
        Window_EditBook->setWindowTitle(QApplication::translate("Window_EditBook", "Dialog", nullptr));
        label_BookName->setText(QApplication::translate("Window_EditBook", "BookName", nullptr));
        label_AuthorName->setText(QApplication::translate("Window_EditBook", "Author", nullptr));
        label_Subject->setText(QApplication::translate("Window_EditBook", "Subject", nullptr));
        pushButton_EditBook->setText(QApplication::translate("Window_EditBook", "EditBook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_EditBook: public Ui_Window_EditBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_EDITBOOK_H

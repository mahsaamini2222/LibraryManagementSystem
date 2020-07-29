/********************************************************************************
** Form generated from reading UI file 'window_issuebook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_ISSUEBOOK_H
#define UI_WINDOW_ISSUEBOOK_H

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

class Ui_Window_IssueBook
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
    QPushButton *pushButton_IssueBook;

    void setupUi(QDialog *Window_IssueBook)
    {
        if (Window_IssueBook->objectName().isEmpty())
            Window_IssueBook->setObjectName(QString::fromUtf8("Window_IssueBook"));
        Window_IssueBook->resize(493, 432);
        layoutWidget = new QWidget(Window_IssueBook);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 80, 271, 241));
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

        pushButton_IssueBook = new QPushButton(layoutWidget);
        pushButton_IssueBook->setObjectName(QString::fromUtf8("pushButton_IssueBook"));

        verticalLayout->addWidget(pushButton_IssueBook);


        retranslateUi(Window_IssueBook);

        QMetaObject::connectSlotsByName(Window_IssueBook);
    } // setupUi

    void retranslateUi(QDialog *Window_IssueBook)
    {
        Window_IssueBook->setWindowTitle(QCoreApplication::translate("Window_IssueBook", "Dialog", nullptr));
        label_BookName->setText(QCoreApplication::translate("Window_IssueBook", "BookName", nullptr));
        label_AuthorName->setText(QCoreApplication::translate("Window_IssueBook", "Author", nullptr));
        label_Subject->setText(QCoreApplication::translate("Window_IssueBook", "Subject", nullptr));
        pushButton_IssueBook->setText(QCoreApplication::translate("Window_IssueBook", "IssueBook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_IssueBook: public Ui_Window_IssueBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_ISSUEBOOK_H

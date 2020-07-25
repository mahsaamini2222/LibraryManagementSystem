/********************************************************************************
** Form generated from reading UI file 'window_removebook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_REMOVEBOOK_H
#define UI_WINDOW_REMOVEBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_RemoveBook
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
    QPushButton *pushButton_RemoveBook;

    void setupUi(QDialog *Window_RemoveBook)
    {
        if (Window_RemoveBook->objectName().isEmpty())
            Window_RemoveBook->setObjectName(QStringLiteral("Window_RemoveBook"));
        Window_RemoveBook->resize(541, 465);
        layoutWidget = new QWidget(Window_RemoveBook);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 100, 271, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_BookName = new QLabel(layoutWidget);
        label_BookName->setObjectName(QStringLiteral("label_BookName"));

        horizontalLayout->addWidget(label_BookName);

        lineEdit_BookName = new QLineEdit(layoutWidget);
        lineEdit_BookName->setObjectName(QStringLiteral("lineEdit_BookName"));

        horizontalLayout->addWidget(lineEdit_BookName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_AuthorName = new QLabel(layoutWidget);
        label_AuthorName->setObjectName(QStringLiteral("label_AuthorName"));

        horizontalLayout_2->addWidget(label_AuthorName);

        lineEdit_AuthorName = new QLineEdit(layoutWidget);
        lineEdit_AuthorName->setObjectName(QStringLiteral("lineEdit_AuthorName"));

        horizontalLayout_2->addWidget(lineEdit_AuthorName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Subject = new QLabel(layoutWidget);
        label_Subject->setObjectName(QStringLiteral("label_Subject"));

        horizontalLayout_3->addWidget(label_Subject);

        lineEdit_Subject = new QLineEdit(layoutWidget);
        lineEdit_Subject->setObjectName(QStringLiteral("lineEdit_Subject"));

        horizontalLayout_3->addWidget(lineEdit_Subject);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_RemoveBook = new QPushButton(layoutWidget);
        pushButton_RemoveBook->setObjectName(QStringLiteral("pushButton_RemoveBook"));

        verticalLayout->addWidget(pushButton_RemoveBook);


        retranslateUi(Window_RemoveBook);

        QMetaObject::connectSlotsByName(Window_RemoveBook);
    } // setupUi

    void retranslateUi(QDialog *Window_RemoveBook)
    {
        Window_RemoveBook->setWindowTitle(QApplication::translate("Window_RemoveBook", "Dialog", Q_NULLPTR));
        label_BookName->setText(QApplication::translate("Window_RemoveBook", "BookName", Q_NULLPTR));
        label_AuthorName->setText(QApplication::translate("Window_RemoveBook", "Author", Q_NULLPTR));
        label_Subject->setText(QApplication::translate("Window_RemoveBook", "Subject", Q_NULLPTR));
        pushButton_RemoveBook->setText(QApplication::translate("Window_RemoveBook", "RemoveBook", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_RemoveBook: public Ui_Window_RemoveBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_REMOVEBOOK_H

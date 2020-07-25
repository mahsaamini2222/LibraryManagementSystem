/********************************************************************************
** Form generated from reading UI file 'window_search.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_SEARCH_H
#define UI_WINDOW_SEARCH_H

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

class Ui_Window_Search
{
public:
    QWidget *widget;
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
    QPushButton *pushButton_SearchBook;

    void setupUi(QDialog *Window_Search)
    {
        if (Window_Search->objectName().isEmpty())
            Window_Search->setObjectName(QStringLiteral("Window_Search"));
        Window_Search->resize(624, 508);
        widget = new QWidget(Window_Search);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(180, 100, 271, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_BookName = new QLabel(widget);
        label_BookName->setObjectName(QStringLiteral("label_BookName"));

        horizontalLayout->addWidget(label_BookName);

        lineEdit_BookName = new QLineEdit(widget);
        lineEdit_BookName->setObjectName(QStringLiteral("lineEdit_BookName"));

        horizontalLayout->addWidget(lineEdit_BookName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_AuthorName = new QLabel(widget);
        label_AuthorName->setObjectName(QStringLiteral("label_AuthorName"));

        horizontalLayout_2->addWidget(label_AuthorName);

        lineEdit_AuthorName = new QLineEdit(widget);
        lineEdit_AuthorName->setObjectName(QStringLiteral("lineEdit_AuthorName"));

        horizontalLayout_2->addWidget(lineEdit_AuthorName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Subject = new QLabel(widget);
        label_Subject->setObjectName(QStringLiteral("label_Subject"));

        horizontalLayout_3->addWidget(label_Subject);

        lineEdit_Subject = new QLineEdit(widget);
        lineEdit_Subject->setObjectName(QStringLiteral("lineEdit_Subject"));

        horizontalLayout_3->addWidget(lineEdit_Subject);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_SearchBook = new QPushButton(widget);
        pushButton_SearchBook->setObjectName(QStringLiteral("pushButton_SearchBook"));

        verticalLayout->addWidget(pushButton_SearchBook);


        retranslateUi(Window_Search);

        QMetaObject::connectSlotsByName(Window_Search);
    } // setupUi

    void retranslateUi(QDialog *Window_Search)
    {
        Window_Search->setWindowTitle(QApplication::translate("Window_Search", "Dialog", Q_NULLPTR));
        label_BookName->setText(QApplication::translate("Window_Search", "BookName", Q_NULLPTR));
        label_AuthorName->setText(QApplication::translate("Window_Search", "Author", Q_NULLPTR));
        label_Subject->setText(QApplication::translate("Window_Search", "Subject", Q_NULLPTR));
        pushButton_SearchBook->setText(QApplication::translate("Window_Search", "Search", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_Search: public Ui_Window_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_SEARCH_H

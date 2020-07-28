/********************************************************************************
** Form generated from reading UI file 'window_editbook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_EDITBOOK_H
#define UI_WINDOW_EDITBOOK_H

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
            Window_EditBook->setObjectName(QStringLiteral("Window_EditBook"));
        Window_EditBook->resize(581, 482);
        layoutWidget = new QWidget(Window_EditBook);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 110, 271, 241));
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

        pushButton_EditBook = new QPushButton(layoutWidget);
        pushButton_EditBook->setObjectName(QStringLiteral("pushButton_EditBook"));

        verticalLayout->addWidget(pushButton_EditBook);


        retranslateUi(Window_EditBook);

        QMetaObject::connectSlotsByName(Window_EditBook);
    } // setupUi

    void retranslateUi(QDialog *Window_EditBook)
    {
        Window_EditBook->setWindowTitle(QApplication::translate("Window_EditBook", "Dialog", Q_NULLPTR));
        label_BookName->setText(QApplication::translate("Window_EditBook", "BookName", Q_NULLPTR));
        label_AuthorName->setText(QApplication::translate("Window_EditBook", "Author", Q_NULLPTR));
        label_Subject->setText(QApplication::translate("Window_EditBook", "Subject", Q_NULLPTR));
        pushButton_EditBook->setText(QApplication::translate("Window_EditBook", "EditBook", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_EditBook: public Ui_Window_EditBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_EDITBOOK_H

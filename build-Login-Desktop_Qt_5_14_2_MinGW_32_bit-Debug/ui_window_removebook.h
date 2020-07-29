/********************************************************************************
** Form generated from reading UI file 'window_removebook.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_REMOVEBOOK_H
#define UI_WINDOW_REMOVEBOOK_H

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

class Ui_Window_RemoveBook
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Subject;
    QLineEdit *lineEdit_BookId;
    QPushButton *pushButton_RemoveBook;

    void setupUi(QDialog *Window_RemoveBook)
    {
        if (Window_RemoveBook->objectName().isEmpty())
            Window_RemoveBook->setObjectName(QString::fromUtf8("Window_RemoveBook"));
        Window_RemoveBook->resize(541, 465);
        widget = new QWidget(Window_RemoveBook);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(141, 152, 271, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_Subject = new QLabel(widget);
        label_Subject->setObjectName(QString::fromUtf8("label_Subject"));

        horizontalLayout_3->addWidget(label_Subject);

        lineEdit_BookId = new QLineEdit(widget);
        lineEdit_BookId->setObjectName(QString::fromUtf8("lineEdit_BookId"));

        horizontalLayout_3->addWidget(lineEdit_BookId);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_RemoveBook = new QPushButton(widget);
        pushButton_RemoveBook->setObjectName(QString::fromUtf8("pushButton_RemoveBook"));

        verticalLayout->addWidget(pushButton_RemoveBook);


        retranslateUi(Window_RemoveBook);

        QMetaObject::connectSlotsByName(Window_RemoveBook);
    } // setupUi

    void retranslateUi(QDialog *Window_RemoveBook)
    {
        Window_RemoveBook->setWindowTitle(QCoreApplication::translate("Window_RemoveBook", "Dialog", nullptr));
        label_Subject->setText(QCoreApplication::translate("Window_RemoveBook", "book ID", nullptr));
        pushButton_RemoveBook->setText(QCoreApplication::translate("Window_RemoveBook", "RemoveBook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_RemoveBook: public Ui_Window_RemoveBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_REMOVEBOOK_H

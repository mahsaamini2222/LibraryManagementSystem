/********************************************************************************
** Form generated from reading UI file 'window_updateaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_UPDATEACCOUNT_H
#define UI_WINDOW_UPDATEACCOUNT_H

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

class Ui_Window_UpdateAccount
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Name;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Family;
    QLineEdit *lineEdit_Family;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_AccountType;
    QLineEdit *lineEdit_AccountType;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_ExpireDate;
    QLineEdit *lineEdit_ExpireDate;
    QPushButton *pushButton;

    void setupUi(QDialog *Window_UpdateAccount)
    {
        if (Window_UpdateAccount->objectName().isEmpty())
            Window_UpdateAccount->setObjectName(QString::fromUtf8("Window_UpdateAccount"));
        Window_UpdateAccount->resize(498, 416);
        widget = new QWidget(Window_UpdateAccount);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(120, 70, 217, 221));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_Name = new QLabel(widget);
        label_Name->setObjectName(QString::fromUtf8("label_Name"));

        horizontalLayout->addWidget(label_Name);

        lineEdit_Name = new QLineEdit(widget);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));
        lineEdit_Name->setEnabled(true);

        horizontalLayout->addWidget(lineEdit_Name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_Family = new QLabel(widget);
        label_Family->setObjectName(QString::fromUtf8("label_Family"));

        horizontalLayout_2->addWidget(label_Family);

        lineEdit_Family = new QLineEdit(widget);
        lineEdit_Family->setObjectName(QString::fromUtf8("lineEdit_Family"));

        horizontalLayout_2->addWidget(lineEdit_Family);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_AccountType = new QLabel(widget);
        label_AccountType->setObjectName(QString::fromUtf8("label_AccountType"));

        horizontalLayout_3->addWidget(label_AccountType);

        lineEdit_AccountType = new QLineEdit(widget);
        lineEdit_AccountType->setObjectName(QString::fromUtf8("lineEdit_AccountType"));

        horizontalLayout_3->addWidget(lineEdit_AccountType);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_ExpireDate = new QLabel(widget);
        label_ExpireDate->setObjectName(QString::fromUtf8("label_ExpireDate"));

        horizontalLayout_4->addWidget(label_ExpireDate);

        lineEdit_ExpireDate = new QLineEdit(widget);
        lineEdit_ExpireDate->setObjectName(QString::fromUtf8("lineEdit_ExpireDate"));

        horizontalLayout_4->addWidget(lineEdit_ExpireDate);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_2->addWidget(pushButton);


        retranslateUi(Window_UpdateAccount);

        QMetaObject::connectSlotsByName(Window_UpdateAccount);
    } // setupUi

    void retranslateUi(QDialog *Window_UpdateAccount)
    {
        Window_UpdateAccount->setWindowTitle(QCoreApplication::translate("Window_UpdateAccount", "Dialog", nullptr));
        label_Name->setText(QCoreApplication::translate("Window_UpdateAccount", "Name", nullptr));
        label_Family->setText(QCoreApplication::translate("Window_UpdateAccount", "Family", nullptr));
        label_AccountType->setText(QCoreApplication::translate("Window_UpdateAccount", "AcountType", nullptr));
        label_ExpireDate->setText(QCoreApplication::translate("Window_UpdateAccount", "ExpireDate", nullptr));
        pushButton->setText(QCoreApplication::translate("Window_UpdateAccount", "UpdateAccount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_UpdateAccount: public Ui_Window_UpdateAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_UPDATEACCOUNT_H

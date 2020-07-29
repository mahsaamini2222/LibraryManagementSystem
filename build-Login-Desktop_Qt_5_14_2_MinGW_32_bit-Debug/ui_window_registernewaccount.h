/********************************************************************************
** Form generated from reading UI file 'window_registernewaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_REGISTERNEWACCOUNT_H
#define UI_WINDOW_REGISTERNEWACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Window_RegisterNewAccount
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Name;
    QLineEdit *lineEdit_Name;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Family;
    QLineEdit *lineEdit_Family;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_AccountType;
    QRadioButton *radioButton_Admin;
    QRadioButton *radioButton_Member;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_ExpireDate;
    QLineEdit *lineEdit_ExpireDate;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_Password;
    QLineEdit *lineEdit_Password;
    QPushButton *pushButton_Register;

    void setupUi(QDialog *Window_RegisterNewAccount)
    {
        if (Window_RegisterNewAccount->objectName().isEmpty())
            Window_RegisterNewAccount->setObjectName(QString::fromUtf8("Window_RegisterNewAccount"));
        Window_RegisterNewAccount->resize(593, 516);
        widget = new QWidget(Window_RegisterNewAccount);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(172, 144, 261, 271));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        radioButton_Admin = new QRadioButton(widget);
        radioButton_Admin->setObjectName(QString::fromUtf8("radioButton_Admin"));

        horizontalLayout_3->addWidget(radioButton_Admin);

        radioButton_Member = new QRadioButton(widget);
        radioButton_Member->setObjectName(QString::fromUtf8("radioButton_Member"));

        horizontalLayout_3->addWidget(radioButton_Member);


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

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_Password = new QLabel(widget);
        label_Password->setObjectName(QString::fromUtf8("label_Password"));

        horizontalLayout_5->addWidget(label_Password);

        lineEdit_Password = new QLineEdit(widget);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));

        horizontalLayout_5->addWidget(lineEdit_Password);


        verticalLayout->addLayout(horizontalLayout_5);

        pushButton_Register = new QPushButton(widget);
        pushButton_Register->setObjectName(QString::fromUtf8("pushButton_Register"));

        verticalLayout->addWidget(pushButton_Register);


        retranslateUi(Window_RegisterNewAccount);

        QMetaObject::connectSlotsByName(Window_RegisterNewAccount);
    } // setupUi

    void retranslateUi(QDialog *Window_RegisterNewAccount)
    {
        Window_RegisterNewAccount->setWindowTitle(QCoreApplication::translate("Window_RegisterNewAccount", "Dialog", nullptr));
        label_Name->setText(QCoreApplication::translate("Window_RegisterNewAccount", "Name", nullptr));
        label_Family->setText(QCoreApplication::translate("Window_RegisterNewAccount", "Family", nullptr));
        label_AccountType->setText(QCoreApplication::translate("Window_RegisterNewAccount", "AcountType", nullptr));
        radioButton_Admin->setText(QCoreApplication::translate("Window_RegisterNewAccount", "ADMIN", nullptr));
        radioButton_Member->setText(QCoreApplication::translate("Window_RegisterNewAccount", "MEMBER", nullptr));
        label_ExpireDate->setText(QCoreApplication::translate("Window_RegisterNewAccount", "ExpireDate", nullptr));
        label_Password->setText(QCoreApplication::translate("Window_RegisterNewAccount", "Password", nullptr));
        pushButton_Register->setText(QCoreApplication::translate("Window_RegisterNewAccount", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_RegisterNewAccount: public Ui_Window_RegisterNewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_REGISTERNEWACCOUNT_H

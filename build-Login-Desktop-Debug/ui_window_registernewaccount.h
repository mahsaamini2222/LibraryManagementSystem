/********************************************************************************
** Form generated from reading UI file 'window_registernewaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_REGISTERNEWACCOUNT_H
#define UI_WINDOW_REGISTERNEWACCOUNT_H

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
    QLineEdit *lineEdit_AccountType;
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
            Window_RegisterNewAccount->setObjectName(QStringLiteral("Window_RegisterNewAccount"));
        Window_RegisterNewAccount->resize(593, 516);
        widget = new QWidget(Window_RegisterNewAccount);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(171, 143, 261, 261));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_Name = new QLabel(widget);
        label_Name->setObjectName(QStringLiteral("label_Name"));

        horizontalLayout->addWidget(label_Name);

        lineEdit_Name = new QLineEdit(widget);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));
        lineEdit_Name->setEnabled(true);

        horizontalLayout->addWidget(lineEdit_Name);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_Family = new QLabel(widget);
        label_Family->setObjectName(QStringLiteral("label_Family"));

        horizontalLayout_2->addWidget(label_Family);

        lineEdit_Family = new QLineEdit(widget);
        lineEdit_Family->setObjectName(QStringLiteral("lineEdit_Family"));

        horizontalLayout_2->addWidget(lineEdit_Family);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_AccountType = new QLabel(widget);
        label_AccountType->setObjectName(QStringLiteral("label_AccountType"));

        horizontalLayout_3->addWidget(label_AccountType);

        lineEdit_AccountType = new QLineEdit(widget);
        lineEdit_AccountType->setObjectName(QStringLiteral("lineEdit_AccountType"));

        horizontalLayout_3->addWidget(lineEdit_AccountType);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_ExpireDate = new QLabel(widget);
        label_ExpireDate->setObjectName(QStringLiteral("label_ExpireDate"));

        horizontalLayout_4->addWidget(label_ExpireDate);

        lineEdit_ExpireDate = new QLineEdit(widget);
        lineEdit_ExpireDate->setObjectName(QStringLiteral("lineEdit_ExpireDate"));

        horizontalLayout_4->addWidget(lineEdit_ExpireDate);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_Password = new QLabel(widget);
        label_Password->setObjectName(QStringLiteral("label_Password"));

        horizontalLayout_5->addWidget(label_Password);

        lineEdit_Password = new QLineEdit(widget);
        lineEdit_Password->setObjectName(QStringLiteral("lineEdit_Password"));

        horizontalLayout_5->addWidget(lineEdit_Password);


        verticalLayout->addLayout(horizontalLayout_5);

        pushButton_Register = new QPushButton(widget);
        pushButton_Register->setObjectName(QStringLiteral("pushButton_Register"));

        verticalLayout->addWidget(pushButton_Register);


        retranslateUi(Window_RegisterNewAccount);

        QMetaObject::connectSlotsByName(Window_RegisterNewAccount);
    } // setupUi

    void retranslateUi(QDialog *Window_RegisterNewAccount)
    {
        Window_RegisterNewAccount->setWindowTitle(QApplication::translate("Window_RegisterNewAccount", "Dialog", Q_NULLPTR));
        label_Name->setText(QApplication::translate("Window_RegisterNewAccount", "Name", Q_NULLPTR));
        label_Family->setText(QApplication::translate("Window_RegisterNewAccount", "Family", Q_NULLPTR));
        label_AccountType->setText(QApplication::translate("Window_RegisterNewAccount", "AcountType", Q_NULLPTR));
        label_ExpireDate->setText(QApplication::translate("Window_RegisterNewAccount", "ExpireDate", Q_NULLPTR));
        label_Password->setText(QApplication::translate("Window_RegisterNewAccount", "Password", Q_NULLPTR));
        pushButton_Register->setText(QApplication::translate("Window_RegisterNewAccount", "Register", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_RegisterNewAccount: public Ui_Window_RegisterNewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_REGISTERNEWACCOUNT_H

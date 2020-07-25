/********************************************************************************
** Form generated from reading UI file 'window_viewaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_VIEWACCOUNT_H
#define UI_WINDOW_VIEWACCOUNT_H

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

class Ui_Window_ViewAccount
{
public:
    QPushButton *pushButton_CancelMembership;
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

    void setupUi(QDialog *Window_ViewAccount)
    {
        if (Window_ViewAccount->objectName().isEmpty())
            Window_ViewAccount->setObjectName(QString::fromUtf8("Window_ViewAccount"));
        Window_ViewAccount->resize(643, 480);
        pushButton_CancelMembership = new QPushButton(Window_ViewAccount);
        pushButton_CancelMembership->setObjectName(QString::fromUtf8("pushButton_CancelMembership"));
        pushButton_CancelMembership->setGeometry(QRect(230, 310, 131, 28));
        widget = new QWidget(Window_ViewAccount);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 80, 215, 171));
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


        retranslateUi(Window_ViewAccount);

        QMetaObject::connectSlotsByName(Window_ViewAccount);
    } // setupUi

    void retranslateUi(QDialog *Window_ViewAccount)
    {
        Window_ViewAccount->setWindowTitle(QApplication::translate("Window_ViewAccount", "Dialog", nullptr));
        pushButton_CancelMembership->setText(QApplication::translate("Window_ViewAccount", "CancelMembership", nullptr));
        label_Name->setText(QApplication::translate("Window_ViewAccount", "Name", nullptr));
        label_Family->setText(QApplication::translate("Window_ViewAccount", "Family", nullptr));
        label_AccountType->setText(QApplication::translate("Window_ViewAccount", "AcountType", nullptr));
        label_ExpireDate->setText(QApplication::translate("Window_ViewAccount", "ExpireDate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_ViewAccount: public Ui_Window_ViewAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_VIEWACCOUNT_H

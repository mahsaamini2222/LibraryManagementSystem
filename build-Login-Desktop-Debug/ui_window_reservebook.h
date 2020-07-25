/********************************************************************************
** Form generated from reading UI file 'window_reservebook.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_RESERVEBOOK_H
#define UI_WINDOW_RESERVEBOOK_H

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

class Ui_Window_ReserveBook
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_BookName;
    QLineEdit *lineEdit_BookName;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Subject;
    QLineEdit *lineEdit_Subject;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_Author;
    QLineEdit *lineEdit_Author;
    QPushButton *pushButton_Reserve;

    void setupUi(QDialog *Window_ReserveBook)
    {
        if (Window_ReserveBook->objectName().isEmpty())
            Window_ReserveBook->setObjectName(QStringLiteral("Window_ReserveBook"));
        Window_ReserveBook->resize(708, 516);
        widget = new QWidget(Window_ReserveBook);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(180, 100, 271, 261));
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
        label_Subject = new QLabel(widget);
        label_Subject->setObjectName(QStringLiteral("label_Subject"));

        horizontalLayout_2->addWidget(label_Subject);

        lineEdit_Subject = new QLineEdit(widget);
        lineEdit_Subject->setObjectName(QStringLiteral("lineEdit_Subject"));

        horizontalLayout_2->addWidget(lineEdit_Subject);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_Author = new QLabel(widget);
        label_Author->setObjectName(QStringLiteral("label_Author"));

        horizontalLayout_3->addWidget(label_Author);

        lineEdit_Author = new QLineEdit(widget);
        lineEdit_Author->setObjectName(QStringLiteral("lineEdit_Author"));

        horizontalLayout_3->addWidget(lineEdit_Author);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_Reserve = new QPushButton(widget);
        pushButton_Reserve->setObjectName(QStringLiteral("pushButton_Reserve"));

        verticalLayout->addWidget(pushButton_Reserve);


        retranslateUi(Window_ReserveBook);

        QMetaObject::connectSlotsByName(Window_ReserveBook);
    } // setupUi

    void retranslateUi(QDialog *Window_ReserveBook)
    {
        Window_ReserveBook->setWindowTitle(QApplication::translate("Window_ReserveBook", "Dialog", Q_NULLPTR));
        label_BookName->setText(QApplication::translate("Window_ReserveBook", "BookName", Q_NULLPTR));
        label_Subject->setText(QApplication::translate("Window_ReserveBook", "Subject", Q_NULLPTR));
        label_Author->setText(QApplication::translate("Window_ReserveBook", "Author", Q_NULLPTR));
        pushButton_Reserve->setText(QApplication::translate("Window_ReserveBook", "Reserve", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Window_ReserveBook: public Ui_Window_ReserveBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_RESERVEBOOK_H

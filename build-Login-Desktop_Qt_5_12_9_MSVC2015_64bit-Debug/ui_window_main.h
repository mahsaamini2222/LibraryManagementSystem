/********************************************************************************
** Form generated from reading UI file 'window_main.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_MAIN_H
#define UI_WINDOW_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Window_main
{
public:

    void setupUi(QDialog *Window_main)
    {
        if (Window_main->objectName().isEmpty())
            Window_main->setObjectName(QString::fromUtf8("Window_main"));
        Window_main->resize(400, 300);

        retranslateUi(Window_main);

        QMetaObject::connectSlotsByName(Window_main);
    } // setupUi

    void retranslateUi(QDialog *Window_main)
    {
        Window_main->setWindowTitle(QApplication::translate("Window_main", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_main: public Ui_Window_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_MAIN_H

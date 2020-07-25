/********************************************************************************
** Form generated from reading UI file 'window_registernewbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_REGISTERNEWBOOK_H
#define UI_WINDOW_REGISTERNEWBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Window_RegisterNewBook
{
public:

    void setupUi(QDialog *Window_RegisterNewBook)
    {
        if (Window_RegisterNewBook->objectName().isEmpty())
            Window_RegisterNewBook->setObjectName(QString::fromUtf8("Window_RegisterNewBook"));
        Window_RegisterNewBook->resize(400, 300);

        retranslateUi(Window_RegisterNewBook);

        QMetaObject::connectSlotsByName(Window_RegisterNewBook);
    } // setupUi

    void retranslateUi(QDialog *Window_RegisterNewBook)
    {
        Window_RegisterNewBook->setWindowTitle(QApplication::translate("Window_RegisterNewBook", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Window_RegisterNewBook: public Ui_Window_RegisterNewBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_REGISTERNEWBOOK_H

/********************************************************************************
** Form generated from reading UI file 'package.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PACKAGE_H
#define UI_PACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Package
{
public:

    void setupUi(QWidget *Package)
    {
        if (Package->objectName().isEmpty())
            Package->setObjectName(QString::fromUtf8("Package"));
        Package->resize(899, 553);

        retranslateUi(Package);

        QMetaObject::connectSlotsByName(Package);
    } // setupUi

    void retranslateUi(QWidget *Package)
    {
        Package->setWindowTitle(QCoreApplication::translate("Package", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Package: public Ui_Package {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PACKAGE_H

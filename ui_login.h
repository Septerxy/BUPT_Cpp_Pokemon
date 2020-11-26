/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout;
    QPushButton *return_2;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QToolButton *toolButton;
    QTextEdit *passport;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *userName;
    QPushButton *login;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QToolButton *toolButton_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(696, 439);
        Login->setStyleSheet(QString::fromUtf8("background-image: url(:/Poke/loginBcak.jpg);"));
        gridLayout = new QGridLayout(Login);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        return_2 = new QPushButton(Login);
        return_2->setObjectName(QString::fromUtf8("return_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(return_2->sizePolicy().hasHeightForWidth());
        return_2->setSizePolicy(sizePolicy);
        return_2->setMinimumSize(QSize(200, 40));
        return_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));
        return_2->setAutoDefault(false);

        gridLayout->addWidget(return_2, 5, 5, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 3, 1, 1);

        toolButton = new QToolButton(Login);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMinimumSize(QSize(100, 40));
        toolButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));

        gridLayout->addWidget(toolButton, 1, 1, 1, 1);

        passport = new QTextEdit(Login);
        passport->setObjectName(QString::fromUtf8("passport"));
        passport->setMinimumSize(QSize(300, 40));
        passport->setMaximumSize(QSize(300, 40));
        passport->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));
        passport->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        passport->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(passport, 3, 3, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        userName = new QTextEdit(Login);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setMinimumSize(QSize(300, 40));
        userName->setMaximumSize(QSize(300, 40));
        userName->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));
        userName->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        userName->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(userName, 1, 3, 1, 3);

        login = new QPushButton(Login);
        login->setObjectName(QString::fromUtf8("login"));
        login->setMinimumSize(QSize(200, 40));
        login->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));

        gridLayout->addWidget(login, 5, 1, 1, 3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 5, 6, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);

        toolButton_2 = new QToolButton(Login);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setMinimumSize(QSize(100, 40));
        toolButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));

        gridLayout->addWidget(toolButton_2, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 4, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 6, 1, 1, 1);


        retranslateUi(Login);

        login->setDefault(true);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        return_2->setText(QCoreApplication::translate("Login", "\350\277\224\345\233\236", nullptr));
        toolButton->setText(QCoreApplication::translate("Login", "\347\224\250\346\210\267\345\220\215", nullptr));
        login->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        toolButton_2->setText(QCoreApplication::translate("Login", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

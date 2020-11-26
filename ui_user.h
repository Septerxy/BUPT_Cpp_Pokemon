/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QGridLayout *gridLayout;
    QWidget *selfie;
    QHBoxLayout *horizontalLayout;
    QLabel *user_2;
    QLabel *user_3;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QTextEdit *OnlineList;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName(QString::fromUtf8("user"));
        user->resize(665, 510);
        user->setStyleSheet(QString::fromUtf8("background-image: url(:/Poke/userback.jpg);"));
        gridLayout = new QGridLayout(user);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        selfie = new QWidget(user);
        selfie->setObjectName(QString::fromUtf8("selfie"));
        selfie->setMinimumSize(QSize(300, 125));
        selfie->setMaximumSize(QSize(300, 125));
        horizontalLayout = new QHBoxLayout(selfie);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        user_2 = new QLabel(selfie);
        user_2->setObjectName(QString::fromUtf8("user_2"));
        user_2->setMinimumSize(QSize(100, 100));
        user_2->setMaximumSize(QSize(100, 100));

        horizontalLayout->addWidget(user_2);

        user_3 = new QLabel(selfie);
        user_3->setObjectName(QString::fromUtf8("user_3"));
        user_3->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(user_3->sizePolicy().hasHeightForWidth());
        user_3->setSizePolicy(sizePolicy);
        user_3->setMinimumSize(QSize(200, 50));
        user_3->setMaximumSize(QSize(200, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(18);
        user_3->setFont(font);
        user_3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(user_3);


        gridLayout->addWidget(selfie, 0, 0, 1, 2);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        pushButton = new QPushButton(user);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(125, 125));
        pushButton->setMaximumSize(QSize(125, 125));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/Poke/packet.jpg);\n"
"color: rgb(255, 0, 0);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));

        gridLayout->addWidget(pushButton, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);

        pushButton_2 = new QPushButton(user);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(125, 125));
        pushButton_2->setMaximumSize(QSize(125, 125));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Poke/mvp.jpg);\n"
"font: 10pt \"\346\245\267\344\275\223\";"));

        gridLayout->addWidget(pushButton_2, 0, 5, 1, 1);

        OnlineList = new QTextEdit(user);
        OnlineList->setObjectName(QString::fromUtf8("OnlineList"));
        OnlineList->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 10pt \"\345\271\274\345\234\206\";\n"
"text-decoration: underline;"));

        gridLayout->addWidget(OnlineList, 1, 0, 1, 1);

        widget = new QWidget(user);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));

        gridLayout_2->addWidget(pushButton_3, 1, 1, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 3, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));

        gridLayout_2->addWidget(pushButton_4, 1, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 5, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));

        gridLayout_2->addWidget(pushButton_5, 3, 2, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 4, 1, 1, 1);


        gridLayout->addWidget(widget, 1, 1, 1, 5);


        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "User", nullptr));
        user_2->setText(QCoreApplication::translate("user", "ImageLabel", nullptr));
        user_3->setText(QCoreApplication::translate("user", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("user", "\350\203\214\345\214\205", nullptr));
        pushButton_2->setText(QCoreApplication::translate("user", "\351\207\221\351\223\266\347\211\214\345\217\212\350\203\234\347\216\207", nullptr));
        OnlineList->setHtml(QCoreApplication::translate("user", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\271\274\345\234\206'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("user", " \345\215\207\347\272\247\350\265\233", nullptr));
        pushButton_4->setText(QCoreApplication::translate("user", "\345\206\263\346\226\227\350\265\233", nullptr));
        pushButton_5->setText(QCoreApplication::translate("user", "\346\263\250\351\224\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H

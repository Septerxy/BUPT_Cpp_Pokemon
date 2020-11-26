/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *initialFace;
    QFormLayout *formLayout;
    QWidget *present;
    QGridLayout *gridLayout;
    QPushButton *login;
    QSpacerItem *verticalSpacer;
    QTextEdit *basicinfo;
    QPushButton *regis;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(701, 439);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/Poke/InitialBack.jpg);"));
        initialFace = new QWidget(MainWindow);
        initialFace->setObjectName(QString::fromUtf8("initialFace"));
        formLayout = new QFormLayout(initialFace);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        present = new QWidget(initialFace);
        present->setObjectName(QString::fromUtf8("present"));
        gridLayout = new QGridLayout(present);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        login = new QPushButton(present);
        login->setObjectName(QString::fromUtf8("login"));
        login->setMinimumSize(QSize(200, 40));
        login->setMaximumSize(QSize(200, 40));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        login->setFont(font);
        login->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));
        login->setAutoDefault(false);
        login->setFlat(false);

        gridLayout->addWidget(login, 3, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        basicinfo = new QTextEdit(present);
        basicinfo->setObjectName(QString::fromUtf8("basicinfo"));
        basicinfo->setMinimumSize(QSize(650, 200));
        basicinfo->setMaximumSize(QSize(650, 200));
        basicinfo->setMouseTracking(true);
        basicinfo->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(basicinfo, 0, 0, 1, 3);

        regis = new QPushButton(present);
        regis->setObjectName(QString::fromUtf8("regis"));
        regis->setMinimumSize(QSize(200, 40));
        regis->setMaximumSize(QSize(200, 40));
        regis->setFont(font);
        regis->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"\346\245\267\344\275\223\";"));

        gridLayout->addWidget(regis, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);


        formLayout->setWidget(0, QFormLayout::LabelRole, present);

        MainWindow->setCentralWidget(initialFace);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 701, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        basicinfo->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:16pt; color:#ffffff;\">\345\260\212\346\225\254\347\232\204\345\217\254\345\224\244\345\270\210\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:16pt; color:#ffffff;\">    \346\254\242\350\277\216\346\202\250\346\235\245\345\210\260SepterPokemon\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; tex"
                        "t-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:16pt; color:#ffffff;\">    \345\234\250\350\277\231\351\207\214\346\202\250\345\217\257\344\273\245\345\217\254\345\224\244\346\202\250\347\232\204\345\256\240\347\211\251\345\260\217\347\262\276\347\201\265\350\277\233\350\241\214\346\210\230\346\226\227\343\200\202</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:16pt; color:#ffffff;\">    </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:16pt; color:#ffffff;\">    \350\257\267\345\205\210\346\263\250\345\206\214/\347\231\273\345\275\225\343\200\202</span></p></body></html>", nullptr));
        regis->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

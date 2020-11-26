/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Game
{
public:
    QTextEdit *GameKind;
    QLabel *YourPic;
    QLabel *OtherPic;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QTextEdit *YourExp;
    QTextEdit *YourLevel;
    QTextEdit *OtherLevel;
    QPushButton *pushButton_10;
    QTextEdit *OtherExp;
    QPushButton *pushButton_12;
    QPushButton *pushButton_2;
    QTextEdit *YourTime;
    QPushButton *pushButton_9;
    QTextEdit *OtherTime;
    QPushButton *pushButton_3;
    QTextEdit *YourShot;
    QPushButton *pushButton_4;
    QTextEdit *YourPro;
    QPushButton *pushButton_5;
    QTextEdit *YourLife;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_11;
    QTextEdit *OtherShot;
    QTextEdit *OtherPro;
    QTextEdit *OtherLife;
    QTextEdit *YourAttack;
    QTextEdit *OtherAttack;

    void setupUi(QWidget *Game)
    {
        if (Game->objectName().isEmpty())
            Game->setObjectName(QString::fromUtf8("Game"));
        Game->resize(750, 519);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Game->sizePolicy().hasHeightForWidth());
        Game->setSizePolicy(sizePolicy);
        Game->setMinimumSize(QSize(750, 500));
        Game->setMaximumSize(QSize(755, 519));
        Game->setStyleSheet(QString::fromUtf8("image: url(:/Poke/game.jpg);"));
        GameKind = new QTextEdit(Game);
        GameKind->setObjectName(QString::fromUtf8("GameKind"));
        GameKind->setGeometry(QRect(11, 11, 719, 30));
        GameKind->setMaximumSize(QSize(16777215, 30));
        YourPic = new QLabel(Game);
        YourPic->setObjectName(QString::fromUtf8("YourPic"));
        YourPic->setGeometry(QRect(25, 49, 250, 250));
        sizePolicy.setHeightForWidth(YourPic->sizePolicy().hasHeightForWidth());
        YourPic->setSizePolicy(sizePolicy);
        YourPic->setMinimumSize(QSize(250, 250));
        YourPic->setMaximumSize(QSize(250, 250));
        OtherPic = new QLabel(Game);
        OtherPic->setObjectName(QString::fromUtf8("OtherPic"));
        OtherPic->setGeometry(QRect(465, 49, 250, 250));
        sizePolicy.setHeightForWidth(OtherPic->sizePolicy().hasHeightForWidth());
        OtherPic->setSizePolicy(sizePolicy);
        OtherPic->setMinimumSize(QSize(250, 250));
        OtherPic->setMaximumSize(QSize(250, 250));
        pushButton = new QPushButton(Game);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(11, 340, 93, 28));
        pushButton->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        pushButton_6 = new QPushButton(Game);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(11, 305, 93, 28));
        pushButton_6->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        YourExp = new QTextEdit(Game);
        YourExp->setObjectName(QString::fromUtf8("YourExp"));
        YourExp->setGeometry(QRect(111, 306, 256, 25));
        sizePolicy.setHeightForWidth(YourExp->sizePolicy().hasHeightForWidth());
        YourExp->setSizePolicy(sizePolicy);
        YourExp->setMinimumSize(QSize(0, 25));
        YourExp->setMaximumSize(QSize(16777215, 25));
        YourExp->setFrameShape(QFrame::StyledPanel);
        YourExp->setFrameShadow(QFrame::Sunken);
        YourExp->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        YourExp->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        YourLevel = new QTextEdit(Game);
        YourLevel->setObjectName(QString::fromUtf8("YourLevel"));
        YourLevel->setGeometry(QRect(111, 341, 256, 25));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(YourLevel->sizePolicy().hasHeightForWidth());
        YourLevel->setSizePolicy(sizePolicy1);
        YourLevel->setMaximumSize(QSize(16777215, 25));
        YourLevel->setFrameShape(QFrame::StyledPanel);
        YourLevel->setFrameShadow(QFrame::Sunken);
        YourLevel->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        YourLevel->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        OtherLevel = new QTextEdit(Game);
        OtherLevel->setObjectName(QString::fromUtf8("OtherLevel"));
        OtherLevel->setGeometry(QRect(474, 341, 256, 25));
        sizePolicy1.setHeightForWidth(OtherLevel->sizePolicy().hasHeightForWidth());
        OtherLevel->setSizePolicy(sizePolicy1);
        OtherLevel->setMaximumSize(QSize(16777215, 25));
        OtherLevel->setFrameShape(QFrame::StyledPanel);
        OtherLevel->setFrameShadow(QFrame::Sunken);
        OtherLevel->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        OtherLevel->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_10 = new QPushButton(Game);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(374, 305, 93, 28));
        pushButton_10->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        OtherExp = new QTextEdit(Game);
        OtherExp->setObjectName(QString::fromUtf8("OtherExp"));
        OtherExp->setGeometry(QRect(474, 306, 256, 25));
        sizePolicy1.setHeightForWidth(OtherExp->sizePolicy().hasHeightForWidth());
        OtherExp->setSizePolicy(sizePolicy1);
        OtherExp->setMaximumSize(QSize(16777215, 25));
        OtherExp->setFrameShape(QFrame::StyledPanel);
        OtherExp->setFrameShadow(QFrame::Sunken);
        OtherExp->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        OtherExp->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_12 = new QPushButton(Game);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(374, 340, 93, 28));
        pushButton_12->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        pushButton_2 = new QPushButton(Game);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(11, 375, 93, 28));
        pushButton_2->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        YourTime = new QTextEdit(Game);
        YourTime->setObjectName(QString::fromUtf8("YourTime"));
        YourTime->setGeometry(QRect(111, 376, 256, 25));
        sizePolicy1.setHeightForWidth(YourTime->sizePolicy().hasHeightForWidth());
        YourTime->setSizePolicy(sizePolicy1);
        YourTime->setMaximumSize(QSize(16777215, 25));
        YourTime->setFrameShape(QFrame::StyledPanel);
        YourTime->setFrameShadow(QFrame::Sunken);
        YourTime->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        YourTime->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_9 = new QPushButton(Game);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(374, 375, 93, 28));
        pushButton_9->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        OtherTime = new QTextEdit(Game);
        OtherTime->setObjectName(QString::fromUtf8("OtherTime"));
        OtherTime->setGeometry(QRect(474, 376, 256, 25));
        sizePolicy1.setHeightForWidth(OtherTime->sizePolicy().hasHeightForWidth());
        OtherTime->setSizePolicy(sizePolicy1);
        OtherTime->setMaximumSize(QSize(16777215, 25));
        OtherTime->setFrameShape(QFrame::StyledPanel);
        OtherTime->setFrameShadow(QFrame::Sunken);
        OtherTime->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        OtherTime->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_3 = new QPushButton(Game);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(11, 411, 93, 25));
        pushButton_3->setMaximumSize(QSize(16777215, 25));
        pushButton_3->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        YourShot = new QTextEdit(Game);
        YourShot->setObjectName(QString::fromUtf8("YourShot"));
        YourShot->setGeometry(QRect(111, 411, 256, 25));
        sizePolicy1.setHeightForWidth(YourShot->sizePolicy().hasHeightForWidth());
        YourShot->setSizePolicy(sizePolicy1);
        YourShot->setMaximumSize(QSize(16777215, 25));
        YourShot->setFrameShape(QFrame::StyledPanel);
        YourShot->setFrameShadow(QFrame::Sunken);
        YourShot->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        YourShot->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_4 = new QPushButton(Game);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(11, 446, 93, 25));
        pushButton_4->setMaximumSize(QSize(16777215, 25));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        YourPro = new QTextEdit(Game);
        YourPro->setObjectName(QString::fromUtf8("YourPro"));
        YourPro->setGeometry(QRect(111, 446, 256, 25));
        sizePolicy1.setHeightForWidth(YourPro->sizePolicy().hasHeightForWidth());
        YourPro->setSizePolicy(sizePolicy1);
        YourPro->setMaximumSize(QSize(16777215, 25));
        YourPro->setFrameShape(QFrame::StyledPanel);
        YourPro->setFrameShadow(QFrame::Sunken);
        YourPro->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        YourPro->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_5 = new QPushButton(Game);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(11, 480, 93, 28));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        YourLife = new QTextEdit(Game);
        YourLife->setObjectName(QString::fromUtf8("YourLife"));
        YourLife->setGeometry(QRect(111, 481, 256, 25));
        sizePolicy1.setHeightForWidth(YourLife->sizePolicy().hasHeightForWidth());
        YourLife->setSizePolicy(sizePolicy1);
        YourLife->setMaximumSize(QSize(16777215, 25));
        YourLife->setFrameShape(QFrame::StyledPanel);
        YourLife->setFrameShadow(QFrame::Sunken);
        YourLife->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        YourLife->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton_7 = new QPushButton(Game);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(374, 410, 93, 28));
        pushButton_7->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        pushButton_8 = new QPushButton(Game);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(374, 445, 93, 28));
        pushButton_8->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";"));
        pushButton_11 = new QPushButton(Game);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(374, 480, 93, 28));
        pushButton_11->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\271\274\345\234\206\";\n"
""));
        OtherShot = new QTextEdit(Game);
        OtherShot->setObjectName(QString::fromUtf8("OtherShot"));
        OtherShot->setGeometry(QRect(474, 411, 256, 25));
        sizePolicy1.setHeightForWidth(OtherShot->sizePolicy().hasHeightForWidth());
        OtherShot->setSizePolicy(sizePolicy1);
        OtherShot->setMaximumSize(QSize(16777215, 25));
        OtherShot->setFrameShape(QFrame::StyledPanel);
        OtherShot->setFrameShadow(QFrame::Sunken);
        OtherShot->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        OtherShot->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        OtherPro = new QTextEdit(Game);
        OtherPro->setObjectName(QString::fromUtf8("OtherPro"));
        OtherPro->setGeometry(QRect(474, 446, 256, 25));
        sizePolicy1.setHeightForWidth(OtherPro->sizePolicy().hasHeightForWidth());
        OtherPro->setSizePolicy(sizePolicy1);
        OtherPro->setMaximumSize(QSize(16777215, 25));
        OtherPro->setFrameShape(QFrame::StyledPanel);
        OtherPro->setFrameShadow(QFrame::Sunken);
        OtherPro->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        OtherPro->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        OtherLife = new QTextEdit(Game);
        OtherLife->setObjectName(QString::fromUtf8("OtherLife"));
        OtherLife->setGeometry(QRect(474, 481, 256, 25));
        sizePolicy1.setHeightForWidth(OtherLife->sizePolicy().hasHeightForWidth());
        OtherLife->setSizePolicy(sizePolicy1);
        OtherLife->setMaximumSize(QSize(16777215, 25));
        OtherLife->setFrameShape(QFrame::StyledPanel);
        OtherLife->setFrameShadow(QFrame::Sunken);
        OtherLife->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        OtherLife->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        YourAttack = new QTextEdit(Game);
        YourAttack->setObjectName(QString::fromUtf8("YourAttack"));
        YourAttack->setGeometry(QRect(290, 80, 161, 51));
        OtherAttack = new QTextEdit(Game);
        OtherAttack->setObjectName(QString::fromUtf8("OtherAttack"));
        OtherAttack->setGeometry(QRect(290, 200, 161, 51));

        retranslateUi(Game);

        QMetaObject::connectSlotsByName(Game);
    } // setupUi

    void retranslateUi(QWidget *Game)
    {
        Game->setWindowTitle(QCoreApplication::translate("Game", "Form", nullptr));
        GameKind->setHtml(QCoreApplication::translate("Game", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", nullptr));
        YourPic->setText(QCoreApplication::translate("Game", "TextLabel", nullptr));
        OtherPic->setText(QCoreApplication::translate("Game", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("Game", "\347\255\211\347\272\247", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Game", "\347\273\217\351\252\214\345\200\274", nullptr));
        pushButton_10->setText(QCoreApplication::translate("Game", "\347\273\217\351\252\214\345\200\274", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Game", "\347\255\211\347\272\247", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Game", "\346\224\273\345\207\273\351\227\264\351\232\224", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Game", "\346\224\273\345\207\273\351\227\264\351\232\224", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Game", "\346\224\273\345\207\273\345\212\233", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Game", "\351\230\262\345\276\241\345\212\233", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Game", "\347\224\237\345\221\275\345\200\274", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Game", "\346\224\273\345\207\273\345\212\233", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Game", "\351\230\262\345\276\241\345\212\233", nullptr));
        pushButton_11->setText(QCoreApplication::translate("Game", "\347\224\237\345\221\275\345\200\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Game: public Ui_Game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H

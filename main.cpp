#include "mainwindow.h"
#include "login.h"
#include "register.h"
#include "user.h"
#include "package.h"
#include "choose.h"
#include "game.h"
#include "check.h"
#include "functions.h"
#include "total.h"

#include <QApplication>
#include <vector>

/*
2020年9月1日10:31:23
pure virtual method called
terminate called without an active exception
原因：将ex加入UserList后直接delete，忽视了vector存储的是指针，指针指向的空间，一旦delete就将空间释放，会出错
*/


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    numOfUser=0;//用户数目初始化为0

//    PlayUser Tom;
//    Tom.name="Tom";
//    Tom.state=1;//离线
//    Elf *ex = new ElectricFlyingRat;
//    qDebug()<<QString::fromStdString(ex->name);
//    qDebug()<<ex->attackOfInternal;
//    Tom.PetVec.push_back(ex);
//    qDebug()<<Tom.PetVec[0]->type;
//    qDebug()<<Tom.PetVec[0]->attackOfInternal;
//    qDebug()<<QString::fromStdString(Tom.PetVec[0]->attackOfType());
//    qDebug()<<QString::fromStdString(Tom.PetVec[0]->name);
//    qDebug()<<QString::fromStdString(Tom.PetVec[0]->GetName());
//    delete ex;

    //全都初始化一个界面
    MainWindow w;
    Login l;
    Register r;
    user u;
    Package p;
    choose c;
    Game g;
    Check ch;
    w.show();
    //所有的show信号都与对应各receiveshow槽连接好
    QObject::connect(&w, SIGNAL(showLogin()), &l, SLOT(receiveshowLogin()));
    QObject::connect(&l, SIGNAL(showmain()), &w, SLOT(receiveshowmain()));
    QObject::connect(&w,SIGNAL(showRegis()),&r, SLOT(receiveshowRegis()));
    QObject::connect(&r, SIGNAL(showmain()), &w, SLOT(receiveshowmain()));
    QObject::connect(&r, SIGNAL(showLogin()), &l, SLOT(receiveshowLogin()));
    QObject::connect(&l,SIGNAL(showUser(PlayUser)),&u, SLOT(receiveshowUser(PlayUser)));
    QObject::connect(&u,SIGNAL(showmain()), &w, SLOT(receiveshowmain()));
    QObject::connect(&u,SIGNAL(showPack(PlayUser)),&p,SLOT(receiveshowPack(PlayUser)));
    QObject::connect(&u,SIGNAL(showChoose(PlayUser,int)),&c,SLOT(receiveShowChoose(PlayUser,int)));
    QObject::connect(&c,SIGNAL(showGame(PlayUser,int,QString,int,QString,int)),&g,SLOT(receiveShowGame(PlayUser,int,QString,int,QString,int)));
    QObject::connect(&g,SIGNAL(showUser(PlayUser)),&u,SLOT(receiveshowUser(PlayUser)));
    QObject::connect(&u,SIGNAL(ShowCheck()),&ch,SLOT(receiveShowCheck()));
    //Test();

    return a.exec();
}

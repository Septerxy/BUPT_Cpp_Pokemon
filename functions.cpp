#include <QtConcurrent/QtConcurrent>
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <QString>
#include <QFile>
#include <QTextCodec>
#include <QtCore/QTextStream>
#include <QtCore/QFile>
#include <QtCore/QIODevice>
#include <QDebug>

#include "total.h"

vector <PlayUser> UserList;
int numOfUser;


//下面的函数都是最初完成第一题的函数，现在已经全部弃用
//仅仅保留作为进度记录
//void InitialUserListInfo()
//{

//    numOfUser=0;

//    QFile file("userInfo.txt");
//    QTextStream in(&file);

//    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
//    {
//        qDebug()<<"文件无法打开111";
//        qDebug()<<file.error();
//        qDebug()<<file.errorString();
//        exit(-1);
//    }

//    QString filename;

//    string name,password,fname,fpassword;



//    int numw;
//    int noCode=0;

//    while (!file.atEnd())
//    {
//        Elf *ex;
//        PlayUser temp;
//        QStringList list;
//        numw=0;
//        QTextCodec *codec=QTextCodec::codecForName("GB2312");
//        filename = codec->toUnicode(file.readLine());

//        //filename = file.readLine();
//        filename = filename.simplified();
//        numOfUser++;
//        qDebug()<<filename;
//        list = filename.split(" ");

//        //名字 状态 宠物精灵数 宠物名 精灵等级 总场数 胜场数（执行函数，改变徽章）
//        temp.name.assign(list[0].toStdString());
//        temp.state = list[1].toInt();
//        temp.numOfPet=list[2].toInt();

//        qDebug()<<list[0];
//        qDebug()<<list[1];
//        qDebug()<<list[2];

//        for(int j=0;j<list[2].toInt();j++)
//        {
//            if(list[3+2*j+1].toInt()==15)
//                numw++;
//            switch(list[3+2*j].toInt())
//            {
//            case 1:
//                ex=new Chavaran;
//                ex->level = list[3+2*j+1].toInt();
//                temp.PetVec.push_back(ex);
//                break;
//            case 2:
//                ex=new HotMonkey;
//                ex->level = list[3+2*j+1].toInt();
//                temp.PetVec.push_back(ex);
//                break;
//            case 3:
//                ex=new Force;
//                ex->level = list[3+2*j+1].toInt();
//                temp.PetVec.push_back(ex);
//                break;
//            case 4:
//                ex=new KabiBeast;
//                ex->level = list[3+2*j+1].toInt();
//                temp.PetVec.push_back(ex);
//                break;
//            case 5:
//                ex=new MudGiant;
//                ex->level = list[3+2*j+1].toInt();
//                temp.PetVec.push_back(ex);
//                break;
//            case 6:
//                ex=new WhiteSeaLion;
//                ex->level = list[3+2*j+1].toInt();
//                temp.PetVec.push_back(ex);
//                break;
//            case 7:
//                ex=new WheelBall;
//                ex->level = list[3+2*j+1].toInt();
//                temp.PetVec.push_back(ex);
//                break;
//            case 8:
//                ex=new TreeTailedBear;
//                ex->level = list[3+2*j+1].toInt();
//                temp.PetVec.push_back(ex);
//                break;
//            case 9:
//                ex=new DreamDemon;
//                ex->level = list[3+2*j+1].toInt();
//                temp.PetVec.push_back(ex);
//                break;
//            case 10:
//                ex=new BeanPigeon;
//                ex->level = list[3+2*j+1].toInt();
//                temp.PetVec.push_back(ex);
//                break;
//            case 11:
//                ex=new FlowerBirds;
//                ex->level = list[3+2*j+1].toInt();
//                temp.PetVec.push_back(ex);
//                break;
//            case 12:
//                ex=new ElectricFlyingRat;
//                ex->level = list[3+2*j+1].toInt();
//                temp.PetVec.push_back(ex);
//                break;
//            default:
//                qDebug()<<"精灵代号不正确";
//                noCode=1;
//                break;
//            }
//            if(noCode==0)
//            {
//            //qDebug()<<ex->GetLevel();
//            //qDebug()<<QString::fromStdString(ex->GetName());
//            qDebug()<<temp.PetVec.size();
//            qDebug()<<temp.PetVec[temp.PetVec.size()-1]->GetLevel();
//            qDebug()<<QString::fromStdString(temp.PetVec[temp.PetVec.size()-1]->GetName());

//            }


//        }//for

//        qDebug()<<list[5+2*(list[2].toInt()-1)];
//        qDebug()<<list[6+2*(list[2].toInt()-1)];
//        temp.totalGame=list[5+2*(list[2].toInt()-1)].toInt();
//        temp.okGame=list[6+2*(list[2].toInt()-1)].toInt();

//        qDebug()<<"正常";
//        if(list[2].toInt() <= 3)
//            temp.petIcon=0;
//        else
//        {
//            if((list[2].toInt() == 4) || (list[2].toInt() == 5))
//                temp.petIcon=1;
//            else
//                temp.petIcon=2;
//        }
//        qDebug()<<"正常";
//        if(numw <= 3)
//            temp.vipIcon=0;
//        else
//        {
//            if((numw == 4) || (numw == 5))
//                temp.vipIcon=1;
//            else
//                temp.vipIcon=2;
//        }
//        qDebug()<<"加入";
//        UserList.push_back(temp);
//        int level;
//        QString name;
//        for(unsigned int j=0;j<UserList[numOfUser-1].numOfPet;j++)
//        {
//            level = UserList[UserList.size()-1].PetVec[j]->GetLevel();
//            name = QString::fromStdString(UserList[numOfUser-1].PetVec[j]->GetName());
//            qDebug()<<level<<" "<<name;
//        }
//        qDebug()<<"加入成功";



//    }//while
//    file.close();
//}

void UserListExamine()
{
    qDebug()<<"开始检测";
    int level;
    QString name;
    for(unsigned int i=0;i<numOfUser;i++)
    {
        qDebug()<<"***打印用户信息***";
        qDebug()<<QString::fromStdString(UserList[i].name)<<" "<<UserList[i].state;
        qDebug()<<UserList[i].totalGame<<"/"<<UserList[i].okGame;
        qDebug()<<UserList[i].petIcon<<" "<<UserList[i].vipIcon;
        for(unsigned int j=0;j<UserList[i].numOfPet;j++)
        {
            level = UserList[i].PetVec[j]->GetLevel();
            name = QString::fromStdString(UserList[i].PetVec[j]->GetName());
            qDebug()<<level<<" "<<name;
        }

    }
}

void Tag(int type)
{
    switch (type)
    {
    case 1:
        cout << "力量型";
        break;
    case 2:
        cout << "肉盾型";
        break;
    case 3:
        cout << "防御型";
        break;
    case 4:
        cout << "敏捷型";
        break;
    }
}

void Test()
{
    cout << "**********" << "首先是各精灵类属性测试" << "*********" << endl;

    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    //沙瓦朗
    Chavaran ch;
    cout << "姓名：" << ch.name << " 类型：";
    Tag(ch.type); cout << endl;
    cout << "攻击方式：" << ch.attackOfType() << " 攻击力：" << ch.attack << " 攻击间隔：" << ch.attackOfInternal << endl;
    cout << "防御力为：" << ch.defence << " 生命值为：" << ch.life << endl << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    //火爆猴
    HotMonkey ho;
    cout << "姓名：" << ho.name << " 类型：";
    Tag(ho.type); cout << endl;
    cout << "攻击方式：" << ho.attackOfType() << " 攻击力：" << ho.attack << " 攻击间隔：" << ho.attackOfInternal << endl;
    cout << "防御力为：" << ho.defence << " 生命值为：" << ho.life << endl << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    //腕力
    Force fo;
    cout << "姓名：" << fo.name << " 类型：";
    Tag(fo.type); cout << endl;
    cout << "攻击方式：" << fo.attackOfType() << " 攻击力：" << fo.attack << " 攻击间隔：" << fo.attackOfInternal << endl;
    cout << "防御力为：" << fo.defence << " 生命值为：" << fo.life << endl << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    //卡比兽
    KabiBeast ka;
    cout << "姓名：" << ka.name << " 类型：";
    Tag(ka.type); cout << endl;
    cout << "攻击方式：" << ka.attackOfType() << " 攻击力：" << ka.attack << " 攻击间隔：" << ka.attackOfInternal << endl;
    cout << "防御力为：" << ka.defence << " 生命值为：" << ka.life << endl << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    //泥偶巨人
    MudGiant mu;
    cout << "姓名：" << mu.name << " 类型：";
    Tag(mu.type); cout << endl;
    cout << "攻击方式：" << mu.attackOfType() << " 攻击力：" << mu.attack << " 攻击间隔：" << mu.attackOfInternal << endl;
    cout << "防御力为：" << mu.defence << " 生命值为：" << mu.life << endl << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    //白海狮
    WhiteSeaLion whs;
    cout << "姓名：" << whs.name << " 类型：";
    Tag(whs.type); cout << endl;
    cout << "攻击方式：" << whs.attackOfType() << " 攻击力：" << whs.attack << " 攻击间隔：" << whs.attackOfInternal << endl;
    cout << "防御力为：" << whs.defence << " 生命值为：" << whs.life << endl << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    //车轮球
    WheelBall whb;
    cout << "姓名：" << whb.name << " 类型：";
    Tag(whb.type); cout << endl;
    cout << "攻击方式：" << whb.attackOfType() << " 攻击力：" << whb.attack << " 攻击间隔：" << whb.attackOfInternal << endl;
    cout << "防御力为：" << whb.defence << " 生命值为：" << whb.life << endl << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    //树枕尾熊
    TreeTailedBear tr;
    cout << "姓名：" << tr.name << " 类型：";
    Tag(tr.type); cout << endl;
    cout << "攻击方式：" << tr.attackOfType() << " 攻击力：" << tr.attack << " 攻击间隔：" << tr.attackOfInternal << endl;
    cout << "防御力为：" << tr.defence << " 生命值为：" << tr.life << endl << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    //梦妖
    DreamDemon dr;
    cout << "姓名：" << dr.name << " 类型：";
    Tag(dr.type); cout << endl;
    cout << "攻击方式：" << dr.attackOfType() << " 攻击力：" << dr.attack << " 攻击间隔：" << dr.attackOfInternal << endl;
    cout << "防御力为：" << dr.defence << " 生命值为：" << dr.life << endl << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    //豆豆鸽
    BeanPigeon be;
    cout << "姓名：" << be.name << " 类型：";
    Tag(be.type); cout << endl;
    cout << "攻击方式：" << be.attackOfType() << " 攻击力：" << be.attack << " 攻击间隔：" << be.attackOfInternal << endl;
    cout << "防御力为：" << be.defence << " 生命值为：" << be.life << endl << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    //花舞鸟
    FlowerBirds fl;
    cout << "姓名：" << fl.name << " 类型：";
    Tag(fl.type); cout << endl;
    cout << "攻击方式：" << fl.attackOfType() << " 攻击力：" << fl.attack << " 攻击间隔：" << fl.attackOfInternal << endl;
    cout << "防御力为：" << fl.defence << " 生命值为：" << fl.life << endl << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;
    //电飞鼠
    ElectricFlyingRat el;
    cout << "姓名：" << el.name << " 类型：";
    Tag(el.type); cout << endl;
    cout << "攻击方式：" << el.attackOfType() << " 攻击力：" << el.attack << " 攻击间隔：" << el.attackOfInternal << endl;
    cout << "防御力为：" << el.defence << " 生命值为：" << el.life << endl << endl;
    cout << "--------------------------------------------------------------------------------------------------------" << endl;

    cout << "**********" << "下面是精灵升级函数测试" << "*********" << endl;
}

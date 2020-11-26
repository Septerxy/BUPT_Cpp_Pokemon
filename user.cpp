#include "user.h"
#include "ui_user.h"
#include <QLabel>
#include <QPixmap>
#include <QImage>
#include <QFont>
#include <QAction>
#include <QFile>
#include <QMessageBox>
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <QTextEdit>
#include <QString>
#include <QDebug>
#include <QFile>
#include <QTextCodec>
#include <QtCore/QTextStream>
#include <QtCore/QFile>
#include <QtCore/QIODevice>
#include <QToolBox>
#include <vector>
#include "mainwindow.h"
#include "definition.h"
#include "functions.h"
#include "total.h"

static string Ch[12]={"沙瓦朗", "火爆猴", "腕力", "卡比兽", "泥偶巨人", "白海狮", "车轮球", "树枕尾熊", "梦妖", "豆豆鸽", "花舞鸟", "电飞鼠"};
static string En[12]={"Chavaran", "HotMonkey", "Force", "KabiBeast", "MudGiant", "WhiteSeaLion", "WheelBall", "TreeTailedBear", "DreamDemon", "BeanPigeon", "FlowerBirds", "ElectricFlyingRat"};


static PlayUser temp;

user::user(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user)
{
    //this->setWindowTitle("User");
    ui->setupUi(this);
    /*显示头像，所有用户都用这一个头像*/
    ui->user_2->setScaledContents(true);
    QImage * userPhoto = new QImage;
    userPhoto->load("://Poke/user.JPG");
    QPixmap pixmap = QPixmap::fromImage(*userPhoto);

    int with = ui->user_2->width();
    int height = ui->user_2->height();
    QPixmap fitpixmap = pixmap.scaled(with, height, Qt::IgnoreAspectRatio, Qt::SmoothTransformation);//饱满填充
    //QPixmap fitpixmap = pixmap.scaled(with, height, Qt::KeepAspectRatio, Qt::SmoothTransformation);  // 按比例缩放
    ui->user_2->setPixmap(fitpixmap);

    /*显示昵称*/

    //this->ui->user_3->setFont(exf);


    QFile file("user.txt");
    QTextStream in(&file);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"文件无法打开111";
        qDebug()<<file.error();
        qDebug()<<file.errorString();
        exit(-1);
    }

    QString filename,filePswr;

    QFont f;
    f.setFamily("simsun");
    f.setPointSize(16);

    //本来用toolbox，后来视觉上并不好看，弃用了
//    while (!file.atEnd())
//    {
//        QTextCodec *codec=QTextCodec::codecForName("GB2312");

//       // std::locale::global(std::locale(""));
//        filename = codec->toUnicode(file.readLine());
//        //filename = file.readLine();
//        filename = filename.simplified();
//        filePswr = codec->toUnicode(file.readLine());
//        filePswr = filePswr.simplified();
//        //qDebug()<<inputName<<filename<<endl;

//        flag++;
//        s[flag] = new QWidget;
//        this->ui->toolBox->insertItem(1,s[flag],filename);

//    }





}

user::~user()
{
    delete ui;
}

//根据用户信息文件初始化Userlist
void InitialUserListInfo()
{

    numOfUser=0;

    QFile file("userInfo.txt");
    QTextStream in(&file);

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"文件无法打开111";
        qDebug()<<file.error();
        qDebug()<<file.errorString();
        exit(-1);
    }

    QString filename;

    string name,password,fname,fpassword;



    int numw;
    int noCode=0;

    while (!file.atEnd())
    {
        Elf *ex;
        PlayUser temp;
        QStringList list;
        numw=0;
        QTextCodec *codec=QTextCodec::codecForName("GB2312");
        filename = codec->toUnicode(file.readLine());

        //filename = file.readLine();
        filename = filename.simplified();
        numOfUser++;
        qDebug()<<filename;
        list = filename.split(" ");

        //名字 状态 宠物精灵数 宠物名 精灵等级 总场数 胜场数（执行函数，改变徽章）
        temp.name.assign(list[0].toStdString());
        temp.state = list[1].toInt();
        temp.numOfPet=list[2].toInt();

        qDebug()<<list[0];
        qDebug()<<list[1];
        qDebug()<<list[2];

        for(int j=0;j<list[2].toInt();j++)
        {
            if(list[3+2*j+1].toInt()==15)
                numw++;
            switch(list[3+2*j].toInt())
            {
            case 1:
                ex=new Chavaran;
                ex->level = list[3+2*j+1].toInt();
                temp.PetVec.push_back(ex);
                break;
            case 2:
                ex=new HotMonkey;
                ex->level = list[3+2*j+1].toInt();
                temp.PetVec.push_back(ex);
                break;
            case 3:
                ex=new Force;
                ex->level = list[3+2*j+1].toInt();
                temp.PetVec.push_back(ex);
                break;
            case 4:
                ex=new KabiBeast;
                ex->level = list[3+2*j+1].toInt();
                temp.PetVec.push_back(ex);
                break;
            case 5:
                ex=new MudGiant;
                ex->level = list[3+2*j+1].toInt();
                temp.PetVec.push_back(ex);
                break;
            case 6:
                ex=new WhiteSeaLion;
                ex->level = list[3+2*j+1].toInt();
                temp.PetVec.push_back(ex);
                break;
            case 7:
                ex=new WheelBall;
                ex->level = list[3+2*j+1].toInt();
                temp.PetVec.push_back(ex);
                break;
            case 8:
                ex=new TreeTailedBear;
                ex->level = list[3+2*j+1].toInt();
                temp.PetVec.push_back(ex);
                break;
            case 9:
                ex=new DreamDemon;
                ex->level = list[3+2*j+1].toInt();
                temp.PetVec.push_back(ex);
                break;
            case 10:
                ex=new BeanPigeon;
                ex->level = list[3+2*j+1].toInt();
                temp.PetVec.push_back(ex);
                break;
            case 11:
                ex=new FlowerBirds;
                ex->level = list[3+2*j+1].toInt();
                temp.PetVec.push_back(ex);
                break;
            case 12:
                ex=new ElectricFlyingRat;
                ex->level = list[3+2*j+1].toInt();
                temp.PetVec.push_back(ex);
                break;
            default:
                qDebug()<<"精灵代号不正确";
                noCode=1;
                break;
            }
            if(noCode==0)
            {
            //qDebug()<<ex->GetLevel();
            //qDebug()<<QString::fromStdString(ex->GetName());
            qDebug()<<temp.PetVec.size();
            qDebug()<<temp.PetVec[temp.PetVec.size()-1]->GetLevel();
            qDebug()<<QString::fromStdString(temp.PetVec[temp.PetVec.size()-1]->GetName());

            }


        }//for

        qDebug()<<list[5+2*(list[2].toInt()-1)];
        qDebug()<<list[6+2*(list[2].toInt()-1)];
        temp.totalGame=list[5+2*(list[2].toInt()-1)].toInt();
        temp.okGame=list[6+2*(list[2].toInt()-1)].toInt();

        qDebug()<<"正常";
        if(list[2].toInt() <= 3)
            temp.petIcon=0;
        else
        {
            if((list[2].toInt() == 4) || (list[2].toInt() == 5))
                temp.petIcon=1;
            else
                temp.petIcon=2;
        }
        qDebug()<<"正常";
        if(numw <= 3)
            temp.vipIcon=0;
        else
        {
            if((numw == 4) || (numw == 5))
                temp.vipIcon=1;
            else
                temp.vipIcon=2;
        }
        qDebug()<<"加入";
        UserList.push_back(temp);
        int level;
        QString name;
        for(unsigned int j=0;j<UserList[numOfUser-1].numOfPet;j++)
        {
            level = UserList[UserList.size()-1].PetVec[j]->GetLevel();
            name = QString::fromStdString(UserList[numOfUser-1].PetVec[j]->GetName());
            qDebug()<<level<<" "<<name;
        }
        qDebug()<<"加入成功";



    }//while
    file.close();
}


void user::receiveshowUser(PlayUser us)
{
    InitialUserListInfo();//根据文件来初始化UserList，因为每次都要更新在线好友和宠物小精灵，所有展示用户界面、查看背包、胜率必经之路的用户展示界面，都初始化一次
    //UserListExamine();//检测
    extern int flag;
    this->show();
    QString showname;
    //this->i=us;
    for(unsigned int j=0;j<numOfUser;j++)
    {
        if(QString::compare(QString::fromStdString(UserList[j].name),QString::fromStdString(us.name))==0)
        {
            this->numcode=j;
            qDebug()<<"你是第几个？";
            qDebug()<<j;
            this->i=UserList[j];//get到登录的这个的定位
            UserList[j].state=0;//登录了就在线啦
            break;
        }
    }
    showname = QString::fromStdString(us.name);
    temp=us;
//    qDebug()<<"拷贝该用户";
//    qDebug()<<QString::fromStdString(us.name);
//    qDebug()<<us.state;
//    qDebug()<<"用户分配到的宠物小精灵是：";
//    qDebug()<<us.PetVec[0]->GetLevel()<<"级"<<QString::fromStdString(us.PetVec[0]->GetName());
//    qDebug()<<"拷贝后";
    qDebug()<<QString::fromStdString(this->i.name);
    qDebug()<<this->i.PetVec.size();
    qDebug()<<this->i.state;
    qDebug()<<"用户分配到的宠物小精灵是：";
    for(unsigned int pp=0;pp<this->i.numOfPet;pp++)
    {
        qDebug()<<this->i.PetVec[pp]->GetLevel()<<"级"<<QString::fromStdString(this->i.PetVec[pp]->GetName());
    }
     this->ui->user_3->setText(showname);
//    QWidget *s[100];

//    flag=0;

//    s[flag] = new QWidget;
//    this->ui->toolBox->insertItem(1,s[flag]," ");
    //delete s[flag];

    qDebug()<<"登录完毕，准备显示列表";

    qDebug()<<"我现在有多少用户呢？"<<numOfUser;

    QString list="在线好友\n";
    for (unsigned int i = 0; i<numOfUser; ++i)
    {
        if(UserList[i].state==0)
        {
            list+=QString::fromStdString(UserList[i].name);
            list+="\n";
        }

    }
    list+="\n";
    list+="离线好友\n";
    for (unsigned int i = 0; i<numOfUser; ++i)
    {
        if(UserList[i].state==1)
        {
            list+=QString::fromStdString(UserList[i].name);
            list+="\n";
        }

    }
    qDebug()<<list;
    this->ui->OnlineList->setPlainText(list);




//    while (!file.atEnd())
//    {
//        QTextCodec *codec=QTextCodec::codecForName("GB2312");

//       // std::locale::global(std::locale(""));
//        filename = codec->toUnicode(file.readLine());
//        //filename = file.readLine();
//        filename = filename.simplified();
//        filePswr = codec->toUnicode(file.readLine());
//        filePswr = filePswr.simplified();
//        //qDebug()<<inputName<<filename<<endl;

//        flag++;
//        s[flag] = new QWidget;
//        this->ui->toolBox->insertItem(1,s[flag],filename);

//    }

//    flag++;
//    s[flag] = new QWidget;
//    this->ui->toolBox->addItem(s[flag],"离线好友检测");
}

void user::on_pushButton_5_clicked()
{
    //注销了要记得将该用户状态改为离线，同时迅速更新txt文件，保存用户信息

    UserList[this->numcode].state=1;
    //直接执行更新UserInfo函数
    QFile ffile("userInfo.txt");
    if (!ffile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug()<<"文件无法打开222";
        qDebug()<<ffile.exists();
        qDebug()<<ffile.error();
        qDebug()<<ffile.errorString();
        exit(-1);
    }
    QTextStream out(&ffile);


    for(unsigned int www=0;www<numOfUser;www++)
    {
        QString ans;
        ans+=QString::fromStdString(UserList[www].name);
        ans+=" ";
        ans+=QString::number(UserList[www].state,10);
        ans+=" ";
        ans+= QString::number(UserList[www].numOfPet,10);
        ans+=" ";
        for(unsigned int vvv=0;vvv<UserList[www].numOfPet;vvv++)
        {
            int i;
            for(i=0;i<12;i++)
            {
                if(QString::fromStdString(UserList[www].PetVec[vvv]->GetName()).compare(QString::fromStdString(Ch[i])) == 0)
                    break;
            }
            ans+=QString::number(i+1,10);
            ans+=" ";
            ans+=QString::number(UserList[www].PetVec[vvv]->GetLevel(),10);
            ans+=" ";
        }//for
        ans+= QString::number(UserList[www].totalGame,10);
        ans+=" ";
        ans+=QString::number(UserList[www].okGame,10);
        out << ans + "\n";
        qDebug()<<ans;
    }//for
    ffile.close();
    //this->ui->toolBox->close();
    //不hide了，注销了就不会再用，下次再用再登录再初始化就行了，直接destroy
    this->destroy();
    //this->hide();
    emit showmain();
}

void user::on_pushButton_clicked()
{
    qDebug()<<this->i.numOfPet;
    for(unsigned int j = 0;j<this->i.numOfPet;j++)
    {
        qDebug()<<this->i.PetVec[j]->GetLevel()<<"级"<<QString::fromStdString(this->i.PetVec[j]->GetName());
    }
    //最先没有做背包界面，通过输出给大家展示该功能哈哈哈哈（现在也只显示图片，没有做等级显示，还是得依托这个输出观看哦
    emit showPack(this->i);//激活用户界面展示信号
}

void user::on_pushButton_2_clicked()
{
    emit ShowCheck();//进入查看胜率和金银铜牌勋章界面
}

void user::on_pushButton_3_clicked()
{
    this->hide();
    emit showChoose(this->i,1);//用户，升级赛
}

void user::on_pushButton_4_clicked()
{
    this->hide();
    emit showChoose(this->i,2);//用户，决斗赛
}

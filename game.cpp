#include "game.h"
#include "ui_game.h"
#include <QDebug>
#include <QLabel>
#include <typeinfo>
#include <algorithm>
#include <QColor>
#include <QString>
#include <windows.h>
#include <QFile>
#include "mainwindow.h"
#include "definition.h"
#include "total.h"

static string Ch[12]={"沙瓦朗", "火爆猴", "腕力", "卡比兽", "泥偶巨人", "白海狮", "车轮球", "树枕尾熊", "梦妖", "豆豆鸽", "花舞鸟", "电飞鼠"};
static string En[12]={"Chavaran", "HotMonkey", "Force", "KabiBeast", "MudGiant", "WhiteSeaLion", "WheelBall", "TreeTailedBear", "DreamDemon", "BeanPigeon", "FlowerBirds", "ElectricFlyingRat"};


Game::Game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Game)
{
    ui->setupUi(this);
    this->setWindowTitle("Game");
}

Game::~Game()
{
    delete ui;
}

//对战
void Game::WeAreFight(PlayUser us, Elf* ex,Elf* Oex,int kind)
{
    Elf* CopyOex = Oex;
    double sleepTime;
    while((ex->GetLife()>1e-6)||(Oex->GetLife()>1e-6))
    {
        if(ex->GetInternal()>=Oex->GetInternal())
        {
            //选一个攻击间隔最短的先sleep着，然后再sleep长的减去他的时间，来模拟这个出装
            sleepTime=Oex->GetInternal();
            Sleep(sleepTime);
            //对方攻击力，折损自身防御力的50%，对自身生命值造成伤害
            if((Oex->GetAttack()-ex->GetDefence()*0.5)>1e-6)
            {
                ex->life -= Oex->GetAttack()-ex->GetDefence()*0.5;
                Oex->exp += Oex->GetAttack()-ex->GetDefence()*0.5;
            }
            if(ex->GetLife()<1e-6)
            {
                //一旦出现没有生命值了，就结束，同时显示那里显示0，不然显示负数好奇怪
                this->ui->YourAttack->clear();
                this->ui->OtherAttack->clear();
                this->ui->YourExp->clear();
                this->ui->YourPro->clear();
                this->ui->YourLife->clear();
                this->ui->YourShot->clear();
                this->ui->YourTime->clear();
                this->ui->YourLevel->clear();
                this->ui->OtherExp->clear();
                this->ui->OtherPro->clear();
                this->ui->OtherLife->clear();
                this->ui->OtherShot->clear();
                this->ui->OtherTime->clear();
                this->ui->OtherLevel->clear();


                this->ui->OtherAttack->setPlainText(QString::fromStdString(Oex->attackOfType()));
                this->ui->YourExp->setPlainText(QString::number(ex->GetExp(),10,5));
                this->ui->YourPro->setPlainText(QString::number(ex->GetDefence(),10,5));
                this->ui->YourLife->setPlainText(QString::number(0,10,5));
                this->ui->YourShot->setPlainText(QString::number(ex->GetAttack(),10,5));
                this->ui->YourTime->setPlainText(QString::number(ex->GetInternal(),10,5));
                this->ui->YourLevel->setPlainText(QString::number(ex->GetLevel(),10,5));
                this->ui->OtherExp->setPlainText(QString::number(Oex->GetExp(),10,5));
                this->ui->OtherPro->setPlainText(QString::number(Oex->GetDefence(),10,5));
                this->ui->OtherLife->setPlainText(QString::number(Oex->GetLife(),10,5));
                this->ui->OtherShot->setPlainText(QString::number(Oex->GetAttack(),10,5));
                this->ui->OtherTime->setPlainText(QString::number(Oex->GetInternal(),10,5));
                this->ui->OtherLevel->setPlainText(QString::number(Oex->GetLevel(),10,5));

                //重要的是下边这句，将来不及的慢慢交给内部做，不然会造成界面疯狂闪顿，根本看不清是啥
                QApplication::processEvents();
                break;
            }
            ex->levelUp();
            Oex->levelUp();
            //this->hide();
            this->ui->YourAttack->clear();
            this->ui->OtherAttack->clear();
            this->ui->YourExp->clear();
            this->ui->YourPro->clear();
            this->ui->YourLife->clear();
            this->ui->YourShot->clear();
            this->ui->YourTime->clear();
            this->ui->YourLevel->clear();
            this->ui->OtherExp->clear();
            this->ui->OtherPro->clear();
            this->ui->OtherLife->clear();
            this->ui->OtherShot->clear();
            this->ui->OtherTime->clear();
            this->ui->OtherLevel->clear();


            this->ui->OtherAttack->setPlainText(QString::fromStdString(Oex->attackOfType()));
            this->ui->YourExp->setPlainText(QString::number(ex->GetExp(),10,5));
            this->ui->YourPro->setPlainText(QString::number(ex->GetDefence(),10,5));
            this->ui->YourLife->setPlainText(QString::number(ex->GetLife(),10,5));
            this->ui->YourShot->setPlainText(QString::number(ex->GetAttack(),10,5));
            this->ui->YourTime->setPlainText(QString::number(ex->GetInternal(),10,5));
            this->ui->YourLevel->setPlainText(QString::number(ex->GetLevel(),10,5));
            this->ui->OtherExp->setPlainText(QString::number(Oex->GetExp(),10,5));
            this->ui->OtherPro->setPlainText(QString::number(Oex->GetDefence(),10,5));
            this->ui->OtherLife->setPlainText(QString::number(Oex->GetLife(),10,5));
            this->ui->OtherShot->setPlainText(QString::number(Oex->GetAttack(),10,5));
            this->ui->OtherTime->setPlainText(QString::number(Oex->GetInternal(),10,5));
            this->ui->OtherLevel->setPlainText(QString::number(Oex->GetLevel(),10,5));

            //重要的是下边这句
            QApplication::processEvents();
            //            this->show();
            //            Sleep(3000);



            Sleep((ex->GetInternal()-Oex->GetInternal()));
            //对方攻击力，折损自身防御力的50%，对自身生命值造成伤害
            if((ex->GetAttack()-Oex->GetDefence()*0.5)>1e-6)
            {
                Oex->life -= ex->GetAttack()-Oex->GetDefence()*0.5;
                ex->exp += ex->GetAttack()-Oex->GetDefence()*0.5;
            }
            //ex->levelUp();
            if(Oex->GetLife()<1e-6)
            {
                this->ui->YourAttack->clear();
                this->ui->OtherAttack->clear();
                this->ui->YourExp->clear();
                this->ui->YourPro->clear();
                this->ui->YourLife->clear();
                this->ui->YourShot->clear();
                this->ui->YourTime->clear();
                this->ui->YourLevel->clear();
                this->ui->OtherExp->clear();
                this->ui->OtherPro->clear();
                this->ui->OtherLife->clear();
                this->ui->OtherShot->clear();
                this->ui->OtherTime->clear();
                this->ui->OtherLevel->clear();


                this->ui->YourAttack->setPlainText(QString::fromStdString(ex->attackOfType()));
                this->ui->YourExp->setPlainText(QString::number(ex->GetExp(),10,5));
                this->ui->YourPro->setPlainText(QString::number(ex->GetDefence(),10,5));
                this->ui->YourLife->setPlainText(QString::number(ex->GetLife(),10,5));
                this->ui->YourShot->setPlainText(QString::number(ex->GetAttack(),10,5));
                this->ui->YourTime->setPlainText(QString::number(ex->GetInternal(),10,5));
                this->ui->YourLevel->setPlainText(QString::number(ex->GetLevel(),10,5));
                this->ui->OtherExp->setPlainText(QString::number(Oex->GetExp(),10,5));
                this->ui->OtherPro->setPlainText(QString::number(Oex->GetDefence(),10,5));
                this->ui->OtherLife->setPlainText(QString::number(0,10,5));
                this->ui->OtherShot->setPlainText(QString::number(Oex->GetAttack(),10,5));
                this->ui->OtherTime->setPlainText(QString::number(Oex->GetInternal(),10,5));
                this->ui->OtherLevel->setPlainText(QString::number(Oex->GetLevel(),10,5));

                //重要的是下边这句
                QApplication::processEvents();
                break;
            }
            ex->levelUp();
            Oex->levelUp();
            //this->hide();
            this->ui->YourAttack->clear();
            this->ui->OtherAttack->clear();
            this->ui->YourExp->clear();
            this->ui->YourPro->clear();
            this->ui->YourLife->clear();
            this->ui->YourShot->clear();
            this->ui->YourTime->clear();
            this->ui->YourLevel->clear();
            this->ui->OtherExp->clear();
            this->ui->OtherPro->clear();
            this->ui->OtherLife->clear();
            this->ui->OtherShot->clear();
            this->ui->OtherTime->clear();
            this->ui->OtherLevel->clear();

            this->ui->YourAttack->setPlainText(QString::fromStdString(ex->attackOfType()));
            this->ui->YourExp->setPlainText(QString::number(ex->GetExp(),10,5));
            this->ui->YourPro->setPlainText(QString::number(ex->GetDefence(),10,5));
            this->ui->YourLife->setPlainText(QString::number(ex->GetLife(),10,5));
            this->ui->YourShot->setPlainText(QString::number(ex->GetAttack(),10,5));
            this->ui->YourTime->setPlainText(QString::number(ex->GetInternal(),10,5));
            this->ui->YourLevel->setPlainText(QString::number(ex->GetLevel(),10,5));
            this->ui->OtherExp->setPlainText(QString::number(Oex->GetExp(),10,5));
            this->ui->OtherPro->setPlainText(QString::number(Oex->GetDefence(),10,5));
            this->ui->OtherLife->setPlainText(QString::number(Oex->GetLife(),10,5));
            this->ui->OtherShot->setPlainText(QString::number(Oex->GetAttack(),10,5));
            this->ui->OtherTime->setPlainText(QString::number(Oex->GetInternal(),10,5));
            this->ui->OtherLevel->setPlainText(QString::number(Oex->GetLevel(),10,5));
            //重要的是下边这句
            QApplication::processEvents();
            //            this->show();
            //            Sleep(3000);

        }//if
        else
        {
            sleepTime=ex->GetInternal();
            Sleep(sleepTime);
            //对方攻击力，折损自身防御力的50%，对自身生命值造成伤害
            if((ex->GetAttack()-Oex->GetDefence()*0.5)>1e-6)
            {
                Oex->life -= ex->GetAttack()-Oex->GetDefence()*0.5;
                ex->exp += ex->GetAttack()-Oex->GetDefence()*0.5;
            }
            //ex->levelUp();
            if(Oex->GetLife()<1e-6)
            {
                this->ui->YourAttack->clear();
                this->ui->OtherAttack->clear();
                this->ui->YourExp->clear();
                this->ui->YourPro->clear();
                this->ui->YourLife->clear();
                this->ui->YourShot->clear();
                this->ui->YourTime->clear();
                this->ui->YourLevel->clear();
                this->ui->OtherExp->clear();
                this->ui->OtherPro->clear();
                this->ui->OtherLife->clear();
                this->ui->OtherShot->clear();
                this->ui->OtherTime->clear();
                this->ui->OtherLevel->clear();


                this->ui->YourAttack->setPlainText(QString::fromStdString(ex->attackOfType()));
                this->ui->YourExp->setPlainText(QString::number(ex->GetExp(),10,5));
                this->ui->YourPro->setPlainText(QString::number(ex->GetDefence(),10,5));
                this->ui->YourLife->setPlainText(QString::number(ex->GetLife(),10,5));
                this->ui->YourShot->setPlainText(QString::number(ex->GetAttack(),10,5));
                this->ui->YourTime->setPlainText(QString::number(ex->GetInternal(),10,5));
                this->ui->YourLevel->setPlainText(QString::number(ex->GetLevel(),10,5));
                this->ui->OtherExp->setPlainText(QString::number(Oex->GetExp(),10,5));
                this->ui->OtherPro->setPlainText(QString::number(Oex->GetDefence(),10,5));
                this->ui->OtherLife->setPlainText(QString::number(0,10,5));
                this->ui->OtherShot->setPlainText(QString::number(Oex->GetAttack(),10,5));
                this->ui->OtherTime->setPlainText(QString::number(Oex->GetInternal(),10,5));
                this->ui->OtherLevel->setPlainText(QString::number(Oex->GetLevel(),10,5));

                //重要的是下边这句
                QApplication::processEvents();
                break;
            }
            ex->levelUp();
            Oex->levelUp();
            //this->hide();
            this->ui->YourAttack->clear();
            this->ui->OtherAttack->clear();
            this->ui->YourExp->clear();
            this->ui->YourPro->clear();
            this->ui->YourLife->clear();
            this->ui->YourShot->clear();
            this->ui->YourTime->clear();
            this->ui->YourLevel->clear();
            this->ui->OtherExp->clear();
            this->ui->OtherPro->clear();
            this->ui->OtherLife->clear();
            this->ui->OtherShot->clear();
            this->ui->OtherTime->clear();
            this->ui->OtherLevel->clear();

            this->ui->YourAttack->setPlainText(QString::fromStdString(ex->attackOfType()));
            this->ui->YourExp->setPlainText(QString::number(ex->GetExp(),10,5));
            this->ui->YourPro->setPlainText(QString::number(ex->GetDefence(),10,5));
            this->ui->YourLife->setPlainText(QString::number(ex->GetLife(),10,5));
            this->ui->YourShot->setPlainText(QString::number(ex->GetAttack(),10,5));
            this->ui->YourTime->setPlainText(QString::number(ex->GetInternal(),10,5));
            this->ui->YourLevel->setPlainText(QString::number(ex->GetLevel(),10,5));
            this->ui->OtherExp->setPlainText(QString::number(Oex->GetExp(),10,5));
            this->ui->OtherPro->setPlainText(QString::number(Oex->GetDefence(),10,5));
            this->ui->OtherLife->setPlainText(QString::number(Oex->GetLife(),10,5));
            this->ui->OtherShot->setPlainText(QString::number(Oex->GetAttack(),10,5));
            this->ui->OtherTime->setPlainText(QString::number(Oex->GetInternal(),10,5));
            this->ui->OtherLevel->setPlainText(QString::number(Oex->GetLevel(),10,5));
            //重要的是下边这句
            QApplication::processEvents();
            //            this->show();
            //            Sleep(3000);



            Sleep((Oex->GetInternal()-ex->GetInternal()));
            //对方攻击力，折损自身防御力的50%，对自身生命值造成伤害
            if((Oex->GetAttack()-ex->GetDefence()*0.5)>1e-6)
            {
                ex->life -= Oex->GetAttack()-ex->GetDefence()*0.5;
                Oex->exp += Oex->GetAttack()-ex->GetDefence()*0.5;
            }
            if(ex->GetLife()<1e-6)
            {
                this->ui->YourAttack->clear();
                this->ui->OtherAttack->clear();
                this->ui->YourExp->clear();
                this->ui->YourPro->clear();
                this->ui->YourLife->clear();
                this->ui->YourShot->clear();
                this->ui->YourTime->clear();
                this->ui->YourLevel->clear();
                this->ui->OtherExp->clear();
                this->ui->OtherPro->clear();
                this->ui->OtherLife->clear();
                this->ui->OtherShot->clear();
                this->ui->OtherTime->clear();
                this->ui->OtherLevel->clear();


                this->ui->OtherAttack->setPlainText(QString::fromStdString(Oex->attackOfType()));
                this->ui->YourExp->setPlainText(QString::number(ex->GetExp(),10,5));
                this->ui->YourPro->setPlainText(QString::number(ex->GetDefence(),10,5));
                this->ui->YourLife->setPlainText(QString::number(0,10,5));
                this->ui->YourShot->setPlainText(QString::number(ex->GetAttack(),10,5));
                this->ui->YourTime->setPlainText(QString::number(ex->GetInternal(),10,5));
                this->ui->YourLevel->setPlainText(QString::number(ex->GetLevel(),10,5));
                this->ui->OtherExp->setPlainText(QString::number(Oex->GetExp(),10,5));
                this->ui->OtherPro->setPlainText(QString::number(Oex->GetDefence(),10,5));
                this->ui->OtherLife->setPlainText(QString::number(Oex->GetLife(),10,5));
                this->ui->OtherShot->setPlainText(QString::number(Oex->GetAttack(),10,5));
                this->ui->OtherTime->setPlainText(QString::number(Oex->GetInternal(),10,5));
                this->ui->OtherLevel->setPlainText(QString::number(Oex->GetLevel(),10,5));

                //重要的是下边这句
                QApplication::processEvents();
                break;
            }
            ex->levelUp();
            Oex->levelUp();
            //this->hide();
            this->ui->YourAttack->clear();
            this->ui->OtherAttack->clear();
            this->ui->YourExp->clear();
            this->ui->YourPro->clear();
            this->ui->YourLife->clear();
            this->ui->YourShot->clear();
            this->ui->YourTime->clear();
            this->ui->YourLevel->clear();
            this->ui->OtherExp->clear();
            this->ui->OtherPro->clear();
            this->ui->OtherLife->clear();
            this->ui->OtherShot->clear();
            this->ui->OtherTime->clear();
            this->ui->OtherLevel->clear();

            this->ui->OtherAttack->setPlainText(QString::fromStdString(Oex->attackOfType()));
            this->ui->YourExp->setPlainText(QString::number(ex->GetExp(),10,5));
            this->ui->YourPro->setPlainText(QString::number(ex->GetDefence(),10,5));
            this->ui->YourLife->setPlainText(QString::number(ex->GetLife(),10,5));
            this->ui->YourShot->setPlainText(QString::number(ex->GetAttack(),10,5));
            this->ui->YourTime->setPlainText(QString::number(ex->GetInternal(),10,5));
            this->ui->YourLevel->setPlainText(QString::number(ex->GetLevel(),10,5));
            this->ui->OtherExp->setPlainText(QString::number(Oex->GetExp(),10,5));
            this->ui->OtherPro->setPlainText(QString::number(Oex->GetDefence(),10,5));
            this->ui->OtherLife->setPlainText(QString::number(Oex->GetLife(),10,5));
            this->ui->OtherShot->setPlainText(QString::number(Oex->GetAttack(),10,5));
            this->ui->OtherTime->setPlainText(QString::number(Oex->GetInternal(),10,5));
            this->ui->OtherLevel->setPlainText(QString::number(Oex->GetLevel(),10,5));
            //重要的是下边这句
            QApplication::processEvents();
            //            this->show();
            //            Sleep(3000);
        }//else

    }//while
    unsigned int j;
    for(j=0;j<numOfUser;j++)
    {
        if(QString::compare(QString::fromStdString(UserList[j].name),QString::fromStdString(us.name))==0)
        {
            break;
        }
    }

    //升级赛，不需要做什么，因为对战过程中你的精灵已经被升级了，这里又是直接把你的精灵作为参数，只要及时存进txt就行
    //决斗赛，在对战过程中，你的精灵、你的对战精灵都或多或少升级了，赢了就两倍快乐，输了就加倍悲伤
    //要记得，赢了或输了总比赛场数都要+1，但输了胜利场数不需要变~
    if(kind==1)
    {
        if(ex->GetLife()<1e-6)
            UserList[j].totalGame++;
        if(Oex->GetLife()<1e-6)
        {
            UserList[j].totalGame++;
            UserList[j].okGame++;
        }
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
                ans+=QString::number(i+1,10);//这里是i+1！因为是static数组的下标，要加1，不然会出错
                //我在这里就因为精灵代号不对，一直异常中止，找了很久才找到
                //第二个参数是十进制的意思，其实缺省也是10
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

        //下面大概都是一样的啦~

        //名字 状态 宠物精灵数 宠物名 精灵等级 总场数 胜场数（执行函数，改变徽章）


    }//if
    else
    {
        if(kind==2)
        {
            if(ex->GetLife()<1e-6)
            {

                //随机抽出三个精灵用以挑选丢弃，没有三个就列出全部
                UserList[j].PetVec.pop_back();
                UserList[j].numOfPet--;
                UserList[j].totalGame++;
                if(UserList[j].numOfPet <= 3)
                    UserList[j].petIcon=0;
                else
                {
                    if((UserList[j].numOfPet == 4) || (UserList[j].numOfPet == 5))
                        UserList[j].petIcon=1;
                    else
                        UserList[j].petIcon=2;
                }
                int numw=0;
                for(int nnn=0;nnn<UserList[j].numOfPet;nnn++)
                {
                    if(UserList[j].PetVec[nnn]->GetLevel()==15)
                        numw++;
                }
                if(numw <= 3)
                    UserList[j].vipIcon=0;
                else
                {
                    if((numw == 4) || (numw == 5))
                        UserList[j].vipIcon=1;
                    else
                        UserList[j].vipIcon=2;
                }
                //丢弃后，查看还有没有精灵，没有再随机分配一个
                if(UserList[j].numOfPet==0)
                {
                    int seed;//随机数
                    Elf *ex;
                    seed = (rand() % (12-1+1))+ 1;
                    switch(seed)
                    {
                    case 1:
                        ex=new Chavaran;
                        UserList[j].PetVec.push_back(ex);
                        break;
                    case 2:
                        ex=new HotMonkey;
                        UserList[j].PetVec.push_back(ex);
                        break;
                    case 3:
                        ex=new Force;
                        UserList[j].PetVec.push_back(ex);
                        break;
                    case 4:
                        ex=new KabiBeast;
                        UserList[j].PetVec.push_back(ex);
                        break;
                    case 5:
                        ex=new MudGiant;
                        UserList[j].PetVec.push_back(ex);
                        break;
                    case 6:
                        ex=new WhiteSeaLion;
                        UserList[j].PetVec.push_back(ex);
                        break;
                    case 7:
                        ex=new WheelBall;
                        UserList[j].PetVec.push_back(ex);
                        break;
                    case 8:
                        ex=new TreeTailedBear;
                        UserList[j].PetVec.push_back(ex);
                        break;
                    case 9:
                        ex=new DreamDemon;
                        UserList[j].PetVec.push_back(ex);
                        break;
                    case 10:
                        ex=new BeanPigeon;
                        UserList[j].PetVec.push_back(ex);
                        break;
                    case 11:
                        ex=new FlowerBirds;
                        UserList[j].PetVec.push_back(ex);
                        break;
                    case 12:
                        ex=new ElectricFlyingRat;
                        UserList[j].PetVec.push_back(ex);
                        break;
                    default:
                        qDebug()<<"随机数不正确";
                        break;

                    }
                    UserList[j].numOfPet++;
                    if(UserList[j].numOfPet <= 3)
                        UserList[j].petIcon=0;
                    else
                    {
                        if((UserList[j].numOfPet == 4) || (UserList[j].numOfPet == 5))
                            UserList[j].petIcon=1;
                        else
                            UserList[j].petIcon=2;
                    }
                    int numw=0;
                    for(int nnn=0;nnn<UserList[j].numOfPet;nnn++)
                    {
                        if(UserList[j].PetVec[nnn]->GetLevel()==15)
                            numw++;
                    }
                    if(numw <= 3)
                        UserList[j].vipIcon=0;
                    else
                    {
                        if((numw == 4) || (numw == 5))
                            UserList[j].vipIcon=1;
                        else
                            UserList[j].vipIcon=2;
                    }
                }

                //执行更新UserInfo函数
                QFile ffile("userInfo.txt");
                //qDebug()<<ffile.open(QIODevice::WriteOnly);
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
                    }
                    ans+= QString::number(UserList[www].totalGame,10);
                    ans+=" ";
                    ans+=QString::number(UserList[www].okGame,10);
                    out << ans + "\n";
                    qDebug()<<ans;
                }
                ffile.close();

            }//if(ex->GetLife()<1e-6)
            else
            {
                UserList[j].PetVec.push_back(CopyOex);
                UserList[j].numOfPet++;
                UserList[j].okGame++;
                UserList[j].totalGame++;
                //一改动就要判断勋章的事情
                if(UserList[j].numOfPet <= 3)
                    UserList[j].petIcon=0;
                else
                {
                    if((UserList[j].numOfPet == 4) || (UserList[j].numOfPet == 5))
                        UserList[j].petIcon=1;
                    else
                        UserList[j].petIcon=2;
                }
                int numw=0;
                for(int nnn=0;nnn<UserList[j].numOfPet;nnn++)
                {
                    if(UserList[j].PetVec[nnn]->GetLevel()==15)
                        numw++;
                }
                if(numw <= 3)
                    UserList[j].vipIcon=0;
                else
                {
                    if((numw == 4) || (numw == 5))
                        UserList[j].vipIcon=1;
                    else
                        UserList[j].vipIcon=2;
                }
                //执行更新UserInfo函数
                QFile ffile("userInfo.txt");
                //qDebug()<<ffile.open(QIODevice::WriteOnly);
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
                    }
                    ans+= QString::number(UserList[www].totalGame,10);
                    ans+=" ";
                    ans+=QString::number(UserList[www].okGame,10);
                    out << ans + "\n";
                    qDebug()<<ans;
                }
                ffile.close();
            }//if(Oex->GetLife()<1e-6)
        }//if(kind==2)
    }
    Sleep(3000);//这里精致三秒钟为了便于观赏
    this->ui->YourAttack->clear();
    this->ui->OtherAttack->clear();
    this->ui->YourExp->clear();
    this->ui->YourPro->clear();
    this->ui->YourLife->clear();
    this->ui->YourShot->clear();
    this->ui->YourTime->clear();
    this->ui->YourLevel->clear();
    this->ui->OtherExp->clear();
    this->ui->OtherPro->clear();
    this->ui->OtherLife->clear();
    this->ui->OtherShot->clear();
    this->ui->OtherTime->clear();
    this->ui->OtherLevel->clear();
    this->hide();
    emit showUser(UserList[j]);//回到用户界面

}

//展示该界面
void Game::receiveShowGame(PlayUser us,int CLevel,QString CName,int DLevel,QString DName,int KKind)
{
    this->i=us;
    this->ui->GameKind->clear();
    this->ui->YourAttack->clear();
    this->ui->OtherAttack->clear();
    this->ui->YourExp->clear();
    this->ui->YourPro->clear();
    this->ui->YourLife->clear();
    this->ui->YourShot->clear();
    this->ui->YourTime->clear();
    this->ui->YourLevel->clear();
    this->ui->OtherExp->clear();
    this->ui->OtherPro->clear();
    this->ui->OtherLife->clear();
    this->ui->OtherShot->clear();
    this->ui->OtherTime->clear();
    this->ui->OtherLevel->clear();
    this->ui->GameKind->setAlignment(Qt::AlignHCenter);

    QString Vpath="://Poke/vs.png";
    //QImage Vimage(Vpath);
    //本来想在两个宠物小精灵图片中央放一个VS图片，but后来老是找不到不违和的图片，我又画不出来，没弄了
    QPixmap Vs = QPixmap(Vpath);
    //this->ui->vs->setPixmap(QPixmap::fromImage(Vimage));
    //this->ui->->setPixmap(QPixmap::fromImage(Vimage));
    if(KKind==1)
        this->ui->GameKind->setPlainText("升级赛");
    if(KKind==2)
        this->ui->GameKind->setPlainText("决斗赛");
    int i;
    for(i=0;i<12;i++)
    {
        if(CName.compare(QString::fromStdString(Ch[i])) == 0)
            break;
    }
    //根据你的输入，来初始化精灵：主要是初始化敌方精灵，找到自己的精灵
    //我这里查看了要求文档，并没有强制要求和用户之间对战
    //所以我都是从服务器上挑选
    //默认服务器上什么宠物小精灵都有~
    Elf *ex;
    switch(i+1)
    {
    case 1:
        ex=new Chavaran;
        break;
    case 2:
        ex=new HotMonkey;
        break;
    case 3:
        ex=new Force;
        break;
    case 4:
        ex=new KabiBeast;
        break;
    case 5:
        ex=new MudGiant;
        break;
    case 6:
        ex=new WhiteSeaLion;
        break;
    case 7:
        ex=new WheelBall;
        break;
    case 8:
        ex=new TreeTailedBear;
        break;
    case 9:
        ex=new DreamDemon;
        break;
    case 10:
        ex=new BeanPigeon;
        break;
    case 11:
        ex=new FlowerBirds;
        break;
    case 12:
        ex=new ElectricFlyingRat;
        break;
    default:
        qDebug()<<"精灵代号不正确";
        break;
    }
    for(int cishu=0;cishu<CLevel-1;cishu++)
    {
        ex->exp+=10;
        ex->levelUp();
    }
    this->ui->YourExp->setPlainText(QString::number(ex->GetExp(),10,5));
    this->ui->YourPro->setPlainText(QString::number(ex->GetDefence(),10,5));
    this->ui->YourLife->setPlainText(QString::number(ex->GetLife(),10,5));
    this->ui->YourShot->setPlainText(QString::number(ex->GetAttack(),10,5));
    this->ui->YourTime->setPlainText(QString::number(ex->GetInternal(),10,5));
    this->ui->YourLevel->setPlainText(QString::number(ex->GetLevel(),10,5));




    QString name = QString::fromStdString(En[i]);

    QString path="://Poke/" + name +".jpg";
    QImage Yimage(path);
    this->ui->YourPic->setPixmap(QPixmap::fromImage(Yimage));

    for(i=0;i<12;i++)
    {
        if(DName.compare(QString::fromStdString(Ch[i])) == 0)
            break;
    }

    Elf *Oex;
    switch(i+1)
    {
    case 1:
        Oex=new Chavaran;
        break;
    case 2:
        Oex=new HotMonkey;
        break;
    case 3:
        Oex=new Force;
        break;
    case 4:
        Oex=new KabiBeast;
        break;
    case 5:
        Oex=new MudGiant;
        break;
    case 6:
        Oex=new WhiteSeaLion;
        break;
    case 7:
        Oex=new WheelBall;
        break;
    case 8:
        Oex=new TreeTailedBear;
        break;
    case 9:
        Oex=new DreamDemon;
        break;
    case 10:
        Oex=new BeanPigeon;
        break;
    case 11:
        Oex=new FlowerBirds;
        break;
    case 12:
        Oex=new ElectricFlyingRat;
        break;
    default:
        qDebug()<<"精灵代号不正确";
        break;
    }
    //Oex->level=DLevel;
    for(int cishu=0;cishu<DLevel-1;cishu++)
    {
        Oex->exp+=10;
        Oex->levelUp();
    }

    name = QString::fromStdString(En[i]);

    path="://Poke/" + name +".jpg";
    QImage Oimage(path);
    this->ui->OtherPic->setPixmap(QPixmap::fromImage(Oimage));
    this->ui->OtherExp->setPlainText(QString::number(Oex->GetExp(),10,5));
    this->ui->OtherPro->setPlainText(QString::number(Oex->GetDefence(),10,5));
    this->ui->OtherLife->setPlainText(QString::number(Oex->GetLife(),10,5));
    this->ui->OtherShot->setPlainText(QString::number(Oex->GetAttack(),10,5));
    this->ui->OtherTime->setPlainText(QString::number(Oex->GetInternal(),10,5));
    this->ui->OtherLevel->setPlainText(QString::number(Oex->GetLevel(),10,5));
    int qqq;
    for(qqq=0;qqq<this->i.numOfPet;qqq++)
    {
        if((ex->GetLevel()==this->i.PetVec[qqq]->GetLevel())&&(QString::compare(QString::fromStdString(ex->GetName()),QString::fromStdString(this->i.PetVec[qqq]->GetName()))==0))
        {
            break;
        }
    }

    this->show();
    WeAreFight(this->i,this->i.PetVec[qqq],Oex,KKind);
}

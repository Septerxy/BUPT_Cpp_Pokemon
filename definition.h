#ifndef DEFINITION_H
#define DEFINITION_H

#pragma once

#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <QDebug>

using namespace std;

//原本作为信息报文，后来弃用
typedef struct LogResSoc
{
    int type=1;
    string name;
    string pswr;
}LogResSoc;

/*
 * warning: 'Chavaran' has no out-of-line virtual method definitions; its vtable will be emitted in every translation unit
如果在头文件中定义了一个类并且具有vtable（它具有虚方法或者它来自具有虚方法的类），则它必须始终在类中具有至少一个外联虚拟方法。 如果没有这个，编译器会将vtable和RTTI复制到每个.o文件中，其中#include标题，膨胀.o文件大小和增加链接时间。

也就是说，当类中定义了虚函数时，编译器会自动生成虚函数表vtable，用来对应每一个虚函数。那么，如果所有虚拟方法都是内联的（在头文件中定义），那么编译器不知道哪个翻译单元（.cpp文件）在其中发出vtable，因此它会在所有这些中发出一个副本，并且链接器会处理用它。这会在目标文件中产生额外的工作和并且是.o文件变得更庞大。另一方面，如果虚拟函数是在线外定义的（在.cpp中），则可以在那里发射vtable，因此只会发出一个副本。

所以知道以上原因过后，解决方法就很简单了，因为我是在类中定义了虚函数并且直接在类定义内部实现这些虚函数，所以将虚函数自动变成了内联函数，那么只需要把虚函数的实现挪到类的外面去实现就可以啦。
*/

//我这里设计的各个数据和升级的数据变化，其实不好，很容易出现碾压型的选手
//而且我改不出来，我放弃了，我承认我不是一个好策划orz


//小精灵类
//1力量型：高攻击；
//2肉盾型：高生命值；
//3防御型：高防御；
//4敏捷型：低攻击间隔
//每当精灵升级的时候，宠物对应的属性值会有少量增加（主属性增加量相对较多）
class Elf
{
public:
    static int type;//种类
    static string name;//名字
    int level = 1;//等级
    double exp = 0;//经验值
    double attack = 80;//攻击力
    double defence = 50;//防御力
    double life = 1000;//生命值
    double attackOfInternal = 2000;//攻击间隔

    Elf(){qDebug()<<"构造";}
    virtual ~Elf(){qDebug()<<"析构";}
    virtual int GetType() = 0;
    virtual string GetName() = 0;
    virtual int GetLevel() = 0;
    virtual double GetExp() = 0;
    virtual double GetAttack() = 0;
    virtual double GetDefence() = 0;
    virtual double GetLife() = 0;
    virtual double GetInternal() = 0;
    virtual void levelUp() = 0;//升级函数
    virtual const string attackOfType() = 0;//攻击函数

};

//力量型：沙瓦朗、火爆猴、腕力
//沙瓦朗
class Chavaran:public Elf
{
public:
    int type = 1;
    double attack = 120;
    string name = "沙瓦朗";

    Chavaran(){qDebug()<<"构造";}
    ~Chavaran()
    {
        qDebug()<<"析构";
    }
    int GetType() override
    {
        return this->type;
    }
    string GetName() override
    {
        return this->name;
    }
    int GetLevel() override
    {
        return this->level;
    }
    double GetExp() override
    {
        return this->exp;
    }
    double GetAttack() override
    {
        return this->attack;
    }
    double GetDefence() override
    {
        return this->defence;
    }
    double GetLife() override
    {
        return this->life;
    }
    double GetInternal() override
    {
        return this->attackOfInternal;
    }

    void levelUp() override
    {
        while (this->exp >= 10)
        {
            this->exp -= 10;
            if (this->level < 15)
            {
                this->level++;
                this->attack *= 1.15;
                this->attackOfInternal *= 0.95;
                this->defence *= 1.05;
                this->life *= 1.05;
            }
        }
    }
    const string attackOfType() override
    {
        string s = "格斗攻击";
        return s;
    }
};
//火爆猴
class HotMonkey:public Elf
{
public:
    int type = 1;
    double attack = 105;
    string name = "火爆猴";

    HotMonkey(){qDebug()<<"构造";}
    ~HotMonkey(){qDebug()<<"析构";}
    int GetType() override
    {
        return this->type;
    }
    string GetName() override
    {
        return this->name;
    }
    int GetLevel() override
    {
        return this->level;
    }
    double GetExp() override
    {
        return this->exp;
    }
    double GetAttack() override
    {
        return this->attack;
    }
    double GetDefence() override
    {
        return this->defence;
    }
    double GetLife() override
    {
        return this->life;
    }
    double GetInternal() override
    {
        return this->attackOfInternal;
    }
    void levelUp() override
    {
        while (this->exp >= 10)
        {
            this->exp -= 10;
            if (this->level < 15)
            {
                this->level++;
                this->attack *= 1.15;
                this->attackOfInternal *= 0.95;
                this->defence *= 1.05;
                this->life *= 1.05;
            }
        }
    }
    const string attackOfType() override
    {
        string s = "火焰攻击";
        return s;
    }
};
//腕力
class Force :public Elf
{
public:
    int type = 1;
    double attack = 110;
    string name = "腕力";

    Force(){qDebug()<<"构造";}
    ~Force(){qDebug()<<"析构";}
    int GetType() override
    {
        return this->type;
    }
    string GetName() override
    {
        return this->name;
    }
    int GetLevel() override
    {
        return this->level;
    }
    double GetExp() override
    {
        return this->exp;
    }
    double GetAttack() override
    {
        return this->attack;
    }
    double GetDefence() override
    {
        return this->defence;
    }
    double GetLife() override
    {
        return this->life;
    }
    double GetInternal() override
    {
        return this->attackOfInternal;
    }
    void levelUp() override
    {
        while (this->exp >= 10)
        {
            this->exp -= 10;
            if (this->level < 15)
            {
                this->level++;
                this->attack *= 1.15;
                this->attackOfInternal *= 0.95;
                this->defence *= 1.05;
                this->life *= 1.05;
            }
        }
    }
    const string attackOfType() override
    {
        string s = "格斗攻击";
        return s;
    }
};

//肉盾型：卡比兽（石化攻击），泥偶巨人（幽灵攻击），白海狮（水攻击）
//卡比兽
class KabiBeast:public Elf
{
public:
    int type = 2;
    double life = 1500;
    string name = "卡比兽";

    KabiBeast(){qDebug()<<"构造";}
    ~KabiBeast(){qDebug()<<"析构";}
    int GetType() override
    {
        return this->type;
    }
    string GetName() override
    {
        return this->name;
    }
    int GetLevel() override
    {
        return this->level;
    }
    double GetExp() override
    {
        return this->exp;
    }
    double GetAttack() override
    {
        return this->attack;
    }
    double GetDefence() override
    {
        return this->defence;
    }
    double GetLife() override
    {
        return this->life;
    }
    double GetInternal() override
    {
        return this->attackOfInternal;
    }
    void levelUp() override
    {
        while (this->exp >= 10)
        {
            this->exp -= 10;
            if (this->level < 15)
            {
                this->level++;
                this->attack *= 1.15;
                this->attackOfInternal *= 0.95;
                this->defence *= 1.05;
                this->life *= 1.05;
            }
        }
    }
    const string attackOfType() override
    {
        string s = "石化攻击";
        return s;
    }
};
//泥偶巨人
class MudGiant:public Elf
{
public:
    int type = 2;
    double life = 1200;
    string name = "泥偶巨人";

    //如果基类里面有虚成员函数，则最好把析构函数也设置为虚函数
    //否则，派生类在用基类指针调用时，发生内存泄露，析构时不会调用派生类的析构函数
    //如果基类没有需成员函数，则无所谓析构函数是不是虚函数
    MudGiant(){qDebug()<<"构造";}
    ~MudGiant(){qDebug()<<"析构";}
    int GetType() override
    {
        return this->type;
    }
    string GetName() override
    {
        return this->name;
    }
    int GetLevel() override
    {
        return this->level;
    }
    double GetExp() override
    {
        return this->exp;
    }
    double GetAttack() override
    {
        return this->attack;
    }
    double GetDefence() override
    {
        return this->defence;
    }
    double GetLife() override
    {
        return this->life;
    }
    double GetInternal() override
    {
        return this->attackOfInternal;
    }
    void levelUp() override
    {
        while (this->exp >= 10)
        {
            this->exp -= 10;
            if (this->level < 15)
            {
                this->level++;
                this->attack *= 1.15;
                this->attackOfInternal *= 0.95;
                this->defence *= 1.05;
                this->life *= 1.05;
            }
        }
    }
    const string attackOfType() override
    {
        string s = "幽灵攻击";
        return s;
    }
};
//白海狮
class WhiteSeaLion:public Elf
{
public:
    int type = 2;
    double life = 1400;
    string name = "白海狮";

    WhiteSeaLion(){qDebug()<<"构造";}
    ~WhiteSeaLion(){qDebug()<<"析构";}
    int GetType() override
    {
        return this->type;
    }
    string GetName() override
    {
        return this->name;
    }
    int GetLevel() override
    {
        return this->level;
    }
    double GetExp() override
    {
        return this->exp;
    }
    double GetAttack() override
    {
        return this->attack;
    }
    double GetDefence() override
    {
        return this->defence;
    }
    double GetLife() override
    {
        return this->life;
    }
    double GetInternal() override
    {
        return this->attackOfInternal;
    }
    void levelUp() override
    {
        while (this->exp >= 10)
        {
            this->exp -= 10;
            if (this->level < 15)
            {
                this->level++;
                this->attack *= 1.15;
                this->attackOfInternal *= 0.95;
                this->defence *= 1.05;
                this->life *= 1.05;
            }
        }
    }
    const string attackOfType() override
    {
        string s = "水攻击";
        return s;
    }
};

//防御型：车轮球（毒攻击），树枕尾熊（催眠攻击），梦妖（幽灵攻击）
//车轮球
class WheelBall:public Elf
{
public:
    int type = 3;
    double defence = 75;
    string name = "车轮球";

    WheelBall(){qDebug()<<"构造";}
    ~WheelBall(){qDebug()<<"析构";}
    int GetType() override
    {
        return this->type;
    }
    string GetName() override
    {
        return this->name;
    }
    int GetLevel() override
    {
        return this->level;
    }
    double GetExp() override
    {
        return this->exp;
    }
    double GetAttack() override
    {
        return this->attack;
    }
    double GetDefence() override
    {
        return this->defence;
    }
    double GetLife() override
    {
        return this->life;
    }
    double GetInternal() override
    {
        return this->attackOfInternal;
    }
    void levelUp() override
    {
        while (this->exp >= 10)
        {
            this->exp -= 10;
            if (this->level < 15)
            {
                this->level++;
                this->attack *= 1.15;
                this->attackOfInternal *= 0.95;
                this->defence *= 1.05;
                this->life *= 1.05;
            }
        }
    }
    const string attackOfType() override
    {
        string s = "毒攻击";
        return s;
    }
};
//树枕尾熊
class TreeTailedBear:public Elf
{
public:
    int type = 3;
    double defence = 65;
    string name = "树枕尾熊";

    TreeTailedBear(){qDebug()<<"构造";}
    ~TreeTailedBear(){qDebug()<<"析构";}
    int GetType() override
    {
        return this->type;
    }
    string GetName() override
    {
        return this->name;
    }
    int GetLevel() override
    {
        return this->level;
    }
    double GetExp() override
    {
        return this->exp;
    }
    double GetAttack() override
    {
        return this->attack;
    }
    double GetDefence() override
    {
        return this->defence;
    }
    double GetLife() override
    {
        return this->life;
    }
    double GetInternal() override
    {
        return this->attackOfInternal;
    }
    void levelUp() override
    {
        while (this->exp >= 10)
        {
            this->exp -= 10;
            if (this->level < 15)
            {
                this->level++;
                this->attack *= 1.15;
                this->attackOfInternal *= 0.95;
                this->defence *= 1.05;
                this->life *= 1.05;
            }
        }
    }
    const string attackOfType() override
    {
        string s = "催眠攻击";
        return s;
    }
};
//梦妖
class DreamDemon :public Elf
{
public:
    int type = 3;
    double defence = 60;
    string name = "梦妖";

    DreamDemon(){qDebug()<<"构造";}
    ~DreamDemon(){qDebug()<<"析构";}
    int GetType() override
    {
        return this->type;
    }
    string GetName() override
    {
        return this->name;
    }
    int GetLevel() override
    {
        return this->level;
    }
    double GetExp() override
    {
        return this->exp;
    }
    double GetAttack() override
    {
        return this->attack;
    }
    double GetDefence() override
    {
        return this->defence;
    }
    double GetLife() override
    {
        return this->life;
    }
    double GetInternal() override
    {
        return this->attackOfInternal;
    }
    void levelUp() override
    {
        while (this->exp >= 10)
        {
            this->exp -= 10;
            if (this->level < 15)
            {
                this->level++;
                this->attack *= 1.15;
                this->attackOfInternal *= 0.95;
                this->defence *= 1.05;
                this->life *= 1.05;
            }
        }
    }
    const string attackOfType() override
    {
        string s = "幽灵攻击";
        return s;
    }
};

//敏捷型：豆豆鸽（飞行攻击），花舞鸟（火攻击），电飞鼠（电攻击）
//豆豆鸽
class BeanPigeon :public Elf
{
public:
    int type = 4;
    double attackOfInternal = 1600;
    string name = "豆豆鸽";

    BeanPigeon(){qDebug()<<"构造";}
    ~BeanPigeon(){qDebug()<<"析构";}
    int GetType() override
    {
        return this->type;
    }
    string GetName() override
    {
        return this->name;
    }
    int GetLevel() override
    {
        return this->level;
    }
    double GetExp() override
    {
        return this->exp;
    }
    double GetAttack() override
    {
        return this->attack;
    }
    double GetDefence() override
    {
        return this->defence;
    }
    double GetLife() override
    {
        return this->life;
    }
    double GetInternal() override
    {
        return this->attackOfInternal;
    }
    void levelUp() override
    {
        while (this->exp >= 10)
        {
            this->exp -= 10;
            if (this->level < 15)
            {
                this->level++;
                this->attack *= 1.15;
                this->attackOfInternal *= 0.95;
                this->defence *= 1.05;
                this->life *= 1.05;
            }
        }
    }
    const string attackOfType() override
    {
        string s = "飞行攻击";
        return s;
    }
};
//花舞鸟
class FlowerBirds :public Elf
{
public:
    int type = 4;
    double attackOfInternal = 1100;
    string name = "花舞鸟";

    FlowerBirds(){qDebug()<<"构造";}
    ~FlowerBirds(){qDebug()<<"析构";}
    int GetType() override
    {
        return this->type;
    }
    string GetName() override
    {
        return this->name;
    }
    int GetLevel() override
    {
        return this->level;
    }
    double GetExp() override
    {
        return this->exp;
    }
    double GetAttack() override
    {
        return this->attack;
    }
    double GetDefence() override
    {
        return this->defence;
    }
    double GetLife() override
    {
        return this->life;
    }
    double GetInternal() override
    {
        return this->attackOfInternal;
    }
    void levelUp() override
    {
        while (this->exp >= 10)
        {
            this->exp -= 10;
            if (this->level < 15)
            {
                this->level++;
                this->attack *= 1.15;
                this->attackOfInternal *= 0.95;
                this->defence *= 1.05;
                this->life *= 1.05;
            }
        }
    }
    const string attackOfType() override
    {
        string s = "火攻击";
        return s;
    }
};
//电飞鼠
class ElectricFlyingRat :public Elf
{
public:
    int type = 4;
    double attackOfInternal = 1000;
    string name = "电飞鼠";

    ElectricFlyingRat(){qDebug()<<"构造";}
    ~ElectricFlyingRat(){qDebug()<<"析构";}
    int GetType() override
    {
        return this->type;
    }
    string GetName() override
    {
        return this->name;
    }
    int GetLevel() override
    {
        return this->level;
    }
    double GetExp() override
    {
        return this->exp;
    }
    double GetAttack() override
    {
        return this->attack;
    }
    double GetDefence() override
    {
        return this->defence;
    }
    double GetLife() override
    {
        return this->life;
    }
    double GetInternal() override
    {
        return this->attackOfInternal;
    }
    void levelUp() override
    {
        while (this->exp >= 10)
        {
            this->exp -= 10;
            if (this->level < 15)
            {
                this->level++;
                this->attack *= 1.15;
                this->attackOfInternal *= 0.95;
                this->defence *= 1.05;
                this->life *= 1.05;
            }
        }
    }
    const string attackOfType() override
    {
        string s = "电攻击";
        return s;
    }
};

typedef struct PlayUser
{
   string name;
   int state = 0;//在线/离线/战斗中
   int numOfPet;//精灵数目
   vector <Elf *> PetVec;
   int totalGame = 0;//总场数
   int okGame = 0;//胜出场数
   int petIcon = 0;//宠物个数徽章：宠物个数3个及以下为铜牌0,4-5为1银牌，5个及以上为2金牌
   int vipIcon = 0;//高级宠物徽章：满级宠物个数3个及以下为铜牌0,4-5为1银牌，5个及以上为2金牌
}PlayUser;

#endif // DEFINITION_H

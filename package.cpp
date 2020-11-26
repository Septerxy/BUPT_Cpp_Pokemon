#include "package.h"
#include "ui_package.h"

#include <QDebug>
#include <QLabel>
#include <typeinfo>
#include <algorithm>
#include <windows.h>
#include <QObject>

#include "mainwindow.h"
#include "total.h"

static string Ch[12]={"沙瓦朗", "火爆猴", "腕力", "卡比兽", "泥偶巨人", "白海狮", "车轮球", "树枕尾熊", "梦妖", "豆豆鸽", "花舞鸟", "电飞鼠"};
static string En[12]={"Chavaran", "HotMonkey", "Force", "KabiBeast", "MudGiant", "WhiteSeaLion", "WheelBall", "TreeTailedBear", "DreamDemon", "BeanPigeon", "FlowerBirds", "ElectricFlyingRat"};

Package::Package(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Package)
{
    ui->setupUi(this);
    this->setWindowTitle("Package");


}

Package::~Package()
{
    delete ui;
}

//展示界面
void Package::receiveshowPack(PlayUser us)
{


    for(int j=0;j<us.numOfPet;j++)
    {
        QString name = QString::fromStdString(us.PetVec[j]->GetName());
        qDebug()<<QString::fromStdString(us.PetVec[j]->GetName());
        int i;
        for(i=0;i<12;i++)
        {
            if(name.compare(QString::fromStdString(Ch[i])) == 0)
                break;
        }

        name = QString::fromStdString(En[i]);

        //构建在资源文件里的路径来找图、贴图
        QString path="://Poke/" + name +".jpg";
        qDebug()<<path;
        QLabel* pTag=new QLabel(this);
        QImage image(path);
        pTag->setPixmap(QPixmap::fromImage(image));
        pTag->setGeometry((0+1*(j%3))*300,(0+1*(j/3))*300,300,300);

    }
    this->show();
    /*
    Sleep(30000);
    for(int j=0;j<us.numOfPet;j++)
        pTag[j]->clear();*/
}

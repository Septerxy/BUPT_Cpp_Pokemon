#include "choose.h"
#include "ui_choose.h"
#include "definition.h"
#include "total.h"
#include "mainwindow.h"

choose::choose(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::choose)
{
    ui->setupUi(this);
    this->setWindowTitle("Choose");
}

choose::~choose()
{
    delete ui;
}

//展示该界面
void choose::receiveShowChoose(PlayUser us, int pZ)
{
    //全部清空，不保留上一个人的选择
    this->ui->myName->clear();
    this->ui->myLevel->clear();
    this->ui->yourName->clear();
    this->ui->yourLevel->clear();
    this->ui->info->clear();
    this->i=us;
    this->qz=pZ;
    QString Info="以下是您拥有的宠物小精灵。\n";
    for(int j = 0;j<us.numOfPet;j++)
    {
        Info += QString::number(us.PetVec[j]->GetLevel(),10);
        Info += "级";
        Info += QString::fromStdString(us.PetVec[j]->GetName());
        Info += "\n";
    }
    Info += "您必须选择您拥有的精灵出战，同时可以选定任意等级任意精灵作为对手。\n";
    Info += "精灵等级0-15级，精灵有：沙瓦朗,火爆猴,腕力,卡比兽,泥偶巨人,白海狮,车轮球,树枕尾熊,梦妖,豆豆鸽,花舞鸟,电飞鼠\n";
    this->ui->info->setText(Info);
    this->show();
}


//选好了
void choose::on_imok_clicked()
{
    int ALevel;
    QString AName;
    int BLevel;
    QString BName;
    int kind;

    ALevel = this->ui->myLevel->toPlainText().toInt();
    AName = this->ui->myName->toPlainText();
    BLevel = this->ui->yourLevel->toPlainText().toInt();
    BName = this->ui->yourName->toPlainText();
    kind = this->qz;
    qDebug()<<ALevel<<AName<<" "<<BLevel<<BName<<" "<<kind;
    this->hide();
    emit showGame(this->i,ALevel,AName,BLevel,BName,kind);
}

#include "check.h"
#include "ui_check.h"
#include "functions.h"
#include "total.h"
#include "mainwindow.h"

Check::Check(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Check)
{
    ui->setupUi(this);
    this->setWindowTitle("check");
}

Check::~Check()
{
    delete ui;
}

//展示该界面
void Check::receiveShowCheck()
{
    //每次显示界面都要习惯性清空一下
    //不然运行次数一多会很乱（亲身感受）
    this->ui->Info->clear();
    this->ui->name->clear();
    this->show();
}

//填好了
void Check::on_CheckReady_clicked()
{
    //本来用toolbox展示在线用户和离线用户，我就可以点击那些Item来显示胜率和金银铜牌
    //但是toolbox的效果并不好，很难看而且会把界面拉伸得很难受
    //而且用toolbox点击还要做一个悬浮窗/弹出/新界面显示胜率和金银铜牌
    //所以最终还是采用了自己输入用户的昵称来查看
    //为了方便用户查看，激活此界面时我的用户界面不hide，这样你就可以切回去看一看到底有哪些用户在玩啦~
    int nom;
    string checkName;
    checkName=this->ui->name->toPlainText().toStdString();
    for(int i=0;i<numOfUser;i++)
    {
        if(QString::compare(QString::fromStdString(checkName),QString::fromStdString(UserList[i].name))==0)
        {
            nom =i;
            break;
        }
    }
    //qDebug()<<this->i.petIcon<<this->i.vipIcon;

    QString ans;
    switch(UserList[nom].petIcon)
    {
    case 0:
        ans+="铜牌宠物个数徽章\n";
        break;
    case 1:
        ans+="银牌宠物个数徽章\n";
        break;
    case 2:
        ans+="金牌宠物个数徽章\n";
        break;
    }
    switch(UserList[nom].vipIcon)
    {
    case 0:
        ans+="铜牌高级宠物徽章\n";
        break;
    case 1:
        ans+="银牌高级宠物徽章\n";
        break;
    case 2:
        ans+="金牌高级宠物徽章\n";
        break;
    }
    ans+="胜率为：";
    ans+=QString::number(UserList[nom].okGame,10);
    ans+="/";
    ans+=QString::number(UserList[nom].totalGame,10);
    //胜率不打算用那种奇奇怪怪的小数，我觉得用44/88这样就很一目了然，还能看到这个用户到底玩得多不多，挺好的
    this->ui->Info->setPlainText(ans);
}

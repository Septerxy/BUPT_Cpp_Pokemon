#ifndef USER_H
#define USER_H

#include <QDialog>
#include "definition.h"

namespace Ui {
class user;
}

class user : public QDialog
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();
    friend void InitialUserListInfo();//导入用户信息

private slots:
    void receiveshowUser(PlayUser us);

    void on_pushButton_5_clicked();//注销登录

    void on_pushButton_clicked();//背包

    void on_pushButton_2_clicked();//金银牌和胜率

    void on_pushButton_3_clicked();//升级赛

    void on_pushButton_4_clicked();//决斗赛

signals:
    void showmain();
    void showPack(PlayUser us);//展示背包
    void showChoose(PlayUser us, int pZ);//pZ为1，为升级赛；pZ为2，为决斗赛 //准备作战，选择出战和对战宠物小精灵使用
    void ShowCheck();//激活此信号来打开查看所有用户胜率、勋章界面

private:
    Ui::user *ui;
    PlayUser i;
    unsigned int numcode;//在userList里面找当前用户的下标，便于修改
};

#endif // USER_H

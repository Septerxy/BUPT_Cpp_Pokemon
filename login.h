#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QThread>
#include <winsock2.h>
#include <msgthread.h>
#include <qthread.h>
#include <QtCore>
#include <QtNetwork>
#include <QMessageBox>
#include <QTcpSocket>
#include <QTimer>
#include <QStringList>
#include <windows.h>
#include "definition.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

signals:
    void showmain();
    //void showUser(QString name);
    void showUser(PlayUser us);//登录好了之后，就激活这个来显示用户界面，为了显示用户信息，我们用一个PlayUser变量来传参

private slots:
    void receiveshowLogin();//接收其他界面需要展示登录界面的需求

    void on_return_2_clicked();//点击返回按钮，退出登录界面

    void on_login_clicked();//点击登录按钮

    void receivedata();//获取服务器的反馈信息来判断有没有用户名/密码错误，能否正常登录

private:
    Ui::Login *ui;
    QTcpSocket * tcpClient;
    QTimer tm;
    //QStringList list;
    int num;
};

#endif // LOGIN_H

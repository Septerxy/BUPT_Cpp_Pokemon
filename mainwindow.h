#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <winsock2.h>
#include <msgthread.h>
#include <qthread.h>
#include <QtCore>
#include <QtNetwork>
#include <windows.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

//MainWindow主要是进入的初始界面，因此不设置socket通信
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


signals:
    //void isSend(QString msg);



public slots:
//    void dealMsg(QString msg);
//    void dealClose();
    void on_login_clicked();//当用户点击登录按钮，激活此信号来进入登录界面
    void receiveshowmain();//接收其他界面返回主界面的showmain信号


    void on_regis_clicked();//当用户点击注册按钮，激活此信号来进入注册界面
    //void ServerConnect();

private:
    Ui::MainWindow *ui;
    //QTcpSocket * tcpClient;
    QTimer tm;
    QStringList list;



signals:
    void showLogin();//显示登录界面
    void showRegis();//显示注册界面
};
#endif // MAINWINDOW_H

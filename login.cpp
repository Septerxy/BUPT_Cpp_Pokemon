#include "login.h"
#include "ui_login.h"
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
#include <cstdlib>
#include "mainwindow.h"
#include "functions.h"
#include "definition.h"
#include "total.h"

using namespace std;




Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowTitle("Login");

}

Login::~Login()
{
    delete ui;
    delete tcpClient;
}

//读取socket
void Login::receivedata()
{
    qDebug()<<"读取";
    QString data = this->tcpClient->readAll();

    //data="wowowo";

    qDebug()<<"我读取到了";
    //data = QString::fromStdString("relax");
    qDebug()<<data;
    qDebug()<<"根据我读取到的，我来判断";
    if(QString::compare(data,"FailLogin")==0)
    {
        qDebug()<<"用户名或密码错误";
        this->tcpClient->disconnectFromHost();
        this->tcpClient->close();
        this->hide();
        emit showmain();
    }
    else
    {
        qDebug()<<data;
        QStringList list = data.split(" ");
        string wname=list[1].toStdString();
        this->tcpClient->disconnectFromHost();
        this->tcpClient->close();
        qDebug()<<"登录成功";
        //int rp = data.toInt();
        this->hide();
        PlayUser temp;
        temp.name.assign(wname);
        emit showUser(temp);
    }

}

//展示该界面
void Login::receiveshowLogin()
{
    //清空密码文本框
    this->ui->passport->clear();
    this->show();
    this->tcpClient = new QTcpSocket(this);
    this->tcpClient->abort();
    //QString data;
    //int a = 2;
    connect(this->tcpClient,&QTcpSocket::readyRead,this,&Login::receivedata);
    qDebug()<<"No error";
    connect(this->tcpClient,&QTcpSocket::disconnected,[](){qDebug()<< "Disconnected." ;});

    QTime time;
    time= QTime::currentTime();
    qsrand(time.msec()+time.second()*1000);

    qDebug() << "Login Connected." ;
    //QString ipAdd(this->ui->txtIp->text()), portd(this->ui->txtPort->text());
    QString ipAdd(QString::fromStdString("127.0.0.1"));
    QString portd(QString::fromStdString("6666"));
    qDebug()<<"No error";
    this->tcpClient->connectToHost(ipAdd,portd.toInt());
    if(this->tcpClient->waitForConnected())
    {
        qDebug()<<"OK.";
    }
    else
    { //连接失败则尝试重连
        qDebug()<<"Failed."<<this->tcpClient->errorString();

        while(!this->tcpClient->waitForConnected()){
            this->tcpClient->connectToHost(ipAdd,portd.toInt());
            qDebug()<<"Retry connectToHost.";
        }
        qDebug()<<"Connected OK.";
    }
}

//返回主界面
void Login::on_return_2_clicked()
{
    qDebug()<<"Login Disconnect.";
    this->tcpClient->disconnectFromHost();
    this->tcpClient->close();
    this->hide();//屏蔽初始界面
    emit showmain();//激活信号，让信号传送到主界面
}

//填好信息，登录
void Login::on_login_clicked()
{


    //QTextCodec *codec = QTextCodec::codecForName("GBK");
    QString inputName,inputPswr,filename,filePswr;
    inputName = ui->userName->toPlainText();
    inputPswr = ui->passport->toPlainText();
    QString data = QString::fromStdString("Login") + " " + inputName + " " + inputPswr;//->text();
    if (data.isEmpty())
    {
        return ;
    }
    this->tcpClient->write(data.toUtf8());
    //emit showUser(temp);

}

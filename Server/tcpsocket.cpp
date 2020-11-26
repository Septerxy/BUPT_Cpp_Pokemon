#include "tcpsocket.h"
#include <QtConcurrent/QtConcurrent>
#include <QHostAddress>
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <windows.h>
#include <QString>
#include <QFile>
#include <QTextCodec>
#include <QtCore/QTextStream>
#include <QtCore/QFile>
#include <QtCore/QIODevice>
#include <QDebug>

using namespace std;

TcpSocket::TcpSocket(qintptr socketDescriptor, QObject *parent) : //构造函数在主线程执行，lambda在子线程
    QTcpSocket(parent),socketID(socketDescriptor)
{
    this->setSocketDescriptor(socketDescriptor);
    connect(this,&TcpSocket::readyRead,this,&TcpSocket::readData);
    dis = connect(this,&TcpSocket::disconnected,
        [&](){
            qDebug() << "disconnect" ;
            emit sockDisConnect(socketID,this->peerAddress().toString(),this->peerPort(),QThread::currentThread());//发送断开连接的用户信息
            this->deleteLater();
        });
    connect(&watcher,&QFutureWatcher<QByteArray>::finished,this,&TcpSocket::startNext);
    connect(&watcher,&QFutureWatcher<QByteArray>::canceled,this,&TcpSocket::startNext);
    qDebug() << "new connect" ;
}

TcpSocket::~TcpSocket()
{
}


void TcpSocket::sentData(const QByteArray &data, const int id)
{
    if(id == socketID)
    {
        write(data);
    }
    //this->QAbstractSocket::writeData("fadongxi",1024);
}

void TcpSocket::disConTcp(int i)
{
    if (i == socketID)
    {
        this->disconnectFromHost();
    }
    else if (i == -1) //-1为全部断开
    {
        disconnect(dis); //先断开连接的信号槽，防止二次析构
        this->disconnectFromHost();
        this->deleteLater();
    }
}

void TcpSocket::readData()
{
//    datas.append(this->readAll());
    //auto Hdata  = handleData(this->readAll(),this->peerAddress().toString(),this->peerPort());
    auto data = this->readAll();
    //qDebug()<<"WE are test";
    qDebug() << data;
    QString str;
    str.prepend(data);
    QStringList list = str.split(" ");
    QString inputName,inputPswr;
    if(list[0]=="Regis")
    {
        inputName = list[1];
        inputPswr = list[2];
        int flag = 0;
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

        string name,password,fname,fpassword;
        name = inputName.toStdString();
        password = inputPswr.toStdString();

        while (!file.atEnd())
        {
            QTextCodec *codec=QTextCodec::codecForName("GB2312");

           // std::locale::global(std::locale(""));
            filename = codec->toUnicode(file.readLine());
            //filename = file.readLine();
            filename = filename.simplified();
            filePswr = codec->toUnicode(file.readLine());
            filePswr = filePswr.simplified();
            //qDebug()<<inputName<<filename<<endl;
            if(QString::compare(inputName, filename) == 0)
            {
                flag = 1;
            }

        }

        file.close();

        if(flag == 1)
        {
            //this->write(data);
            QString reply="IncorrectName";
            //this->write(reply.toUtf8().data());
            qDebug()<<"I want to tell client that";
            qDebug()<<reply;
            sentData(reply.toUtf8(), this->socketID);
        }
        else
        {
            //file.open(QIODevice::Append);
            QFile ffile("user.txt");
            //qDebug()<<ffile.open(QIODevice::WriteOnly);
            if (!ffile.open(QIODevice::Append | QIODevice::Text))
            {
                qDebug()<<"文件无法打开222";
                qDebug()<<ffile.exists();
                qDebug()<<ffile.error();
                qDebug()<<ffile.errorString();
                exit(-1);
            }
            QTextStream out(&ffile);
            out << inputName + "\n" + inputPswr + "\n";
            ffile.close();
            QString reply="RegisterSuccess";
            //this->write(reply.toUtf8().data());
            sentData(reply.toUtf8(), this->socketID);
        }

    }
}

QByteArray TcpSocket::handleData(QByteArray data, const QString &ip, qint16 port)
{
    QTime time;
    time.start();

    QElapsedTimer tm;
    tm.start();
    while(tm.elapsed() < 100)
    {}
    data = ip.toUtf8() + " " + QByteArray::number(port) + " " + data + " " + QTime::currentTime().toString().toUtf8();
    return data;
}

void TcpSocket::startNext()
{
    this->write(watcher.future().result());
    if (!datas.isEmpty())
    {
        watcher.setFuture(QtConcurrent::run(this,&TcpSocket::handleData,datas.dequeue(),this->peerAddress().toString(),this->peerPort()));
    }
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMainWindow>
#include <QFont>
#include <QDebug>
#include <QTime>
#include "total.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Septer's Pokemon");//设置窗口标题
//    tcpClient = new QTcpSocket(this);


//    connect(tcpClient,&QTcpSocket::readyRead,
//            [&](){qDebug() << tr("%1 Server Say：%2").arg(QTime::currentTime().toString("hh:mm:ss.zzz")).arg(QString(this->tcpClient->readAll()));});

//    connect(tcpClient,&QTcpSocket::disconnected,[](){
//        qDebug()<< "Disconnected." ;
//    });

//    QTime time;
//    time= QTime::currentTime();
//    qsrand(time.msec()+time.second()*1000);

//    qDebug() << "MainWindow Connected." ;

//    tcpClient->abort();
//    QString ipAdd(QString::fromStdString("127.0.0.1"));
//    QString portd(QString::fromStdString("6666"));
//    tcpClient->connectToHost(ipAdd,portd.toInt());
//    if(tcpClient->waitForConnected())
//    {
//        qDebug()<<"OK.";
//    }
//    else
//    { //连接失败则尝试重连
//        qDebug()<<"Failed."<<tcpClient->errorString();

//        while(!tcpClient->waitForConnected()){
//            tcpClient->connectToHost(ipAdd,portd.toInt());
//            qDebug()<<"Retry connectToHost.";
//        }
//        qDebug()<<"Connected OK.";
//    }

}

MainWindow::~MainWindow()
{
    delete ui;
    //delete tcpClient;
}







//点击登录按钮
void MainWindow::on_login_clicked()
{
    //this->destroy();
//    qDebug()<<"MainWindow Disconnect.";
//    tcpClient->disconnectFromHost();
//    tcpClient->close();
    this->hide();//屏蔽初始界面

    emit showLogin();//激活信号，让信号传送到登录界面


}

//展示该界面
void MainWindow::receiveshowmain()
{
    this->show();

}

//点击注册按钮
void MainWindow::on_regis_clicked()
{
//    qDebug()<<"MainWindow Disconnect.";
//    tcpClient->disconnectFromHost();
//    tcpClient->close();
    this->hide();

    emit showRegis();


}


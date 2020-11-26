#ifndef MSGTHREAD_H
#define MSGTHREAD_H

#include <QMainWindow>
#include <QThread>
#include <winsock2.h>
#include <QTime>
#include <QDebug>

class MsgThread : public QThread
{
    Q_OBJECT
public:
    explicit MsgThread(SOCKET mSocket,QMainWindow *parent = nullptr);
    void run();

signals:
    void isMsg(QString msg);
    void isClose();

public slots:
    void dealSend(QString msg);
private:
    QString mMsg;
    SOCKET mSocket;
    bool mIsSend =false;
};

#endif // MSGTHREAD_H

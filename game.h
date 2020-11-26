#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include "definition.h"

namespace Ui {
class Game;
}

class Game : public QWidget
{
    Q_OBJECT

public:
    explicit Game(QWidget *parent = nullptr);
    ~Game();
    void WeAreFight(PlayUser us, Elf* ex,Elf* Oex,int kind);//对战函数

signals:
    void showUser(PlayUser us);//对战完毕，直接回到用户界面

private slots:
    void receiveShowGame(PlayUser us,int CLevel,QString CName,int DLevel,QString DName,int KKind);//接收展示该界面的信号
private:
    Ui::Game *ui;
    PlayUser i;//接收传参
};

#endif // GAME_H

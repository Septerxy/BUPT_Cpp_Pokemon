#ifndef CHOOSE_H
#define CHOOSE_H

#include <QWidget>
#include "definition.h"

namespace Ui {
class choose;
}

class choose : public QWidget
{
    Q_OBJECT

public:
    explicit choose(QWidget *parent = nullptr);
    ~choose();

signals:
    //选好了，开始对战，本来想着就给一个名字一个等级就行了，后来想到还要加进用户信息里，所以把用户也给传参~
    void showGame(PlayUser us, int CLevel,QString CName,int DLevel,QString DName,int KKind);

private slots:
    void receiveShowChoose(PlayUser us, int pZ);//接收选择小精灵的信号

    void on_imok_clicked();//选好了，点击【我选好了】按钮

private:
    Ui::choose *ui;
    int qz;
    PlayUser i;
};

#endif // CHOOSE_H

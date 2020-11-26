#ifndef PACKAGE_H
#define PACKAGE_H

#include <QWidget>
#include <QLabel>
#include "definition.h"

namespace Ui {
class Package;
}

class Package : public QWidget
{
    Q_OBJECT

public:
    explicit Package(QWidget *parent = nullptr);
    ~Package();

private slots:
    void receiveshowPack(PlayUser us);//接收展示该界面信号

signals:
    void showUser(PlayUser us);//展示用户界面

private:
    Ui::Package *ui;
    //QLabel *pTag[];
};

#endif // PACKAGE_H

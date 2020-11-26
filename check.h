#ifndef CHECK_H
#define CHECK_H

#include <QWidget>

namespace Ui {
class Check;
}

class Check : public QWidget
{
    Q_OBJECT

public:
    explicit Check(QWidget *parent = nullptr);
    ~Check();
public slots:
    void receiveShowCheck();//接收展示选择界面的信号

private slots:
    void on_CheckReady_clicked();//当填写好用户昵称，点击这个按钮就好~

private:
    Ui::Check *ui;
};

#endif // CHECK_H

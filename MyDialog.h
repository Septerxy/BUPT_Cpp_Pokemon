#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QTimer>

enum TipsType
{
    TipsType_Unknown =          0,
    TipsType_Warnning =         1,//警告
    TipsType_Ok =               2//成功
};

namespace Ui {
class TipsDlg;
}

class TipsDlg : public QDialog
{
    Q_OBJECT

public:
    explicit TipsDlg(TipsType type, const QString &msg, QWidget *parent = 0);
    ~TipsDlg();

    void startTimer();

private:
    /**
     * @brief initFrame 初始化对话框
     * @param msg       提示信息
     */
    void initFrame(const QString &msg);

private:
    Ui::TipsDlg *ui;
    TipsType m_type;
    QTimer *m_pTimer;
};

#endif // MYDIALOG_H

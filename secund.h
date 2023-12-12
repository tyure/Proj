#ifndef SECUND_H
#define SECUND_H

#include <QDialog>
#include <QTimer>


namespace Ui {
class secund;
}

class secund : public QDialog
{
    Q_OBJECT

public:
    explicit secund(QWidget *parent = nullptr);
    ~secund();

private slots:
    void on_bstart_clicked();

    void on_bpause_clicked();

    void on_bstop_clicked();

    void proces();

    void on_pushButton_2_clicked();

private:
    Ui::secund *ui;
    short int min;
    short int sec;
    short int hor;
    bool paus;
    QTimer rload;

};

#endif // SECUND_H

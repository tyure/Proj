#ifndef FRSTWIND_H
#define FRSTWIND_H

#include <QDialog>
#include "timers.h"
#include "budil.h"
#include "kalendr.h"
#include "secund.h"
#include "stst.h"


namespace Ui {
class frstwind;
}

class frstwind : public QDialog
{
    Q_OBJECT

public:
    explicit frstwind(QWidget *parent = nullptr);
    ~frstwind();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::frstwind *ui;

    timers *window1;
    budil *window2;
    kalendr *window3;
    secund *window4;
    stst *window6;

};

#endif // FRSTWIND_H

#include "frstwind.h"
#include "ui_frstwind.h"
#include <QPixmap>
#include <QMessageBox>
#include <QDebug>

frstwind::frstwind(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::frstwind)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/pngtree-pink-alarm-clock-time-clock-time-png-image_2210555.jpg");
    int w = ui->img2->width();
    int h = ui->img2->height();

    ui->img2->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
}

frstwind::~frstwind()
{
    delete ui;
}

void frstwind::on_pushButton_clicked()
{
    //hide();
    window1 = new timers(this);
    window1->show();

}


void frstwind::on_pushButton_2_clicked()
{
    //hide();
    window2 = new budil(this);
    window2->show();

}


void frstwind::on_pushButton_3_clicked()
{
    //hide();
    window3 = new kalendr(this);
    window3->show();


}


void frstwind::on_pushButton_4_clicked()
{
    QMessageBox:: StandardButton reply = QMessageBox::question(this, "Виход","Ви хочете вийти?",QMessageBox:: Yes| QMessageBox:: No);
    if(reply == QMessageBox:: Yes) {
        QApplication:: quit();

    } else {
        qDebug() << "нет";
    }

}


void frstwind::on_pushButton_5_clicked()
{

    window4 = new secund(this);
    window4->show();


}


void frstwind::on_pushButton_6_clicked()
{
    //hide();
    window6 = new stst(this);
    window6 ->show();
}


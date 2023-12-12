#include "secund.h"
#include "ui_secund.h"
#include <QMessageBox>

secund::secund(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::secund)
{
    ui->setupUi(this);
    sec = 0;
    min = 0;
    hor = 0;
    paus = false;
    connect(&rload, SIGNAL(timeout()), this, SLOT(proces()));
}

secund::~secund()
{
    delete ui;
}

void secund::on_bstart_clicked()
{
    rload.start(1000);
}

void secund::on_bpause_clicked()
{
    if (!paus) {
        rload.stop();
        paus = true;
        ui->bpause->setText("Продовжити");
    } else {
        paus = false;
        rload.start(1000);
        ui->bpause->setText("Пауза");
    }
}

void secund::on_bstop_clicked()
{
    min = 0;
    sec = 0;
    hor = 0;
    paus = false;

    ui->min->display(min);
    ui->sec->display(sec);
    ui->hor->display(hor);
    rload.stop();
}

void secund::proces()
{
    sec++;

    if (sec == 60) {
        sec = 0;
        min++;
    }

    if (min == 60) {
        min = 0;
        hor++;
    }

    ui->sec->display(sec);
    ui->min->display(min);
    ui->hor->display(hor);
}

void secund::on_pushButton_2_clicked()
{

    QMessageBox:: StandardButton reply = QMessageBox::question(this, "Виход","Ви хочете вийти?",QMessageBox:: Yes| QMessageBox:: No);
    if(reply == QMessageBox:: Yes) {
        QApplication:: quit();

    } else {
        qDebug() << "нет";
    }

}


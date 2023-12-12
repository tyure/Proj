#include "stst.h"
#include "ui_stst.h"

stst::stst(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::stst)
{
    ui->setupUi(this);
    DateTime = new QTimer(this);
    connect(DateTime, SIGNAL(timeout()), this, SLOT(DTDS()));
    DateTime->setInterval(1000);
    DateTime->start();
}

stst::~stst()
{
    delete ui;
}

void stst::DTDS()
{
    QString DateAndTime = QDateTime::currentDateTime().toString("HH:mm:ss");
    ui->lcdNumber->display(DateAndTime);
}

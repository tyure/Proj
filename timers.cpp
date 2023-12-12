#include "timers.h"
#include "ui_timers.h"
#include <QMessageBox>
#include <QDebug>

timers::timers(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::timers)
{
    ui->setupUi(this);
}

timers::~timers()
{
    delete ui;
}

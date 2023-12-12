#include "sndwind.h"
#include "ui_sndwind.h"
#include <QMessageBox>
#include <QDebug>

sndwind::sndwind(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::sndwind)
{
    ui->setupUi(this);
}

sndwind::~sndwind()
{
    delete ui;
}

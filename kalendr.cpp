#include "kalendr.h"
#include "ui_kalendr.h"
#include <QMessageBox>
#include <QDebug>

kalendr::kalendr(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::kalendr)
{
    ui->setupUi(this);
}

kalendr::~kalendr()
{
    delete ui;
}

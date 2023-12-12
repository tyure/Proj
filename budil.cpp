#include "budil.h"
#include "ui_budil.h"
#include <QMessageBox>
#include <QDebug>

budil::budil(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::budil)
{
    ui->setupUi(this);
}

budil::~budil()
{
    delete ui;
}

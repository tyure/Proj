#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <QDebug>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/img/Draw_alarm-clock.png");
    int w = ui->img1->width();
    int h = ui->img1->height();

    ui->img1->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString info_lineEdit = ui->lineEdit->text();
    QString info_lineEdit_2 = ui->lineEdit_2->text();

    if (!info_lineEdit.isEmpty() && !info_lineEdit_2.isEmpty()) {
        hide();
        window = new frstwind(this);
        window->show();
    } else {
        QMessageBox::warning(this, "Попередження", "Будь ласка, введіть інформацію в обидва поля.");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox:: StandardButton reply = QMessageBox::question(this, "Виход","Ви хочете вийти?",QMessageBox:: Yes| QMessageBox:: No);
    if(reply == QMessageBox:: Yes) {
        QApplication:: quit();

    } else {
        qDebug() << "нет";
    }

}


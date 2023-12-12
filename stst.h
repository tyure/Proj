#ifndef STST_H
#define STST_H

#include <QDialog>
#include <QDateTime>
#include <QString>
#include <QTime>
#include <QDebug>
#include <QTimer>

namespace Ui {
class stst;
}

class stst : public QDialog
{
    Q_OBJECT

public:
    explicit stst(QWidget *parent = nullptr);
    ~stst();
private slots:
    void DTDS();


private:
    Ui::stst *ui;

     QTimer* DateTime;
};

#endif // STST_H

#ifndef TIMERS_H
#define TIMERS_H

#include <QDialog>


namespace Ui {
class timers;
}

class timers : public QDialog
{
    Q_OBJECT

public:
    explicit timers(QWidget *parent = nullptr);
    ~timers();

private:
    Ui::timers *ui;
};

#endif // TIMERS_H

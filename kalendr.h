#ifndef KALENDR_H
#define KALENDR_H

#include <QDialog>

namespace Ui {
class kalendr;
}

class kalendr : public QDialog
{
    Q_OBJECT

public:
    explicit kalendr(QWidget *parent = nullptr);
    ~kalendr();

private:
    Ui::kalendr *ui;
};

#endif // KALENDR_H

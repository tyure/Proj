#ifndef BUDIL_H
#define BUDIL_H

#include <QDialog>

namespace Ui {
class budil;
}

class budil : public QDialog
{
    Q_OBJECT

public:
    explicit budil(QWidget *parent = nullptr);
    ~budil();

private:
    Ui::budil *ui;
};

#endif // BUDIL_H

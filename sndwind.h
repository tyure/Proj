#ifndef SNDWIND_H
#define SNDWIND_H

#include <QDialog>

namespace Ui {
class sndwind;
}

class sndwind : public QDialog
{
    Q_OBJECT

public:
    explicit sndwind(QWidget *parent = nullptr);
    ~sndwind();

private:
    Ui::sndwind *ui;
};

#endif // SNDWIND_H

#ifndef REGISTRO_H
#define REGISTRO_H

#include <QWidget>

namespace Ui {
class REGISTRO;
}

class REGISTRO : public QWidget
{
    Q_OBJECT

public:
    explicit REGISTRO(QWidget *parent = nullptr);
    ~REGISTRO();

private:
    Ui::REGISTRO *ui;
};

#endif // REGISTRO_H

#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>

namespace Ui {
class REGISTER;
}

class REGISTER : public QWidget
{
    Q_OBJECT

public:
    explicit REGISTER(QWidget *parent = nullptr);
    ~REGISTER();

private:
    Ui::REGISTER *ui;
};

#endif // REGISTER_H

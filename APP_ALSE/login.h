#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class LOGIN;
}

class LOGIN : public QWidget
{
    Q_OBJECT

public:
    explicit LOGIN(QWidget *parent = nullptr);
    ~LOGIN();

private:
    Ui::LOGIN *ui;
};

#endif // LOGIN_H

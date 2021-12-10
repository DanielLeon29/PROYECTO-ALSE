#ifndef START_H
#define START_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class START; }
QT_END_NAMESPACE

class START : public QMainWindow
{
    Q_OBJECT

public:
    START(QWidget *parent = nullptr);
    ~START();

private:
    Ui::START *ui;
};
#endif // START_H

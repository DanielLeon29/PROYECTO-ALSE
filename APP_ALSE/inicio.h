#ifndef INICIO_H
#define INICIO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class INICIO; }
QT_END_NAMESPACE

class INICIO : public QMainWindow
{
    Q_OBJECT

public:
    INICIO(QWidget *parent = nullptr);
    ~INICIO();

private:
    Ui::INICIO *ui;
};
#endif // INICIO_H

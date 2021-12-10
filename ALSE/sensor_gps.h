#ifndef SENSOR_GPS_H
#define SENSOR_GPS_H

#include <QWidget>

namespace Ui {
class SENSOR_GPS;
}

class SENSOR_GPS : public QWidget
{
    Q_OBJECT

public:
    explicit SENSOR_GPS(QWidget *parent = nullptr);
    ~SENSOR_GPS();

private:
    Ui::SENSOR_GPS *ui;
};

#endif // SENSOR_GPS_H

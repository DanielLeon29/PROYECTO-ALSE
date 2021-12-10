#include "sensor_gps.h"
#include "ui_sensor_gps.h"

SENSOR_GPS::SENSOR_GPS(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SENSOR_GPS)
{
    ui->setupUi(this);
}

SENSOR_GPS::~SENSOR_GPS()
{
    delete ui;
}

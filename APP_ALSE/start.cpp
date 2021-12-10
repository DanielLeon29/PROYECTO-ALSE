#include "start.h"
#include "./ui_start.h"

START::START(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::START)
{
    ui->setupUi(this);
}

START::~START()
{
    delete ui;
}


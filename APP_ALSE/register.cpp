#include "register.h"
#include "ui_register.h"

REGISTER::REGISTER(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::REGISTER)
{
    ui->setupUi(this);
}

REGISTER::~REGISTER()
{
    delete ui;
}

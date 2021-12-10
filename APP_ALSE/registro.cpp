#include "registro.h"
#include "ui_registro.h"

REGISTRO::REGISTRO(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::REGISTRO)
{
    ui->setupUi(this);
}

REGISTRO::~REGISTRO()
{
    delete ui;
}

#include "inicio.h"
#include "./ui_inicio.h"

INICIO::INICIO(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::INICIO)
{
    ui->setupUi(this);
}

INICIO::~INICIO()
{
    delete ui;
}


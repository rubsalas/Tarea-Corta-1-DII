#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //ui->V1A->setText("V "+QString::number(fabrica->getListVehiculosFinalizados()->getHead()->getVehiculo()->getTipo()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


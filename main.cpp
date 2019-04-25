#include "fabricaf.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FabricaF fabrica;

    ///Ingreso de vehiculos
    fabrica.addVehiculo(1);
    fabrica.addVehiculo(2);
    fabrica.addVehiculo(3);
    fabrica.addVehiculo(4);
    fabrica.addVehiculo(5);
    fabrica.addVehiculo(6);
    fabrica.addVehiculo(1);
    fabrica.addVehiculo(2);
    fabrica.addVehiculo(3);
    fabrica.addVehiculo(4);

    fabrica.show();

    fabrica.initiateFabrica();

    return a.exec();
}

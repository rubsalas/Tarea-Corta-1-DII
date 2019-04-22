
#include <iostream>
#include <iostream>

#include "Vehiculo.h"
#include "Fabrica.h"

using namespace std;


/**
 * Main del Programa
 */
int main() {

    ///Instancia de un Vehiculo
    Vehiculo* vehiculo1 = new Vehiculo(1);
    ///Impresion de sus tiempos de los procesos
    vehiculo1->printTimes();

    Vehiculo* vehiculo2 = new Vehiculo(3);
    Vehiculo* vehiculo3 = new Vehiculo(4);
    Vehiculo* vehiculo4 = new Vehiculo(6);
    Vehiculo* vehiculo5 = new Vehiculo(2);

    vehiculo2->printTimes();
    vehiculo3->printTimes();

    Fabrica* fab;

    fab->linea_A(vehiculo1,vehiculo2,vehiculo3);
    fab->linea_B(vehiculo1,vehiculo2,vehiculo3);

    vehiculo1->printTimes();
    vehiculo2->printTimes();
    vehiculo3->printTimes();
    //fab->addVeh(2);
    //fab->addVeh(3);
    //fab->addVeh(4);
    //fab->addVeh(5);

    return 0;
}

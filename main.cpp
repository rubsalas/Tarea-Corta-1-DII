
#include <iostream>
#include <iostream>

#include "Vehiculo.h"

using namespace std;


/**
 * Main del Programa
 */
int main() {

    ///Instancia de un Vehiculo
    Vehiculo* vehiculo1 = new Vehiculo(1);
    ///Impresion de sus tiempos de los procesos
    vehiculo1->printTimes();


    return 0;
}

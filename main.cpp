
#include <iostream>
#include <iostream>

#include "Vehiculo.h"
#include "Fabrica.h"
#include "Proceso.h"

using namespace std;


/**
 * Main del Programa
 */
int main() {

    ///Instanciacion de la Fabrica
    Fabrica* fabrica = new Fabrica();


    ///Ingreso de vehiculos
    fabrica->addVehiculo(1);
    fabrica->addVehiculo(1);
    fabrica->addVehiculo(1);
    fabrica->addVehiculo(1);

    fabrica->addVehiculo(2);
    fabrica->addVehiculo(2);
    fabrica->addVehiculo(2);
    fabrica->addVehiculo(2);

    fabrica->addVehiculo(3);
    fabrica->addVehiculo(3);
    fabrica->addVehiculo(3);
    fabrica->addVehiculo(3);

    fabrica->addVehiculo(4);
    fabrica->addVehiculo(4);
    fabrica->addVehiculo(4);
    fabrica->addVehiculo(4);

    fabrica->addVehiculo(5);
    fabrica->addVehiculo(5);
    fabrica->addVehiculo(5);
    fabrica->addVehiculo(5);

    fabrica->addVehiculo(6);
    fabrica->addVehiculo(6);
    fabrica->addVehiculo(6);
    fabrica->addVehiculo(6);



    fabrica->initiateFabrica();


    return 0;
}

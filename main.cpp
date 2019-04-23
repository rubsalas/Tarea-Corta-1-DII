
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
    fabrica->addVehiculo(2);
    fabrica->addVehiculo(3);
    fabrica->addVehiculo(4);
    fabrica->addVehiculo(5);
    fabrica->addVehiculo(6);
    //         ... xn       //Se podria ingresar n cantidad de vehiculos
    //fabrica->addVehiculo(#);



    /*
    proc1 = Proceso(1,3,4,2,5,6);
    proc2 = Proceso(5,2,1,3,6,4);

    fab->addProcesoA(proc1);
    fab->addProcesoB(proc2);
    */





    //Se deberia correr la fabrica automaticamete despues de esta llamada
    fabrica->initiateFabrica();

    return 0;
}


#ifndef TAREA_CORTA_1_FABRICA_H
#define TAREA_CORTA_1_FABRICA_H


/**
 * Archivo h de Fabrica
 */

#include <stdio.h>
#include <unwind.h>
#include <cstdlib>
#include <zconf.h>
#include <iostream>
#include <stdlib.h>
#include "List.h"

using  namespace std;

class Fabrica {

private:
    List* listVehiculos;

public:
    Fabrica();
    void addVeh(int veh);

    //Iniciar proceso
    int initiateFab();

    //Procesos de la Fabrica
    int linea_A(Vehiculo *veh1, Vehiculo *veh2, Vehiculo *veh3);
    int linea_B(Vehiculo *veh1, Vehiculo *veh2, Vehiculo *veh3);
    int linea_C(Vehiculo *veh1, Vehiculo *veh2, Vehiculo *veh3);
    int linea_D(Vehiculo *veh1, Vehiculo *veh2, Vehiculo *veh3);
    int linea_E(Vehiculo *veh1, Vehiculo *veh2, Vehiculo *veh3);
    int linea_F(Vehiculo *veh1, Vehiculo *veh2, Vehiculo *veh3);
};


#endif //TAREA_CORTA_1_FABRICA_H

#include <iostream>
#include <stdlib.h>

#include "Fabrica.h"

using namespace std;
/**
 * Clase Fabrica
 * Representará la Fabrica de Vehiculos
 *
 * @since 08/04/19
 * @author Rubén Salas
 */


/**
 * Constructor de Fabrica
 */

Fabrica::Fabrica() {
    listVehiculos = new List();
}

int Fabrica::initiateFab() {
    int s=1;

    while(1){
        if (s==6){
            s=1;
            cout<<"Cambio de proceso"<<endl;
        }
        cout<<s<<endl;
        s++;
        sleep(1);
    }
}

void Fabrica::addVeh(int veh) {
    listVehiculos->newNode(veh);
}

int Fabrica::linea_A(Vehiculo *veh1, Vehiculo *veh2, Vehiculo *veh3) {
    veh1->modPA();
    veh2->modPA();
    veh3->modPA();
}

int Fabrica::linea_B(Vehiculo *veh1, Vehiculo *veh2, Vehiculo *veh3) {
    veh1->modPB();
    veh2->modPB();
    veh3->modPB();
}

int Fabrica::linea_C(Vehiculo *veh1, Vehiculo *veh2, Vehiculo *veh3) {
    veh1->modPC();
    veh2->modPC();
    veh3->modPC();
}

int Fabrica::linea_D(Vehiculo *veh1, Vehiculo *veh2, Vehiculo *veh3) {
    veh1->modPD();
    veh2->modPD();
    veh3->modPD();
}

int Fabrica::linea_E(Vehiculo *veh1, Vehiculo *veh2, Vehiculo *veh3) {
    veh1->modPE();
    veh2->modPE();
    veh3->modPE();
}

int Fabrica::linea_F(Vehiculo *veh1, Vehiculo *veh2, Vehiculo *veh3) {
    veh1->modPF();
    veh2->modPF();
    veh3->modPF();
}
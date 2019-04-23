#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#include "Fabrica.h"

using namespace std;
/**
 * Clase Fabrica
 * Representará la Fabrica de Vehiculos
 *
 * @since 08/04/19
 */


/**
 * Constructor de Fabrica
 */
Fabrica::Fabrica() {
    listVehiculosInicial = new List();
    listVehiculosCola = new List();
    listVehiculosFinalizados = new List();
}


/**
 *
 * @return
 */
List *Fabrica::getListVehiculosInicial() {
    return listVehiculosInicial;
}

void Fabrica::setListVehiculosInicial(List *listVehiculosInicial) {
    Fabrica::listVehiculosInicial = listVehiculosInicial;
}

/**
 *
 * @return
 */
List *Fabrica::getListVehiculosCola() {
    return listVehiculosCola;
}

void Fabrica::setListVehiculosCola(List *listVehiculosCola) {
    Fabrica::listVehiculosCola = listVehiculosCola;
}

/**
 *
 * @return
 */
List *Fabrica::getListVehiculosFinalizados() {
    return listVehiculosFinalizados;
}

void Fabrica::setListVehiculosFinalizados(List *listVehiculosFinalizados) {
    Fabrica::listVehiculosFinalizados = listVehiculosFinalizados;
}

/**
 *
 * @return
 */
Proceso *Fabrica::getProcesoA() {
    return procesoA;
}

/**
 *
 * @param procesoA
 */
void Fabrica::setProcesoA(Proceso* _procesoA) {
    procesoA = _procesoA;
}

/**
 *
 * @return
 */
Proceso *Fabrica::getProcesoB() {
    return procesoB;
}

/**
 *
 * @param _procesoB
 */
void Fabrica::setProcesoB(Proceso* _procesoB) {
    procesoB = _procesoB;
}

/**
 *
 * @return
 */
Proceso *Fabrica::getProcesoC() {
    return procesoC;
}

/**
 *
 * @param _procesoC
 */
void Fabrica::setProcesoC(Proceso* _procesoC) {
    procesoC = _procesoC;
}

/**
 *
 * @return
 */
Proceso *Fabrica::getProcesoD() {
    return procesoD;
}

/**
 *
 * @param _procesoD
 */
void Fabrica::setProcesoD(Proceso* _procesoD) {
    procesoD = _procesoD;
}

/**
 *
 * @return
 */
Proceso *Fabrica::getProcesoE() {
    return procesoE;
}

/**
 *
 * @param _procesoE
 */
void Fabrica::setProcesoE(Proceso* _procesoE) {
    procesoE = _procesoE;
}

/**
 *
 * @return
 */
Proceso *Fabrica::getProcesoF() {
    return procesoF;
}

/**
 *
 * @param _procesoF
 */
void Fabrica::setProcesoF(Proceso* _procesoF) {
    procesoF = _procesoF;
}


/**
 * Inicio de la Fabrica.
 */
void Fabrica::initiateFabrica() {
    int s=1;

    while(1){
        if (s==6){
            s=1;
            cout<<"Cambio de proceso"<<endl;
        }
        cout<<s<<endl;
        s++;
        sleep(1);

        ///Poner terminacion cuando todos los vehiculos esten listos

    }
}

/**
 * Ingresa un vehiculo a la lista de Vehiuclos de la Fabrica
 * @param vehiculo - int del numero de vehiculo
 */
void Fabrica::addVehiculo(int vehiculo) {
    listVehiculosInicial->newNode(vehiculo);
}
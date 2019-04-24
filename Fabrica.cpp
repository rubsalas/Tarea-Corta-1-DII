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
    listVehiculosInicial = new List("Inicial");
    listVehiculosCola = new List("Cola");
    listVehiculosFinalizados = new List("Terminados");

    procesoA = new Proceso("A");
    procesoB = new Proceso("B");
    procesoC = new Proceso("C");
    procesoD = new Proceso("D");
    procesoE = new Proceso("E");
    procesoF = new Proceso("F");
}


///Metodos


/**
 * Inicio de la Fabrica.
 */
void Fabrica::initiateFabrica() {

    int timer = 1;
    bool finish = false;

    procesoInicial();

    while(!finish) {

        if ( (timer % 5) == 0 ) {
            cout << "Atender de Cola" << endl;



        }
        if (listVehiculosInicial->getLen() == 0){
            //finish=true;
        }

        cout << "\n\n" << timer << endl;
        timer++;
        sleep(1);

        procesoA->procesar();
        procesoB->procesar();
        procesoC->procesar();
        procesoD->procesar();
        procesoE->procesar();
        procesoF->procesar();


    }
}

/**
 * Ingresa un vehiculo a la lista de Vehiuclos de la Fabrica
 * @param vehiculo - int del numero de vehiculo
 */
void Fabrica::addVehiculo(int vehiculo) {
    listVehiculosInicial->newNode(vehiculo);
}

void Fabrica::setInProceso(Vehiculo* vehiculoPorAgendar) {

    ///Se obtiene el proceso respectivo al orden del vehiculo
    string procesoParaAgendar = vehiculoPorAgendar->getProcesoActual();


    cout << "Se agendará el vehiculo tipo " << vehiculoPorAgendar->getTipo() << " al proceso tipo " << procesoParaAgendar << endl;

    Vehiculo* vehiculoCola;

    ///Se verifica a cual proceso se agendará el vehiculo
    if (procesoParaAgendar == "A"){
        vehiculoCola = procesoA->agendar(vehiculoPorAgendar);
        procesoA->printAgenda();
    }
    else if (procesoParaAgendar == "B"){
        vehiculoCola = procesoB->agendar(vehiculoPorAgendar);
        procesoB->printAgenda();
    }
    else if (procesoParaAgendar == "C"){
        vehiculoCola = procesoC->agendar(vehiculoPorAgendar);
        procesoC->printAgenda();
    }
    else if (procesoParaAgendar == "D"){
        vehiculoCola = procesoD->agendar(vehiculoPorAgendar);
        procesoD->printAgenda();
    }
    else if (procesoParaAgendar == "E"){
        vehiculoCola = procesoE->agendar(vehiculoPorAgendar);
        procesoE->printAgenda();
    }
    else if (procesoParaAgendar == "F"){
        vehiculoCola = procesoF->agendar(vehiculoPorAgendar);
        procesoF->printAgenda();
    }
    else {
        cout << "Proceso no se encuentra definido: " << procesoParaAgendar << endl;
    }

    if (vehiculoCola != nullptr) {
        listVehiculosCola->newNode(vehiculoCola->getTipo());
        cout << "Vehiculo tipo " << vehiculoCola->getTipo() << " ha sido agregado a la cola." << endl;
    }

}

void Fabrica::procesoInicial() {

    Node* temp = listVehiculosInicial->getHead();

    while (temp != nullptr) {
        Node* aux = temp->getNext();
        setInProceso( temp->getVehiculo() );

        ///Se borra el vehiculo de esta lista
        listVehiculosInicial->deleteNode(temp->getVehiculo()->getTipo());

        temp = aux;
    }

    cout << "Procesos al Iniciar" << endl;
    procesoA->printAgenda();
    procesoB->printAgenda();
    procesoC->printAgenda();
    procesoD->printAgenda();
    procesoE->printAgenda();
    procesoF->printAgenda();
    
}


///Getters & Setters


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


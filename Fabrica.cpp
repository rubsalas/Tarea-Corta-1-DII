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
 * Ingresa un vehiculo a la lista de Vehiuclos de la Fabrica
 * @param vehiculo - int del numero de vehiculo
 */
void Fabrica::addVehiculo(int vehiculo) {
    listVehiculosInicial->newNode(vehiculo);
}


/**
 * Inicio de la Fabrica.
 */
void Fabrica::initiateFabrica() {

    int timer = 1;
    bool finish = false;
    int cantTotalVehiculos = listVehiculosInicial->getLen();

    procesoInicial();

    while(!finish) {

        if ( (timer % 5) == 0 ) {
            cout << "Atender Cola" << endl;

            Node* temp = listVehiculosCola->getHead();

            if (temp != nullptr) {
                setInProceso(temp->getVehiculo());
                listVehiculosCola->deleteNode(temp->getData());
            }


        }
        ///Terminación de la Fábrica
        if (listVehiculosFinalizados->getLen() == cantTotalVehiculos){
            cout << "\n\nFabrica Finalizada\n\n" << endl;
            finish=true;
        }


        cout << "\n\n" << timer << endl;
        timer++;
        sleep(1);


        List* listaA = procesoA->procesar();
        if (listaA != nullptr) {
            Node* temp = listaA->getHead();
            while (temp != nullptr) {
                setInProceso(temp->getVehiculo());
                temp = temp->getNext();
            }
        }

        List* listaB = procesoB->procesar();
        if (listaB != nullptr) {
            Node* temp = listaB->getHead();
            while (temp != nullptr) {
                setInProceso(temp->getVehiculo());
                temp = temp->getNext();
            }
        }

        List* listaC = procesoC->procesar();
        if (listaC != nullptr) {
            Node* temp = listaC->getHead();
            while (temp != nullptr) {
                setInProceso(temp->getVehiculo());
                temp = temp->getNext();
            }
        }

        List* listaD = procesoD->procesar();
        if (listaD != nullptr) {
            Node* temp = listaD->getHead();
            while (temp != nullptr) {
                setInProceso(temp->getVehiculo());
                temp = temp->getNext();
            }
        }

        List* listaE = procesoE->procesar();
        if (listaE != nullptr) {
            Node* temp = listaE->getHead();
            while (temp != nullptr) {
                setInProceso(temp->getVehiculo());
                temp = temp->getNext();
            }
        }

        List* listaF = procesoF->procesar();
        if (listaF != nullptr) {
            Node* temp = listaF->getHead();
            while (temp != nullptr) {
                setInProceso(temp->getVehiculo());
                temp = temp->getNext();
            }
        }

        cout << "\n";
        listVehiculosCola->printList();
        getListVehiculosFinalizados()->printList();

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

    cout << "\nProcesos al Iniciar" << endl;
    procesoA->printAgenda();
    procesoB->printAgenda();
    procesoC->printAgenda();
    procesoD->printAgenda();
    procesoE->printAgenda();
    procesoF->printAgenda();

    cout << "\nCola al Iniciar" << endl;
    listVehiculosCola->printList();

}


void Fabrica::setInProceso(Vehiculo* vehiculoPorAgendar) {


    int procesosFaltantes = vehiculoPorAgendar->getProcesosFaltantes();

    if (procesosFaltantes > 0) {
        ///Se obtiene el proceso respectivo al orden del vehiculo
        string procesoParaAgendar = vehiculoPorAgendar->getProcesoActual();


        //cout << "Se agendará el vehiculo tipo " << vehiculoPorAgendar->getTipo() << " al proceso tipo " << procesoParaAgendar << endl;

        Vehiculo* vehiculoCola;

        ///Se verifica a cual proceso se agendará el vehiculo
        if (procesoParaAgendar == "A"){
            vehiculoCola = procesoA->agendar(vehiculoPorAgendar);
            //procesoA->printAgenda();
        }
        else if (procesoParaAgendar == "B"){
            vehiculoCola = procesoB->agendar(vehiculoPorAgendar);
            //procesoB->printAgenda();
        }
        else if (procesoParaAgendar == "C"){
            vehiculoCola = procesoC->agendar(vehiculoPorAgendar);
            //procesoC->printAgenda();
        }
        else if (procesoParaAgendar == "D"){
            vehiculoCola = procesoD->agendar(vehiculoPorAgendar);
            //procesoD->printAgenda();
        }
        else if (procesoParaAgendar == "E"){
            vehiculoCola = procesoE->agendar(vehiculoPorAgendar);
            //procesoE->printAgenda();
        }
        else if (procesoParaAgendar == "F"){
            vehiculoCola = procesoF->agendar(vehiculoPorAgendar);
            //procesoF->printAgenda();
        }
        else {
            cout << "Proceso no se encuentra definido: " << procesoParaAgendar << endl;
        }

        if (vehiculoCola != nullptr) {
            listVehiculosCola->newNode(vehiculoCola->getTipo());
            //cout << "Vehiculo tipo " << vehiculoCola->getTipo() << " ha sido agregado a la cola." << endl;
        }

    }
    else {
        ///Guarda el nombre de la lista
        string tempName = listVehiculosFinalizados->getName();
        ///Se cambia el nombre para que no imprima la lista
        listVehiculosFinalizados->setName("Vehiculos por Cambiar de Proceso");

        ///Agrega el vehiculo a la lista de Finalizados
        listVehiculosFinalizados->newNode(vehiculoPorAgendar);

        ///Retorna a su nombre inicial
        listVehiculosFinalizados->setName(tempName);

    }

}


///Getters & Setters


/**
 *
 * @return
 */
List *Fabrica::getListVehiculosInicial() {
    return listVehiculosInicial;
}

/**
 *
 * @param listVehiculosInicial
 */
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

/**
 *
 * @param listVehiculosCola
 */
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

/**
 *
 * @param listVehiculosFinalizados
 */
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


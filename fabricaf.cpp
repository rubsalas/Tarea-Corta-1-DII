#include "fabricaf.h"
#include "ui_fabricaf.h"

#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#include "threadprocesos.h"

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

FabricaF::FabricaF(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FabricaF)
{
    ui->setupUi(this);

    listVehiculosInicial = new List("Inicial");
    colaVehiculos = new Cola();
    listVehiculosFinalizados = new List("Terminados");

    procesoA = new Proceso("A");
    procesoB = new Proceso("B");
    procesoC = new Proceso("C");
    procesoD = new Proceso("D");
    procesoE = new Proceso("E");
    procesoF = new Proceso("F");
}

FabricaF::~FabricaF()
{
    delete ui;
}

///Metodos


/**
 * Ingresa un vehiculo a la lista de Vehiuclos de la Fabrica
 * @param vehiculo - int del numero de vehiculo
 */
void FabricaF::addVehiculo(int vehiculo) {
    listVehiculosInicial->newNode(vehiculo);
}


/**
 * Inicio de la Fabrica.
 */
void FabricaF::initiateFabrica() {


    int cantTotalVehiculos = listVehiculosInicial->getLen();

    procesoInicial();

    bThread = new ThreadProcesos(this);

    bThread->start(QThread::HighestPriority);

    bThread->exit();

    int timer = 1;
    int minutos = 0;

    connect(bThread, &ThreadProcesos::boolFinish, [&](bool F){

        ui->time->setText((QString::number(minutos))+":"+(QString::number(timer)));

        if (timer==60){
            timer=0;
            minutos++;
        }

        if ( (timer % 5) == 0 ) {
            cout << "Atender Cola" << endl;

            Node* temp = colaVehiculos->getFront();

            if (temp != nullptr) {

                setInProceso(temp->getVehiculo());
                colaVehiculos->remove();

            }


        }
        ///Terminación de la Fábrica
        if (listVehiculosFinalizados->getLen() == cantTotalVehiculos){
            cout << "\n\nFabrica Finalizada\n\n" << endl;
            F=true;
        }


        cout << "\n\n" << timer << endl;
        timer++;
        sleep(1);


        List* listaA = procesoA->procesar();
        if (listaA != 0) {
            Node* temp = listaA->getHead();
            while (temp != 0) {
                setInProceso(temp->getVehiculo());
                temp = temp->getNext();
            }
        }

        List* listaB = procesoB->procesar();
        if (listaB != 0) {
            Node* temp = listaB->getHead();
            while (temp != 0) {
                setInProceso(temp->getVehiculo());
                temp = temp->getNext();
            }
        }

        List* listaC = procesoC->procesar();
        if (listaC != 0) {
            Node* temp = listaC->getHead();
            while (temp != 0) {
                setInProceso(temp->getVehiculo());
                temp = temp->getNext();
            }
        }

        List* listaD = procesoD->procesar();
        if (listaD != 0) {
            Node* temp = listaD->getHead();
            while (temp != 0) {
                setInProceso(temp->getVehiculo());
                temp = temp->getNext();
            }
        }

        List* listaE = procesoE->procesar();
        if (listaE != 0) {
            Node* temp = listaE->getHead();
            while (temp != 0) {
                setInProceso(temp->getVehiculo());
                temp = temp->getNext();
            }
        }

        List* listaF = procesoF->procesar();
        if (listaF != 0) {
            Node* temp = listaF->getHead();
            while (temp != 0) {
                setInProceso(temp->getVehiculo());
                temp = temp->getNext();
            }
        }

        cout << "\n";
        colaVehiculos->printCola();
        getListVehiculosFinalizados()->printList();

        ///Modifica los labels del los vehiculos de los procesos con sus tiempos respectivos
       /* ui->V1A->setText("V "+QString::number(procesoA->getVehiculo1()->getTipo()));
        ui->V2A->setText("V "+QString::number(procesoA->getVehiculo2()->getTipo()));
        ui->V3A->setText("V "+QString::number(procesoA->getVehiculo3()->getTipo()));
        ui->T1A->setText("V "+QString::number(procesoA->getVehiculo1()->getTiempoPA()));
        ui->T2A->setText("V "+QString::number(procesoA->getVehiculo2()->getTiempoPA()));
        ui->T3A->setText("V "+QString::number(procesoA->getVehiculo3()->getTiempoPA()));

        ui->V1B->setText("V "+QString::number(procesoB->getVehiculo1()->getTipo()));
        ui->V2B->setText("V "+QString::number(procesoB->getVehiculo2()->getTipo()));
        ui->V3B->setText("V "+QString::number(procesoB->getVehiculo3()->getTipo()));
        ui->T1B->setText("V "+QString::number(procesoB->getVehiculo1()->getTiempoPB()));
        ui->T2B->setText("V "+QString::number(procesoB->getVehiculo2()->getTiempoPB()));
        ui->T3B->setText("V "+QString::number(procesoB->getVehiculo3()->getTiempoPB()));

        ui->V1C->setText("V "+QString::number(procesoC->getVehiculo1()->getTipo()));
        ui->V2C->setText("V "+QString::number(procesoC->getVehiculo2()->getTipo()));
        ui->V3C->setText("V "+QString::number(procesoC->getVehiculo3()->getTipo()));
        ui->T1C->setText("V "+QString::number(procesoC->getVehiculo1()->getTiempoPC()));
        ui->T2C->setText("V "+QString::number(procesoC->getVehiculo2()->getTiempoPC()));
        ui->T3C->setText("V "+QString::number(procesoC->getVehiculo3()->getTiempoPC()));

        ui->V1D->setText("V "+QString::number(procesoD->getVehiculo1()->getTipo()));
        ui->V2D->setText("V "+QString::number(procesoD->getVehiculo2()->getTipo()));
        ui->V3D->setText("V "+QString::number(procesoD->getVehiculo3()->getTipo()));
        ui->T1D->setText("V "+QString::number(procesoD->getVehiculo1()->getTiempoPD()));
        ui->T2D->setText("V "+QString::number(procesoD->getVehiculo2()->getTiempoPD()));
        ui->T3D->setText("V "+QString::number(procesoD->getVehiculo3()->getTiempoPD()));

        ui->V1E->setText("V "+QString::number(procesoE->getVehiculo1()->getTipo()));
        ui->V2E->setText("V "+QString::number(procesoE->getVehiculo2()->getTipo()));
        ui->V3E->setText("V "+QString::number(procesoE->getVehiculo3()->getTipo()));
        ui->T1E->setText("V "+QString::number(procesoE->getVehiculo1()->getTiempoPE()));
        ui->T2E->setText("V "+QString::number(procesoE->getVehiculo2()->getTiempoPE()));
        ui->T3E->setText("V "+QString::number(procesoE->getVehiculo3()->getTiempoPE()));

        ui->V1F->setText("V "+QString::number(procesoF->getVehiculo1()->getTipo()));
        ui->V2F->setText("V "+QString::number(procesoF->getVehiculo2()->getTipo()));
        ui->V3F->setText("V "+QString::number(procesoF->getVehiculo3()->getTipo()));
        ui->T1F->setText("V "+QString::number(procesoF->getVehiculo1()->getTiempoPF()));
        ui->T2F->setText("V "+QString::number(procesoF->getVehiculo2()->getTiempoPF()));
        ui->T3F->setText("V "+QString::number(procesoF->getVehiculo3()->getTiempoPF()));
*/
    });

    bThread->exit();

}

void FabricaF::procesoInicial() {

    Node* temp = listVehiculosInicial->getHead();

    while (temp != 0) {

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
    colaVehiculos->printCola();

}


void FabricaF::setInProceso(Vehiculo* vehiculoPorAgendar) {


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

        if (vehiculoCola != 0) {
            colaVehiculos->add(vehiculoCola);
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
List *FabricaF::getListVehiculosInicial() {
    return listVehiculosInicial;
}

/**
 *
 * @param listVehiculosInicial
 */
void FabricaF::setListVehiculosInicial(List *listVehiculosInicial) {
    FabricaF::listVehiculosInicial = listVehiculosInicial;
}

/**
 *
 * @return
 */
Cola* FabricaF::getColaVehiculos() {
    return colaVehiculos;
}

/**
 *
 * @param listVehiculosCola
 */
void FabricaF::setColaVehiculos(Cola* _colaVehiculos) {
    FabricaF::colaVehiculos = _colaVehiculos;
}

/**
 *
 * @return
 */
List *FabricaF::getListVehiculosFinalizados() {
    return listVehiculosFinalizados;
}

/**
 *
 * @param listVehiculosFinalizados
 */
void FabricaF::setListVehiculosFinalizados(List *listVehiculosFinalizados) {
    FabricaF::listVehiculosFinalizados = listVehiculosFinalizados;
}

/**
 *
 * @return
 */
Proceso *FabricaF::getProcesoA() {
    return procesoA;
}

/**
 *
 * @param procesoA
 */
void FabricaF::setProcesoA(Proceso* _procesoA) {
    procesoA = _procesoA;
}

/**
 *
 * @return
 */
Proceso *FabricaF::getProcesoB() {
    return procesoB;
}

/**
 *
 * @param _procesoB
 */
void FabricaF::setProcesoB(Proceso* _procesoB) {
    procesoB = _procesoB;
}

/**
 *
 * @return
 */
Proceso *FabricaF::getProcesoC() {
    return procesoC;
}

/**
 *
 * @param _procesoC
 */
void FabricaF::setProcesoC(Proceso* _procesoC) {
    procesoC = _procesoC;
}

/**
 *
 * @return
 */
Proceso *FabricaF::getProcesoD() {
    return procesoD;
}

/**
 *
 * @param _procesoD
 */
void FabricaF::setProcesoD(Proceso* _procesoD) {
    procesoD = _procesoD;
}

/**
 *
 * @return
 */
Proceso *FabricaF::getProcesoE() {
    return procesoE;
}

/**
 *
 * @param _procesoE
 */
void FabricaF::setProcesoE(Proceso* _procesoE) {
    procesoE = _procesoE;
}

/**
 *
 * @return
 */
Proceso *FabricaF::getProcesoF() {
    return procesoF;
}

/**
 *
 * @param _procesoF
 */
void FabricaF::setProcesoF(Proceso* _procesoF) {
    procesoF = _procesoF;
}



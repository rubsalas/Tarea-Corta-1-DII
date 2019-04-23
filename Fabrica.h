
#ifndef TAREA_CORTA_1_FABRICA_H
#define TAREA_CORTA_1_FABRICA_H


#include <stdio.h>
#include <unwind.h>
#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include "List.h"
#include "Vehiculo.h"
#include "Node.h"
#include "Proceso.h"

using  namespace std;


/**
 * Header de Fabrica
 */


class Fabrica {

private:
    List* listVehiculosInicial;
    List* listVehiculosCola;
    List* listVehiculosFinalizados;
    Proceso* procesoA;
    Proceso* procesoB;
    Proceso* procesoC;
    Proceso* procesoD;
    Proceso* procesoE;
    Proceso* procesoF;

public:
    ///Constructor
    Fabrica();

    ///Getters y Setters
    List *getListVehiculosInicial();
    void setListVehiculosInicial(List* _listVehiculosInicial);
    List *getListVehiculosCola();
    void setListVehiculosCola(List* _listVehiculosCola);
    List *getListVehiculosFinalizados();
    void setListVehiculosFinalizados(List* _listVehiculosFinalizados);
    Proceso *getProcesoA();
    void setProcesoA(Proceso* _procesoA);
    Proceso *getProcesoB();
    void setProcesoB(Proceso* _procesoB);
    Proceso *getProcesoC();
    void setProcesoC(Proceso* _procesoC);
    Proceso *getProcesoD();
    void setProcesoD(Proceso* _procesoD);
    Proceso *getProcesoE();
    void setProcesoE(Proceso* _procesoE);
    Proceso *getProcesoF();
    void setProcesoF(Proceso* _procesoF);

    ///Metodos
    void addVehiculo(int vehiculo);
    void initiateFabrica();
    
};


#endif //TAREA_CORTA_1_FABRICA_H

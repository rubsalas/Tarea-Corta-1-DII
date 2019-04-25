#ifndef FABRICAF_H
#define FABRICAF_H

#include <QMainWindow>

#include <QString>

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

namespace Ui {
class FabricaF;
}

class ThreadProcesos;

class FabricaF : public QMainWindow
{
    Q_OBJECT

public:
    explicit FabricaF(QWidget *parent = 0);
    ~FabricaF();

    ///Metodos
    void addVehiculo(int vehiculo);
    void initiateFabrica();
    void setInProceso(Vehiculo* vehiculoPorAgendar);
    void procesoInicial();

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


private:
    Ui::FabricaF *ui;

    ThreadProcesos *bThread;

    List* listVehiculosInicial;
    List* listVehiculosCola;
    List* listVehiculosFinalizados;
    Proceso* procesoA;
    Proceso* procesoB;
    Proceso* procesoC;
    Proceso* procesoD;
    Proceso* procesoE;
    Proceso* procesoF;

};

#endif // FABRICAF_H

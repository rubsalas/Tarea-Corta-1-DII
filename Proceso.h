
#ifndef TAREA_CORTA_1_PROCESO_H
#define TAREA_CORTA_1_PROCESO_H


#include "Vehiculo.h"
#include "List.h"

class Proceso {

private:
    string tipo;
    bool full;
    Vehiculo* vehiculo1;
    Vehiculo* vehiculo2;
    Vehiculo* vehiculo3;
    Vehiculo* last;

public:
    ///Constructor
    Proceso(string tipo);

    ///Metodos
    Vehiculo* agendar(Vehiculo* vehiculo);
    void procesar();
    void printAgenda();

    ///Getters & Setters
    string getTipo();
    void setTipo(string _tipo);
    bool isFull();
    void setFull(bool _full);
    Vehiculo* getVehiculo1();
    void setVehiculo1(Vehiculo* _vehiculo1);
    Vehiculo* getVehiculo2();
    void setVehiculo2(Vehiculo* _vehiculo2);
    Vehiculo* getVehiculo3();
    void setVehiculo3(Vehiculo* _vehiculo3);
    Vehiculo* getLast();
    void setLast(Vehiculo* _last);


};


#endif //TAREA_CORTA_1_PROCESO_H

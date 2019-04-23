
#ifndef TAREA_CORTA_1_PROCESO_H
#define TAREA_CORTA_1_PROCESO_H


#include "Vehiculo.h"
#include "List.h"

class Proceso {

private:
    string tipo;
    Vehiculo* vehiculo1;
    Vehiculo* vehiculo2;
    Vehiculo* vehiculo3;

public:
    ///Constructor
    Proceso(string tipo);

    ///Getters y Setters
    string getTipo();
    void setTipo(string _tipo);
    //Vehiculo* get

    ///Agenda
    int agenda(Vehiculo* veh);

};


#endif //TAREA_CORTA_1_PROCESO_H

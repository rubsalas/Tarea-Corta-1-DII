
#ifndef TAREA_CORTA_1_NODE_H
#define TAREA_CORTA_1_NODE_H


#include <stdlib.h>
#include "Vehiculo.h"


/**
 * Header de Node.
 */


class Node {

private:
    ///Guarda el Vehiculo
    Vehiculo* vehiculo;
    ///Dato que guardara el nodo
    int data;
    ///Referencia al nodo que esta siguiente a este
    Node* next;

public:
    Node(int _data);
    int getData();
    void setData(int _data);
    Node* getNext();
    void setNext(Node* _next);
    Vehiculo* getVehiculo();
    void setVehiculo(Vehiculo* _vehiculo);
};


#endif //TAREA_CORTA_1_NODE_H

//
// Created by edgargonza on 16/04/19.
//

#ifndef TAREA_CORTA_1_NODE_H
#define TAREA_CORTA_1_NODE_H


#include <stdlib.h>
#include "Vehiculo.h"

/**
 * Header de Node.
 *
 * @since 07/03/19.
 */
class Node {

private:
    ///Guarda el Vehiculo
    //Vehiculo* veh;
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
};


#endif //TAREA_CORTA_1_NODE_H

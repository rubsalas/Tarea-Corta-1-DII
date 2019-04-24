
#include <iostream>
#include <stdlib.h>

#include "Node.h"

using namespace std;


/**
 * Representa a un Nodo.
 *
 * @since 16/04/19.
 */


/**
 * Constructor de Node.
 */
Node::Node(int _data) {
    vehiculo = new Vehiculo(_data);
    data = _data;
    next = nullptr;
}


///Getters & Setters


/**
 * Getter del dato de Node.
 * @returns data - dato guardado en nodo
 */
int Node::getData(){
    return data;
}

/**
 * Setter de de Node.
 * @param _data - numero
 */
void Node::setData(int _data){
    data = _data;
    //veh->setTipo(_data);
}

/**
 * Getter de de Node.
 * @returns next - referencia al siguiente nodo
 */
Node* Node::getNext(){
    return next;
}

/**
 * Setter de de Node.
 * @param _next - Node
 */
void Node::setNext(Node* _next){
    next = _next;
}

/**
 * Getter del Vehiculo
 * @returns vehiculo - Vehiculo
 */
Vehiculo* Node::getVehiculo() {
    return vehiculo;
}

/**
 * Setter del vehiculo
 * @param _vehiculo - Vehiculo
 */
void Node::setVehiculo(Vehiculo* _vehiculo){
    vehiculo = _vehiculo;
}

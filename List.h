
#ifndef TAREA_CORTA_1_LIST_H
#define TAREA_CORTA_1_LIST_H

#include <stdlib.h>

#include "Node.h"

/**
 * Header de List.
 */
class List {

private:
    ///Primer node de List
    Node* head;
    ///Cantidad de nodos en List
    int len;
    ///Nombre de List
    string name;

public:
    ///Constructor
    List(string _name);

    ///Metodos
    void newNode(int data);
    void newNode(Vehiculo* vehiculo);
    void deleteNode(int data);
    void printList();

    ///Getters y Setters
    Node* getHead();
    void setHead(Node* _head);
    int getLen();
    void setLen(int _len);
    string getName();
    void setName(string _name);

};

#endif //TAREA_CORTA_1_LIST_H

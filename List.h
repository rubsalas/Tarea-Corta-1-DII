
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

public:
    ///Constructor
    List();

    ///Getters y Setters
    Node* getHead();
    void setHead(Node* _head);
    int getLen();
    void setLen(int _len);

    ///Metodos
    void newNode(int data);
    void deleteNode(int data);
    void printList();

};

#endif //TAREA_CORTA_1_LIST_H

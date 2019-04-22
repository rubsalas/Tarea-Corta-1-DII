//
// Created by edgargonza on 16/04/19.
//

#ifndef TAREA_CORTA_1_LIST_H
#define TAREA_CORTA_1_LIST_H

#include <stdlib.h>

#include "Node.h"
#include "Collector.h"

/**
 * Header de List.
 *
 * @since 07/03/19.
 */
class List {

private:
    ///Primer node de List
    Node* head;
    ///Cantidad de nodos en List
    int len;
    ///Collector unico del programa
    Collector* collector;

public:
    List();
    Node* getHead();
    void setHead(Node* _head);
    int getLen();
    void setLen(int _len);
    void newNode(int data);
    void deleteNode(int data);
    void printList();

};

#endif //TAREA_CORTA_1_LIST_H

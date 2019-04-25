#ifndef COLA_H
#define COLA_H


#include "Node.h"


/**
 * Header de Cola
 */


class Cola {

private:
    Node* front;
    Node* rear;
    int len;

public:

    ///Constructor
    Cola();

    ///Metodos
    void add(Vehiculo* _vehiculo);
    void remove();
    void printCola();

    ///Getters & Setters
    Node* getFront();
    void setFront(Node* _front);
    Node* getRear();
    void setRear(Node* _rear);
    int getLen();
    void setLen(int _len);


};

#endif // COLA_H

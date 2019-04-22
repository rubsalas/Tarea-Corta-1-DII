//
// Created by edgargonza on 16/04/19.
//

#include "Collector.h"
#include <iostream>

using namespace std;

/**
 * Representa al Collector.
 *
 * @since 07/03/19.
 */


/**
 * Constructor de Collector.
 */
Collector::Collector(){
    head = nullptr;
    len = 0;
}

Collector* Collector::instance=0; //Define el instance como NULL

/**
 * Singleton para obtener siempre la misma instancia de Collector.
 * @returns instance - la unica instancia del Collector
 */
Collector* Collector::getInstance(){
    if (instance== nullptr){
        instance = new Collector();
    }
    return instance;
}

/**
 * Getter del head de Collector.
 * @returns head - primer Node de Collector
 */
Node* Collector::getHead(){
    return head;
}

/**
 * Setter del head de Collector.
 * @param _head - Node
 */
void Collector::setHead(Node* _head){
    head = _head;
}

/**
 * Getter del length de Collector.
 * @returns len - cantidad de Nodos en Collector
 */
int Collector::getLen() {
    return len;
}

/**
 * Setter del length de Collector.
 * @param _len - cantidad
 */
void Collector::setLen(int _len) {
    len = _len;
}

/**
 * Agrega un Node al Collector.
 * @param node - Nodo
 */
void Collector::addNode(Node* node){
    if (head == nullptr) { ///
        head = node;
    } else {
        Node *temp = head;
        head = node;
        node->setNext(temp);
    }

    len+=1;

}

/**
 * Imprime los nodos en el Collector.
 */
void Collector::printList(){
    cout << "Collector: " << endl;
    cout << "len: " << len << endl;
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->getData()  << ", ";
        temp = temp->getNext();
    }
    cout << "\n" << endl;
}
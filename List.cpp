//
// Created by edgargonza on 16/04/19.
//

#include "List.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


/**
 * Representa a una Lista.
 *
 * @since 07/03/19.
 */

/**
 * Constructor de List.
 */
List::List() {
    head = nullptr;
    collector = Collector::getInstance();
    len = 0;
}

Node* List::getHead() {
    return head;
}

/**
 * Setter del head de List.
 * @param _head - Node
 */
void List::setHead(Node* _head) {
    head = _head;
}

/**
 * Getter del length de List.
 * @returns len - Cantidad de nodos en List
 */
int List::getLen() {
    return len;
}

/**
 * Setter del length de List.
 * @param _len - cantidad
 */
void List::setLen(int _len) {
    len = _len;
}

/**
 * Crea un nuevo Node o toma uno del Collector para ingresarlo en List.
 * @param data - numero para el Node
 */
void List::newNode(int data){

    int lenCollector = collector->getLen(); //len collector

    Node* nNode;

    if (lenCollector != 0) {
        nNode = collector->getHead();
        collector->setHead(nNode->getNext());
        nNode->setData(data);
        nNode->setNext(nullptr);
        collector->setLen(collector->getLen()-1);
    } else {
        nNode = new Node(data);
    }

    if (head == nullptr) {
        head = nNode;
    } else {
        Node* temp = head;
        head = nNode;
        nNode->setNext(temp);
    }

    len+=1;

    cout << "\n" << endl;
    printList();
    collector->printList();


}

/**
 * Elimina un Node de List y lo envia al Collector.
 * @param data
 */
void List::deleteNode(int data){
    Node* delNode = nullptr;
    Node* temp = head;
    Node* aux = head;
    while (aux != nullptr && aux->getData() != data) {
        temp = aux;
        aux = aux->getNext();
    }
    if (aux == nullptr) {
        cout << data << " no esta en la lista\n" << endl;
    } else {
        delNode = aux;
        if (head == delNode) {
            setHead(head->getNext());
        } else {
            temp->setNext(aux->getNext());
        }
    }

    delNode->setNext(nullptr);
    cout << "El nodo " << data << " fue enviado al Collector." << endl;
    collector->addNode(delNode);

    len-=1;

    cout << "\n" << endl;
    printList();
    collector->printList();

}

/**
 * Imprime los nodos en List.
 */
void List::printList(){
    cout << "List: " << endl;
    cout << "len: " << len << endl;
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->getData()  << ", ";
        temp = temp->getNext();
    }
    cout << "\n" << endl;
}

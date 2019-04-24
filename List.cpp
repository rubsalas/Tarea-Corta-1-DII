
#include "List.h"
#include <iostream>
#include <stdlib.h>

using namespace std;


/**
 * Representa a una Lista.
 *
 * @since 16/04/19.
 */


/**
 * Constructor de List.
 */
List::List(string _name) {
    head = nullptr;
    len = 0;
    name = _name;
}


///Metodos


/**
 * Crea un nuevo Node o toma uno del Collector para ingresarlo en List.
 * @param data - numero para el Node
 */
void List::newNode(int data){

    Node* nNode = new Node(data);

    if (head == nullptr) {
        head = nNode;
    } else {
        Node* temp = head;
        head = nNode;
        nNode->setNext(temp);
    }

    len+=1;

    //cout << "\n" << endl;
    //printList();

}

/**
 * Crea un nuevo Node o toma uno del Collector para ingresarlo en List.
 * @param data - numero para el Node
 */
void List::newNode(Vehiculo* vehiculo){

    Node* nNode = new Node(vehiculo->getTipo());
    nNode->setVehiculo(vehiculo);

    if (head == nullptr) {
        head = nNode;
    } else {
        Node* temp = head;
        head = nNode;
        nNode->setNext(temp);
    }

    len+=1;


    if (name != "Vehiculos por Cambiar de Proceso") {
        cout << "\n" << endl;
        printList();
    }


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

    len-=1;

    //cout << "\n" << endl;
    //printList();

}

/**
 * Imprime los nodos en List.
 */
void List::printList(){
    cout << "List: " << name << endl;
    cout << "len: " << len << "     ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->getData()  << ", ";
        temp = temp->getNext();
    }
    cout << "\n" << endl;
}


///Getters & Setters


/**
 * Getter del head de List.
 * @return
 */
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
 * Getter del nombre de List.
 * @return name
 */
string List::getName() {
    return name;
}

/**
 * Setter del nombre de List.
 * @param _name - string
 */
void List::setName(string _name) {
    name = _name;
}

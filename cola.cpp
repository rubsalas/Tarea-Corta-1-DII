
#include "cola.h"


/**
 * Representa a una Cola.
 *
 * @since 24/04/19.
 */


/**
 * Constructor de Cola.
 */
Cola::Cola() {
    front = nullptr;
    rear = nullptr;
    len = 0;
}

/**
 * Ingresa un vehiculo a la cola.
 * @param _vehiculo
 */
void Cola::add(Vehiculo* _vehiculo) {

    if (rear == nullptr) {
        rear = new Node(_vehiculo->getTipo());
        rear->setVehiculo(_vehiculo);
        rear->setNext(nullptr);
        front = rear;
    }
    else {
        Node* temp = new Node(_vehiculo->getTipo());
        temp->setVehiculo(_vehiculo);

        rear->setNext(temp);
        temp->setNext(nullptr);

        rear = temp;
    }

    len+=1;

}

/**
 * Remueve un vehiculo de la cola.
 * @param _data
 */
void Cola::remove() {
    Node* temp = front;

    if (front == nullptr) {
        cout << "Cola vacia" << endl;
    }
    else if (temp->getNext() != nullptr) {
        temp = temp->getNext();
        front = temp;
    } else {
        front = nullptr;
        rear = nullptr;
    }

    len-=1;
}

/**
 * Imprime los nodos en Cola.
 */
void Cola::printCola() {
    cout << "Cola" << endl;
    cout << "length: " << len << "\n[ ";
    Node* temp = front;
    while (temp != nullptr) {
        ///Para que no imprima el ultimo con una coma
        if (temp->getNext() == nullptr) {
            cout << temp->getVehiculo()->getTipo() ;
            break;
        }
        cout << temp->getVehiculo()->getTipo() << ", ";
        temp = temp->getNext();
    }

    cout << " ]" << endl;
}


///Getters & Setters


/**
 * Getter del front de Cola.
 * @return
 */
Node *Cola::getFront() {
    return front;
}

/**
 * Setter del front de Cola.
 * @param _front
 */
void Cola::setFront(Node* _front) {
    front = _front;
}

/**
 * Getter del rear de Cola.
 * @return
 */
Node* Cola::getRear() {
    return nullptr;
}

/**
 * Setter del rear de Cola.
 * @param _rear
 */
void Cola::setRear(Node *_rear) {
    rear = _rear;
}

/**
 * Geter del length de Cola.
 * @return len - int
 */
int Cola::getLen() {
    return len;
}

/**
 * Setter del length de Cola.
 * @param _len
 */
void Cola::setLen(int _len) {
    len = _len;
}

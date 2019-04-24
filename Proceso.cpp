
#include "Proceso.h"

/**
 * Clase Proceso
 * Representara un Proceso de la Fabrica
 *
 * @since 22/04/19
 */


/**
 * Constructor de Proceso
 * @param _tipo
 */
Proceso::Proceso(string _tipo){
    tipo = _tipo;
    vehiculo1 = nullptr;
    vehiculo2 = nullptr;
    vehiculo3 = nullptr;
    last = nullptr;
}


///Metodos


/**
 * Implementacion de la agenda
 * Si hay espacio se agrega a este proceso,
 * si no debe pasar uno a la cola.
 * @param vehiculo
 */
Vehiculo* Proceso::agendar(Vehiculo* vehiculo) {

    ///Last no está bien implementado.

    if (isFull() != true) {

        if (vehiculo1 == nullptr){
            vehiculo1 = vehiculo;
            last = vehiculo;
            cout << "Vehiculo1 del proceso " << tipo << " se encuentra ocupado por un vehiculo tipo " << vehiculo->getTipo() << endl;
        }
        else if (vehiculo2 == nullptr){
            vehiculo2 = vehiculo;
            cout << "Vehiculo2 del proceso " << tipo << " se encuentra ocupado por un vehiculo tipo " << vehiculo->getTipo() << endl;
        }
        else if (vehiculo3 == nullptr){
            vehiculo3 = vehiculo;
            ///Cuando se ingresa por primera vez el tercero, el proceso estará lleno.
            setFull(true);
            cout << "Vehiculo3 del proceso " << tipo << " se encuentra ocupado por un vehiculo tipo " << vehiculo->getTipo() << endl;
        }

        return nullptr;

    }
    else{

        Vehiculo* vehiculoCola = last;

        if (last == vehiculo1) {
            last = vehiculo2;
            vehiculo1 = vehiculo;
            cout << "El vehiculo tipo " << vehiculoCola->getTipo() << " ocupaba Vehiculo1, ahora será ingresado a la cola." << endl;
            cout << "Vehiculo1 del proceso " << tipo << " se encuentra ahora ocupado por un vehiculo tipo " << vehiculo->getTipo() << endl;
        } else if (last == vehiculo2) {
            last = vehiculo3;
            vehiculo2 = vehiculo;
            cout << "El vehiculo tipo " << vehiculoCola->getTipo() << " ocupaba Vehiculo2, ahora será ingresado a la cola." << endl;
            cout << "Vehiculo2 del proceso " << tipo << " se encuentra ahora ocupado por un vehiculo tipo " << vehiculo->getTipo() << endl;
        } else if (last == vehiculo3) {
            last = vehiculo1;
            vehiculo3 = vehiculo;
            cout << "El vehiculo tipo " << vehiculoCola->getTipo() << " ocupaba Vehiculo3, ahora será ingresado a la cola." << endl;
            cout << "Vehiculo3 del proceso " << tipo << " se encuentra ahora ocupado por un vehiculo tipo " << vehiculo->getTipo() << endl;
        }

        return vehiculoCola;

    }
}

void Proceso::procesar() {

    cout << "Procesando Proceso " << tipo << ":" << endl;

    if (vehiculo1 != nullptr) {

        if (vehiculo1->getTiempoProcesoActual() == 0) {
            //vehiculo1->reordenar();
            ///CAMBIAR VEHICULO DE PROCESO
        } else {
            vehiculo1->completarProcesoActual();
            cout << "V1: tipo [" << vehiculo1->getTipo() << "] tiempo restante [" << vehiculo1->getTiempoProcesoActual() << "]" << endl;
        }

    }
    else {
        cout << "V1: tipo [ ] tiempo restante [ ]" << endl;
    }

    if (vehiculo2 != nullptr) {

        if (vehiculo2->getTiempoProcesoActual() == 0) {
            //vehiculo2->reordenar();
            ///CAMBIAR VEHICULO DE PROCESO
        }
        else {
            vehiculo2->completarProcesoActual();
            cout << "V2: tipo [" << vehiculo2->getTipo() << "] tiempo restante [" << vehiculo2->getTiempoProcesoActual() << "]" << endl;
        }

    }
    else {
        cout << "V2: tipo [ ] tiempo restante [ ]" << endl;
    }

    if (vehiculo3 != nullptr) {

        if (vehiculo3->getTiempoProcesoActual() == 0) {
            //vehiculo3->reordenar();
            ///CAMBIAR VEHICULO DE PROCESO
        }
        else {
            vehiculo3->completarProcesoActual();
            cout << "V3: tipo [" << vehiculo3->getTipo() << "] tiempo restante [" << vehiculo3->getTiempoProcesoActual() << "]" << endl;
        }

    }
    else {
        cout << "V3: tipo [ ] tiempo restante [ ]" << endl;
    }

}

/**
 * Imprime los vehiculos agendados en el proceso.
 */
void Proceso::printAgenda() {

    cout << "Agenda Proceso " << tipo << ":" << endl;

    if (vehiculo1 != nullptr) {
        cout << "V1: tipo [" << vehiculo1->getTipo() << "] tiempo restante [" << vehiculo1->getTiempoProcesoActual() << "]" << endl;
    } else {
        cout << "V1: tipo [ ] tiempo restante [ ]" << endl;
    }

    if (vehiculo2 != nullptr) {
        cout << "V2: tipo [" << vehiculo2->getTipo() << "] tiempo restante [" << vehiculo2->getTiempoProcesoActual() << "]" << endl;
    } else {
        cout << "V2: tipo [ ] tiempo restante [ ]" << endl;
    }

    if (vehiculo3 != nullptr) {
        cout << "V3: tipo [" << vehiculo3->getTipo() << "] tiempo restante [" << vehiculo3->getTiempoProcesoActual() << "]" << endl;
    } else {
        cout << "V3: tipo [ ] tiempo restante [ ]" << endl;
    }

}


///Getters & Setters


/**
 * Getter del tipo de Proceso.
 * @return tipo
 */
string Proceso::getTipo(){
    return tipo;
}

/**
 * Setter del tipo de Proceso.
 * @param _tipo
 */
void Proceso::setTipo(string _tipo){
    tipo = _tipo;
}

/**
 * Getter de full de Proceso.
 * @return
 */
bool Proceso::isFull() {
    return full;
}

/**
 * Setter de full de Proceso.
 * @param _full
 */
void Proceso::setFull(bool _full) {
    full = _full;
}

/**
 * Getter del vehiculo1 de Proceso.
 * @return vehiculo1
 */
Vehiculo* Proceso::getVehiculo1() {
    return vehiculo1;
}

/**
 * Setter del vehiculo1 de Proceso.
 * @param _vehiculo1
 */
void Proceso::setVehiculo1(Vehiculo* _vehiculo1) {
    vehiculo1 = _vehiculo1;
}

/**
 * Getter del vehiculo2 de Proceso.
 * @return vehiculo2
 */
Vehiculo* Proceso::getVehiculo2() {
    return vehiculo2;
}

/**
 * Setter del vehiculo2 de Proceso.
 * @param _vehiculo2
 */
void Proceso::setVehiculo2(Vehiculo* _vehiculo2){
    vehiculo2 = _vehiculo2;
}

/**
 * Getter del vehiculo3 de Proceso.
 * @return vehiculo3
 */
Vehiculo* Proceso::getVehiculo3() {
    return vehiculo3;
}

/**
 * Setter del vehiculo3 de Proceso.
 * @param _vehiculo3
 */
void Proceso::setVehiculo3(Vehiculo* _vehiculo3) {
    vehiculo3 = _vehiculo3;
}

/**
 * Getter de last de Proceso.
 * @return last - ultimo vehiculo ingresado
 */
Vehiculo* Proceso::getLast() {
    return last;
}

/**
 * Setter de last de Proceso.
 * @param _last
 */
void Proceso::setLast(Vehiculo* _last) {
    last = _last;
}

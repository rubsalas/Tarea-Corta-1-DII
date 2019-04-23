
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
}


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

int Proceso::agenda(Vehiculo *veh) {
    if (vehiculo1== nullptr){
        vehiculo1 = new Vehiculo(veh->getTipo());
    }
    else if (vehiculo2== nullptr){
        vehiculo2 = new Vehiculo(veh->getTipo());
    }
    else if (vehiculo3== nullptr){
        vehiculo3 = new Vehiculo(veh->getTipo());
    }
    else{
        cout<<"No hay espacio en la agenda del proceso "<<tipo<<endl;
        return 0;
    }
}
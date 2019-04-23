
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


#include "Vehiculo.h"


/**
 * Clase Vehiculo
 * Representará un Vehiculo
 *
 * @since 08/04/19
 * @author Rubén Salas
 */


/**
 * Constructor del Vehiculo
 * Se asigan los tiempos preestablecidos de cada proceso segun su tipo
 * @param _tipo - Int con el numero del tipo del vehiculo
 */
Vehiculo::Vehiculo(int _tipo) {
    tipo = "Vehículo Tipo: " + to_string(_tipo);
    if (_tipo == 1) {
        tiempoPA = 2;
        tiempoPB = 2;
        tiempoPC = 4;
        tiempoPD = 1;
        tiempoPE = 3;
        tiempoPF = 1;
    } else if (_tipo == 2) {
        tiempoPA = 1;
        tiempoPB = 1;
        tiempoPC = 2;
        tiempoPD = 3;
        tiempoPE = 2;
        tiempoPF = 1;
    } else if (_tipo == 3) {
        tiempoPA = 3;
        tiempoPB = 1;
        tiempoPC = 2;
        tiempoPD = 1;
        tiempoPE = 4;
        tiempoPF = 1;
    } else if (_tipo == 4) {
        tiempoPA = 3;
        tiempoPB = 2;
        tiempoPC = 1;
        tiempoPD = 4;
        tiempoPE = 1;
        tiempoPF = 2;
    } else if (_tipo == 5) {
        tiempoPA = 1;
        tiempoPB = 2;
        tiempoPC = 4;
        tiempoPD = 3;
        tiempoPE = 4;
        tiempoPF = 1;
    } else { /// _tipo == 6
        tiempoPA = 4;
        tiempoPB = 4;
        tiempoPC = 2;
        tiempoPD = 1;
        tiempoPE = 3;
        tiempoPF = 1;
    }

}


///Getters & Setters


/**
 * Getter del tiempo del Proceso A
 * @return tiempoPA - int
 */
int Vehiculo::getTiempoPA() const {
    return tiempoPA;
}

/**
 * Setter del tiempo del Proceso A
 * @param tiempoPA
 */
void Vehiculo::setTiempoPA(int tiempoPA) {
    Vehiculo::tiempoPA = tiempoPA;
}

/**
 * Getter del tiempo del Proceso B
 * @return tiempoPB - int
 */
int Vehiculo::getTiempoPB() const {
    return tiempoPB;
}

/**
 * Setter del tiempo del Proceso B
 * @param tiempoPB
 */
void Vehiculo::setTiempoPB(int tiempoPB) {
    Vehiculo::tiempoPB = tiempoPB;
}

/**
 * Getter del tiempo del Proceso C
 * @return tiempoPC - int
 */
int Vehiculo::getTiempoPC() const {
    return tiempoPC;
}

/**
 * Setter del tiempo del Proceso C
 * @param tiempoPC
 */
void Vehiculo::setTiempoPC(int tiempoPC) {
    Vehiculo::tiempoPC = tiempoPC;
}

/**
 * Getter del tiempo del Proceso D
 * @return tiempoPD - int
 */
int Vehiculo::getTiempoPD() const {
    return tiempoPD;
}

/**
 * Setter del tiempo del Proceso D
 * @param tiempoPD
 */
void Vehiculo::setTiempoPD(int tiempoPD) {
    Vehiculo::tiempoPD = tiempoPD;
}

/**
 * Getter del tiempo del Proceso E
 * @return tiempoPE - int
 */
int Vehiculo::getTiempoPE() const {
    return tiempoPE;
}

/**
 * Setter del tiempo del Proceso E
 * @param tiempoPE
 */
void Vehiculo::setTiempoPE(int tiempoPE) {
    Vehiculo::tiempoPE = tiempoPE;
}

/**
 * Getter del tiempo del Proceso F
 * @return tiempoPF - int
 */
int Vehiculo::getTiempoPF() const {
    return tiempoPF;
}

/**
 * Setter del tiempo del Proceso F
 * @param tiempoPF
 */
void Vehiculo::setTiempoPF(int tiempoPF) {
    Vehiculo::tiempoPF = tiempoPF;
}


///Metodos


/**
 * Imprime los tiempos asignados de cada Proceso del vehiculo dependiendo de su tipo.
 */
void Vehiculo::printTimes() {
    cout << tipo << endl;
    cout << "Tiempo A: " + to_string(getTiempoPA()) << endl;
    cout << "Tiempo B: " + to_string(getTiempoPB()) << endl;
    cout << "Tiempo C: " + to_string(getTiempoPC()) << endl;
    cout << "Tiempo D: " + to_string(getTiempoPD()) << endl;
    cout << "Tiempo E: " + to_string(getTiempoPE()) << endl;
    cout << "Tiempo F: " + to_string(getTiempoPF()) << endl;
}

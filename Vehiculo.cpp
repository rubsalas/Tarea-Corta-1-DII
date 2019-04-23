
#include "Vehiculo.h"


/**
 * Clase Vehiculo
 * Representará un Vehiculo
 *
 * @since 08/04/19
 */


/**
 * Constructor del Vehiculo
 * Se asigan los tiempos preestablecidos de cada proceso segun su tipo
 * @param _tipo - Int con el numero del tipo del vehiculo
 */
Vehiculo::Vehiculo(int _tipo) {
    tipo = _tipo;
    if (_tipo == 1) {
        tiempoPA = 2;
        tiempoPB = 2;
        tiempoPC = 4;
        tiempoPD = 1;
        tiempoPE = 3;
        tiempoPF = 1;
        orden[0]="A";
        orden[1]="B";
        orden[2]="C";
        orden[3]="D";
        orden[4]="E";
        orden[5]="F";

    } else if (_tipo == 2) {
        tiempoPA = 1;
        tiempoPB = 1;
        tiempoPC = 2;
        tiempoPD = 3;
        tiempoPE = 2;
        tiempoPF = 1;
        orden[0]="C";
        orden[1]="A";
        orden[2]="B";
        orden[3]="E";
        orden[4]="D";
        orden[5]="F";

    } else if (_tipo == 3) {
        tiempoPA = 3;
        tiempoPB = 1;
        tiempoPC = 2;
        tiempoPD = 1;
        tiempoPE = 4;
        tiempoPF = 1;
        orden[0]="D";
        orden[1]="E";
        orden[2]="A";
        orden[3]="C";
        orden[4]="B";
        orden[5]="F";

    } else if (_tipo == 4) {
        tiempoPA = 3;
        tiempoPB = 2;
        tiempoPC = 1;
        tiempoPD = 4;
        tiempoPE = 1;
        tiempoPF = 2;
        orden[0]="B";
        orden[1]="C";
        orden[2]="D";
        orden[3]="A";
        orden[4]="F";
        orden[5]="E";

    } else if (_tipo == 5) {
        tiempoPA = 1;
        tiempoPB = 2;
        tiempoPC = 4;
        tiempoPD = 3;
        tiempoPE = 4;
        tiempoPF = 1;
        orden[0]="E";
        orden[1]="F";
        orden[2]="B";
        orden[3]="C";
        orden[4]="A";
        orden[5]="D";

    } else if (_tipo == 6){
        tiempoPA = 4;
        tiempoPB = 4;
        tiempoPC = 2;
        tiempoPD = 1;
        tiempoPE = 3;
        tiempoPF = 1;
        orden[0]="F";
        orden[1]="D";
        orden[2]="C";
        orden[3]="B";
        orden[4]="E";
        orden[5]="A";
    }

    else{
        cout<<"No existe este tipo de vehiculo"<<endl;
    }
}


///Getters & Setters

/**
 * Getter tipo de vehiculo
 * @return tipo - string
 */
int Vehiculo::getTipo() {
    return tipo;
}


/**
 * Setter tipo de vehiculo
 * @param tipo
 */
void Vehiculo::setTipo(int _tipo) {

    tipo = _tipo;
    if (_tipo == 1) {
        tiempoPA = 2;
        tiempoPB = 2;
        tiempoPC = 4;
        tiempoPD = 1;
        tiempoPE = 3;
        tiempoPF = 1;
        orden[0]="A";
        orden[1]="B";
        orden[2]="C";
        orden[3]="D";
        orden[4]="E";
        orden[5]="F";

    } else if (_tipo == 2) {
        tiempoPA = 1;
        tiempoPB = 1;
        tiempoPC = 2;
        tiempoPD = 3;
        tiempoPE = 2;
        tiempoPF = 1;
        orden[0]="C";
        orden[1]="A";
        orden[2]="B";
        orden[3]="E";
        orden[4]="D";
        orden[5]="F";

    } else if (_tipo == 3) {
        tiempoPA = 3;
        tiempoPB = 1;
        tiempoPC = 2;
        tiempoPD = 1;
        tiempoPE = 4;
        tiempoPF = 1;
        orden[0]="D";
        orden[1]="E";
        orden[2]="A";
        orden[3]="C";
        orden[4]="B";
        orden[5]="F";

    } else if (_tipo == 4) {
        tiempoPA = 3;
        tiempoPB = 2;
        tiempoPC = 1;
        tiempoPD = 4;
        tiempoPE = 1;
        tiempoPF = 2;
        orden[0]="B";
        orden[1]="C";
        orden[2]="D";
        orden[3]="A";
        orden[4]="F";
        orden[5]="E";

    } else if (_tipo == 5) {
        tiempoPA = 1;
        tiempoPB = 2;
        tiempoPC = 4;
        tiempoPD = 3;
        tiempoPE = 4;
        tiempoPF = 1;
        orden[0]="E";
        orden[1]="F";
        orden[2]="B";
        orden[3]="C";
        orden[4]="A";
        orden[5]="D";

    } else if (_tipo == 6){
        tiempoPA = 4;
        tiempoPB = 4;
        tiempoPC = 2;
        tiempoPD = 1;
        tiempoPE = 3;
        tiempoPF = 1;
        orden[0]="F";
        orden[1]="D";
        orden[2]="C";
        orden[3]="B";
        orden[4]="E";
        orden[5]="A";
    }

    else{
        cout<<"No existe este tipo de vehiculo"<<endl;
    }

}


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

string Vehiculo::getOrden() {
    return orden[0];
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

void Vehiculo::modPA() {
    tiempoPA=tiempoPA-1;
}

void Vehiculo::modPB() {
    tiempoPB=tiempoPB-1;
}

void Vehiculo::modPC() {
    tiempoPC=tiempoPC-1;
}

void Vehiculo::modPD() {
    tiempoPD=tiempoPD-1;
}

void Vehiculo::modPE() {
    tiempoPE=tiempoPE-1;
}

void Vehiculo::modPF() {
    tiempoPF=tiempoPF-1;
}

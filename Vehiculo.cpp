//
// Created by ruben on 08/04/19.
//

#include "Vehiculo.h"



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
    } else { // _tipo == 6
        tiempoPA = 4;
        tiempoPB = 4;
        tiempoPC = 2;
        tiempoPD = 1;
        tiempoPE = 3;
        tiempoPF = 1;
    }

}

int Vehiculo::getTiempoPA() const {
    return tiempoPA;
}

void Vehiculo::setTiempoPA(int tiempoPA) {
    Vehiculo::tiempoPA = tiempoPA;
}

int Vehiculo::getTiempoPB() const {
    return tiempoPB;
}

void Vehiculo::setTiempoPB(int tiempoPB) {
    Vehiculo::tiempoPB = tiempoPB;
}

int Vehiculo::getTiempoPC() const {
    return tiempoPC;
}

void Vehiculo::setTiempoPC(int tiempoPC) {
    Vehiculo::tiempoPC = tiempoPC;
}

int Vehiculo::getTiempoPD() const {
    return tiempoPD;
}

void Vehiculo::setTiempoPD(int tiempoPD) {
    Vehiculo::tiempoPD = tiempoPD;
}

int Vehiculo::getTiempoPE() const {
    return tiempoPE;
}

void Vehiculo::setTiempoPE(int tiempoPE) {
    Vehiculo::tiempoPE = tiempoPE;
}

int Vehiculo::getTiempoPF() const {
    return tiempoPF;
}

void Vehiculo::setTiempoPF(int tiempoPF) {
    Vehiculo::tiempoPF = tiempoPF;
}

void Vehiculo::printTimes() {
    cout << tipo << endl;
    cout << "Tiempo A: " + to_string(getTiempoPA()) << endl;
    cout << "Tiempo B: " + to_string(getTiempoPB()) << endl;
    cout << "Tiempo C: " + to_string(getTiempoPC()) << endl;
    cout << "Tiempo D: " + to_string(getTiempoPD()) << endl;
    cout << "Tiempo E: " + to_string(getTiempoPE()) << endl;
    cout << "Tiempo F: " + to_string(getTiempoPF()) << endl;
}

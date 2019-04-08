//
// Created by ruben on 08/04/19.
//

#ifndef UNTITLED1_VEHICULO_H
#define UNTITLED1_VEHICULO_H

#include <iostream>

using namespace std;


class Vehiculo {
private:
    string tipo;
    int tiempoPA;
    int tiempoPB;
    int tiempoPC;
    int tiempoPD;
    int tiempoPE;
    int tiempoPF;

public:
    Vehiculo(int _tipo);

    int getTiempoPA() const;
    void setTiempoPA(int tiempoPA);

    int getTiempoPB() const;
    void setTiempoPB(int tiempoPB);

    int getTiempoPC() const;
    void setTiempoPC(int tiempoPC);

    int getTiempoPD() const;
    void setTiempoPD(int tiempoPD);

    int getTiempoPE() const;
    void setTiempoPE(int tiempoPE);

    int getTiempoPF() const;
    void setTiempoPF(int tiempoPF);

    void printTimes();

};


#endif //UNTITLED1_VEHICULO_H

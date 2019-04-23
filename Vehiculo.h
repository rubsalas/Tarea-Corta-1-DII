
#ifndef TAREA_CORTA_1_VEHICULO_H
#define TAREA_CORTA_1_VEHICULO_H


#include <iostream>
#include "List.h"

using namespace std;


/**
 * Header de Vehiculo
 */


class Vehiculo {

private:
    string tipo;
    int tiempoPA;
    int tiempoPB;
    int tiempoPC;
    int tiempoPD;
    int tiempoPE;
    int tiempoPF;
    List* orden; // [A,B,C,D,E,F]

public:
    ///Constructor
    Vehiculo(int _tipo);

    ///Getters & Setters
    string getTipo();
    void setTipo(int _tipo);
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

    ///Metodos
    void printTimes();
    void modPA();
    void modPB();
    void modPC();
    void modPD();
    void modPE();
    void modPF();

};


#endif //TAREA_CORTA_1_VEHICULO_H

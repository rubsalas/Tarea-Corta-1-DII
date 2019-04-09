
#ifndef TAREA_CORTA_1_VEHICULO_H
#define TAREA_CORTA_1_VEHICULO_H


#include <iostream>

using namespace std;


/**
 * Archivo h de Vehiculo
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

public:
    ///Constructor
    Vehiculo(int _tipo);

    ///Getters & Setters
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

};


#endif //TAREA_CORTA_1_VEHICULO_H

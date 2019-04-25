
#ifndef TAREA_CORTA_1_VEHICULO_H
#define TAREA_CORTA_1_VEHICULO_H


#include <iostream>
#include <QString>

using namespace std;


/**
 * Header de Vehiculo
 */


class Vehiculo {

private:
    int tipo;
    int procesosFaltantes;
    int tiempoPA;
    int tiempoPB;
    int tiempoPC;
    int tiempoPD;
    int tiempoPE;
    int tiempoPF;
    string orden[6];



public:

    ///Constructor
    Vehiculo(int _tipo);

    ///Metodos
    string getProcesoActual();
    int getTiempoProcesoActual();
    void completarProcesoActual();
    void reordenar();
    void printTimes();

    ///Getters & Setters
    int getTipo();
    void setTipo(int _tipo);
    int getProcesosFaltantes();
    void setProcesosFaltantes(int _procesosFaltantes);
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

};


#endif //TAREA_CORTA_1_VEHICULO_H

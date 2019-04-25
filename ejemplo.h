#ifndef EJEMPLO_H
#define EJEMPLO_H

#include <QString>
#include <string>

using namespace std;

class Ejemplo
{
private:
    int _nombre;
public:
    Ejemplo(int nombre);
    int getNombre();
};

#endif // EJEMPLO_H

#ifndef PARTIDO_H
#define PARTIDO_H

#include <iostream>
#include "Equipo.h"
using namespace std;

class Partido {
protected:
    Equipo equipoA;
    Equipo equipoB;
    int puntosA;
    int puntosB;

public:
    Partido() : puntosA(0), puntosB(0) {}

    Partido(Equipo a, Equipo b) : equipoA(a), equipoB(b), puntosA(0), puntosB(0) {}

    void setMarcador(int a, int b) {
        puntosA = a;
        puntosB = b;
    }

    void mostrarMarcador() {
        cout << "--- Marcador Final ---\n";
        cout << equipoA.get_nombre() << ": " << puntosA << endl;
        cout << equipoB.get_nombre() << ": " << puntosB << endl;
    }
};

#endif

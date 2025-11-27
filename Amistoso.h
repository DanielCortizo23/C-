#ifndef AMISTOSO_H
#define AMISTOSO_H

#include <string>
#include <iostream>
#include "Partido.h"
using namespace std;

class Amistoso : public Partido {
private:
    string motivo;

public:
    Amistoso(): motivo("") {}
    Amistoso(Equipo a, Equipo b, string m) : Partido(a, b), motivo(m) {}

    void mostrarInfo() {
        cout << "Partido amistoso - Motivo: " << motivo << endl;
    }
};

#endif




#ifndef COMPETITIVO_H
#define COMPETITIVO_H

#include <string>
#include <iostream>
#include "Partido.h"
using namespace std;

class Competitivo : public Partido {
private:
    string sede;
    int premio;

public:
    Competitivo() : sede(""), premio(0) {}
    Competitivo(Equipo a, Equipo b, string s, int p)
        : Partido(a, b), sede(s), premio(p) {}

    void mostrarInfo() {
        cout << "Partido competitivo en " << sede
             << " por $" << premio << endl;
    }
};

#endif

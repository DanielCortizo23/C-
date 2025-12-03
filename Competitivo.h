/*
 * Clase Competitivo
 * Representa un partido competitivo que hereda de Partido.
 * Agrega la sede y el premio del partido.
 */
#ifndef COMPETITIVO_H
#define COMPETITIVO_H

#include <string>
#include <iostream>
#include "Partido.h"
using namespace std;

class Competitivo : public Partido {
private:

    // Lugar donde se realiza el partido competitivo
    string sede;

    // Premio económico del partido
    int premio;

public:

    /**
     * Constructor por default.
     *
     * @param
     * @return Objeto Competitivo
     */
    Competitivo() : sede(""), premio(0) {}
  
    /**
     * Constructor que recibe equipos, sede y premio.
     *
     * @param a Equipo 1
     * @param b Equipo 2
     * @param s Sede del partido
     * @param p Premio económico
     * @return Objeto Competitivo
     */
    Competitivo(Equipo a, Equipo b, string s, int p)
        : Partido(a, b), sede(s), premio(p) {}

        /**
     * Muestra la información del partido competitivo.
     *
     * @param
     * @return
     */
    void mostrarInfo() {
        cout << "Partido competitivo en " << sede
             << " por $" << premio << endl;
    }
};

#endif


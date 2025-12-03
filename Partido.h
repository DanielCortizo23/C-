/**
 * Clase Partido
 * Maneja los dos equipos que participan y el marcador del partido.
 */

#ifndef PARTIDO_H_
#define PARTIDO_H_

#include <iostream>
#include "Equipo.h"
using namespace std;

/**
 * Clase Partido
 */
class Partido {

protected:
    Equipo equipoA;
    Equipo equipoB;
    int puntosA;
    int puntosB;

public:

    /**
     * Constructor por default
     *
     * @param
     * @return Objeto Partido
     */
    Partido() : puntosA(0), puntosB(0) {}

    /**
     * Constructor con parámetros
     *
     * @param a Equipo A
     * @param b Equipo B
     * @return Objeto Partido
     */
    Partido(Equipo a, Equipo b) : equipoA(a), equipoB(b), puntosA(0), puntosB(0) {}

    /**
     * Modifica el marcador del partido
     *
     * @param a Puntos del equipo A
     * @param b Puntos del equipo B
     * @return
     */
    void setMarcador(int a, int b) {
        puntosA = a;
        puntosB = b;
    }

    /**
     * Muestra el marcador final
     *
     * @param
     * @return
     */
    void mostrarMarcador() {
        cout << "--- Marcador Final ---\n";
        cout << equipoA.get_nombre() << ": " << puntosA << endl;
        cout << equipoB.get_nombre() << ": " << puntosB << endl;
    }
};

#endif



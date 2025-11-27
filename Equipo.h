#ifndef EQUIPO_H
#define EQUIPO_H

#include <string>
#include <iostream>
#include "Jugador.h"
#include "Entrenador.h"
using namespace std;

class Equipo {
private:
    string nombre;
    Jugador jugadores[20];
    int numJugadores;
    Entrenador entrenador;

public:
    Equipo(): nombre(""), numJugadores(0) {}
    Equipo(string nom): nombre(nom), numJugadores(0) {}

    void set_nombre(string nom) { nombre = nom; }
    string get_nombre() { return nombre; }

    void set_entrenador(Entrenador e) { entrenador = e; }
    Entrenador get_entrenador() { return entrenador; }

    void agregarJugador(Jugador j) {
        jugadores[numJugadores++] = j;
    }

    void mostrarJugadores() {
        cout << "--- Jugadores de " << nombre << " ---\n";
        for (int i = 0; i < numJugadores; i++) {
            cout << jugadores[i].get_nombre()
                 << " (#" << jugadores[i].get_numero() << ")\n";
        }
    }
};

#endif


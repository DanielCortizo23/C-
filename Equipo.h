/**
 * Clase Equipo
 * Maneja el nombre del equipo, su entrenador y sus jugadores.
 */

#ifndef EQUIPO_H_
#define EQUIPO_H_

#include <string>
#include <iostream>
#include "Jugador.h"
#include "Entrenador.h"
using namespace std;

/**
 * Clase Equipo
 */
class Equipo {

private:
    string nombre;
    Jugador jugadores[20];
    int numJugadores;
    Entrenador entrenador;

public:

    /**
     * Constructor por default
     *
     * @param
     * @return Objeto Equipo
     */
    Equipo(): nombre(""), numJugadores(0) {}

    /**
     * Constructor con parámetros
     *
     * @param nom Nombre del equipo
     * @return Objeto Equipo
     */
    Equipo(string nom): nombre(nom), numJugadores(0) {}

    /**
     * Cambia el nombre del equipo
     *
     * @param nom Nuevo nombre
     * @return
     */
    void set_nombre(string nom) { nombre = nom; }

    /**
     * Regresa el nombre del equipo
     *
     * @param
     * @return nombre
     */
    string get_nombre() { return nombre; }

    /**
     * Asigna un entrenador al equipo
     *
     * @param e Objeto Entrenador
     * @return
     */
    void set_entrenador(Entrenador e) { entrenador = e; }

    /**
     * Regresa el entrenador asignado
     *
     * @param
     * @return entrenador
     */
    Entrenador get_entrenador() { return entrenador; }

    /**
     * Agrega un jugador al arreglo de jugadores
     *
     * @param j Jugador nuevo
     * @return
     */
    void agregarJugador(Jugador j) {
        jugadores[numJugadores++] = j;
    }

    /**
     * Muestra todos los jugadores del equipo
     *
     * @param
     * @return
     */
    void mostrarJugadores() {
        cout << "--- Jugadores de " << nombre << " ---\n";
        for (int i = 0; i < numJugadores; i++) {
            cout << jugadores[i].get_nombre()
                 << " (#" << jugadores[i].get_numero() << ")\n";
        }
    }
};

#endif



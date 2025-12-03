/**
 * Clase Entrenador
 * Maneja el nombre y experiencia del entrenador.
 */

#ifndef ENTRENADOR_H
#define ENTRENADOR_H

#include <string>
#include <iostream>
using namespace std;

/**
 * Clase Entrenador
 */
class Entrenador {
private:
    string nombre;
    int experiencia;

public:

    /**
     * Constructor por default
     *
     * @param
     * @return Objeto Entrenador
     */
    Entrenador(): nombre(""), experiencia(0) {}

    /**
     * Constructor con parámetros
     *
     * @param nom Nombre del entrenador
     * @param exp Años de experiencia
     * @return Objeto Entrenador
     */
    Entrenador(string nom, int exp): nombre(nom), experiencia(exp) {}

    /**
     * Regresa el nombre del entrenador
     *
     * @param
     * @return nombre
     */
    string get_nombre() { return nombre; }

    
    /**
     * Regresa la experiencia del entrenador
     *
     * @param
     * @return experiencia
     */
    int get_experiencia() { return experiencia; }

    /**
     * Modifica el nombre del entrenador
     *
     * @param n Nuevo nombre
     * @return
     */
    void set_nombre(string n) { nombre = n; }

    /**
     * Modifica la experiencia del entrenador
     *
     * @param e Nueva experiencia
     * @return
     */
    void set_experiencia(int e) { experiencia = e; }
};

#endif


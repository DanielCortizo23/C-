/**
 * Clase Jugador
 * Maneja la información de cada jugador: nombre, posición y número.
 */

#ifndef JUGADOR_H_
#define JUGADOR_H_

#include <string>
#include <iostream>
using namespace std;

/**
 * Clase Jugador
 */
class Jugador {

private:
    string nombre;
    string posicion;
    int numero;

public:

    /**
     * Constructor por default
     *
     * @param
     * @return Objeto Jugador
     */
    Jugador(): nombre(""), posicion(""), numero(0) {}

    /**
     * Constructor con parámetros
     *
     * @param nom Nombre del jugador
     * @param pos Posición del jugador
     * @param num Número del jugador
     * @return Objeto Jugador
     */
    Jugador(string nom, string pos, int num)
        : nombre(nom), posicion(pos), numero(num) {}

    /**
     * Regresa el nombre del jugador
     *
     * @param
     * @return nombre
     */
    string get_nombre() { return nombre; }

    /**
     * Regresa la posición del jugador
     *
     * @param
     * @return posicion
     */
    string get_posicion() { return posicion; }

    /**
     * Regresa el número del jugador
     *
     * @param
     * @return numero
     */
    int get_numero() { return numero; }

    /**
     * Cambia el nombre del jugador
     *
     * @param n Nuevo nombre
     * @return
     */
    void set_nombre(string n) { nombre = n; }

    /**
     * Cambia la posición del jugador
     *
     * @param p Nueva posición
     * @return
     */
    void set_posicion(string p) { posicion = p; }

    /**
     * Cambia el número del jugador
     *
     * @param num Nuevo número
     * @return
     */
    void set_numero(int num) { numero = num; }
};

#endif


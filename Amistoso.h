/*
 * Clase: Amistoso
 * Descripción:
 * Representa un partido de tipo amistoso dentro del sistema.
 * Hereda de la clase Partido y agrega un atributo adicional:
 * - motivo: razón por la cual se realiza el encuentro.
 *
 * Esta clase demuestra el uso de:
 * - Herencia (extiende a Partido)
 * - Constructores que inicializan tanto la parte base como la parte derivada
 * - Sobrescritura de comportamiento (mostrarInfo)
 */

#ifndef AMISTOSO_H
#define AMISTOSO_H

#include <string>
#include <iostream>
#include "Partido.h"
using namespace std;

class Amistoso : public Partido {
private

    // Motivo del partido amistoso
    string motivo;

public:

    /**
     * Constructor por default.
     *
     * @param
     * @return Objeto Amistoso
     */
    Amistoso(): motivo("") {}

    /**
     * Constructor que recibe los equipos y el motivo.
     *
     * @param a Equipo 1
     * @param b Equipo 2
     * @param m Motivo del partido amistoso
     * @return Objeto Amistoso
     */
    Amistoso(Equipo a, Equipo b, string m) : Partido(a, b), motivo(m) {}

        /**
     * Muestra la información del partido amistoso.
     *
     * @param
     * @return
     */
    void mostrarInfo() {
        cout << "Partido amistoso - Motivo: " << motivo << endl;
    }
};

#endif







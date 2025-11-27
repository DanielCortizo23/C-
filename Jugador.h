#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include <iostream>
using namespace std;

class Jugador {
private:
    string nombre;
    string posicion;
    int numero;

public:
    Jugador(): nombre(""), posicion(""), numero(0) {}
    Jugador(string nom, string pos, int num)
        : nombre(nom), posicion(pos), numero(num) {}

    string get_nombre() { return nombre; }
    string get_posicion() { return posicion; }
    int get_numero() { return numero; }

    void set_nombre(string n) { nombre = n; }
    void set_posicion(string p) { posicion = p; }
    void set_numero(int num) { numero = num; }
};

#endif


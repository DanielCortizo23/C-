#ifndef ENTRENADOR_H
#define ENTRENADOR_H

#include <string>
#include <iostream>
using namespace std;

class Entrenador {
private:
    string nombre;
    int experiencia;

public:
    Entrenador(): nombre(""), experiencia(0) {}
    Entrenador(string nom, int exp): nombre(nom), experiencia(exp) {}

    string get_nombre() { return nombre; }
    int get_experiencia() { return experiencia; }

    void set_nombre(string n) { nombre = n; }
    void set_experiencia(int e) { experiencia = e; }
};

#endif

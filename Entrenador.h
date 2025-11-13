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

    string get_nombre();
    int get_experiencia();

    void set_nombre(string);
    void set_experiencia(int);

    void entrenar();
};

string Entrenador::get_nombre() { return nombre; }
int Entrenador::get_experiencia() { return experiencia; }

void Entrenador::set_nombre(string n) { nombre = n; }
void Entrenador::set_experiencia(int e) { experiencia = e; }
void Entrenador::entrenar() {
    cout << nombre << " esta entrenando al equipo." << endl;
}

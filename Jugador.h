#include <string>
#include <iostream>
using namespace std;

class Jugador {
private:
    string nombre;
    string posicion;
    int numero;
    int puntos;

public:
    Jugador(): nombre(""), posicion(""), numero(0), puntos(0) {}
    Jugador(string nom, string pos, int num, int pts): nombre(nom), posicion(pos), numero(num), puntos(pts) {}
    string get_nombre();
    string get_posicion();
    int get_numero();
    int get_puntos();

    void set_nombre(string);
    void set_posicion(string);
    void set_numero(int);
    void set_puntos(int);
    void anotarPuntos(int);
};

string Jugador::get_nombre() { return nombre; }
string Jugador::get_posicion() { return posicion; }
int Jugador::get_numero() { return numero; }
int Jugador::get_puntos() { return puntos; }

void Jugador::set_nombre(string n) { nombre = n; }
void Jugador::set_posicion(string p) { posicion = p; }
void Jugador::set_numero(int num) { numero = num; }
void Jugador::set_puntos(int pts) { puntos = pts; }
void Jugador::anotarPuntos(int extra) {
    puntos += extra;
}


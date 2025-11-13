#include <string>
#include <iostream>
using namespace std;

class Partido {
private:
    string rival;
    int puntosFavor;
    int puntosContra;

public:
    Partido(): rival(""), puntosFavor(0), puntosContra(0) {}
    Partido(string r, int f, int c): rival(r), puntosFavor(f), puntosContra(c) {}
    string get_rival();
    int get_puntosFavor();
    int get_puntosContra();

    void set_rival(string);
    void set_puntosFavor(int);
    void set_puntosContra(int);
    void mostrarResultado();
};
string Partido::get_rival() { return rival; }
int Partido::get_puntosFavor() { return puntosFavor; }
int Partido::get_puntosContra() { return puntosContra; }

void Partido::set_rival(string r) { rival = r; }
void Partido::set_puntosFavor(int f) { puntosFavor = f; }
void Partido::set_puntosContra(int c) { puntosContra = c; }
void Partido::mostrarResultado() {
    cout << "Partido contra " << rival << ": " 
         << puntosFavor << " - " << puntosContra << endl;
}

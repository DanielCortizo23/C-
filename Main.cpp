#include <iostream>
#include <string>
using namespace std;

#include "Jugador.h"
#include "Entrenador.h"
#include "Equipo.h"
#include "Partido.h"
#include "Amistoso.h"
#include "Competitivo.h"

int main() {
    string nombre_equipo1, nombre_equipo2;

    cout << "Nombre del equipo 1: ";
    cin >> nombre_equipo1;

    Equipo equipo1(nombre_equipo1);

    string nom_entrenador;
    int exp1;
    cout << "Nombre del entrenador del equipo 1: ";
    cin >> nom_entrenador;
    cout << "Experiencia (anios): ";
    cin >> exp1;

    equipo1.set_entrenador(Entrenador(nom_entrenador, exp1));

    int n1;
    cout << "Cuantos jugadores tiene el equipo 1? ";
    cin >> n1;

    for (int i = 0; i < n1; i++) {
        string n, p;
        int num, pts;

        cout << "\nJugador " << i + 1 << endl;
        cout << "Nombre: "; cin >> n;
        cout << "Posicion: "; cin >> p;
        cout << "Numero: "; cin >> num;

        equipo1.agregarJugador(Jugador(n, p, num));
    }

    cout << "\nNombre del equipo 2: ";
    cin >> nombre_equipo2;

    Equipo equipo2(nombre_equipo2);

    string nom_entrenador2;
    int exp2;
    cout << "Nombre del entrenador del equipo 2: ";
    cin >> nom_entrenador2;
    cout << "Experiencia (anios): ";
    cin >> exp2;

    equipo2.set_entrenador(Entrenador(nom_entrenador2, exp2));

    int n2;
    cout << "Cuantos jugadores tiene el equipo 2? ";
    cin >> n2;

    for (int i = 0; i < n2; i++) {
        string n, p;
        int num, pts;

        cout << "\nJugador " << i + 1 << endl;
        cout << "Nombre: "; cin >> n;
        cout << "Posicion: "; cin >> p;
        cout << "Numero: "; cin >> num;

        equipo2.agregarJugador(Jugador(n, p, num));
    }

 cout << "\n--- Crear Partido ---\n1. Amistoso\n2. Competitivo\nOpcion: ";
    int op;
    cin >> op;

    if (op == 1) {
        string motivo;
        cout << "Motivo del partido: ";
        cin >> motivo;

        Amistoso partido(equipo1, equipo2, motivo);

        partido.mostrarInfo();

        int a, b;
        cout << "\nPuntos finales del equipo 1: ";
        cin >> a;
        cout << "Puntos finales del equipo 2: ";
        cin >> b;

        partido.setMarcador(a, b);
        partido.mostrarMarcador();

    } else {
        string sede;
        int premio;

        cout << "Sede: ";
        cin >> sede;
        cout << "Premio $: ";
        cin >> premio;

        Competitivo partido(equipo1, equipo2, sede, premio);

        partido.mostrarInfo();

        int a, b;
        cout << "\nPuntos finales del equipo 1: ";
        cin >> a;
        cout << "Puntos finales del equipo 2: ";
        cin >> b;

        partido.setMarcador(a, b);
        partido.mostrarMarcador();
    }

    return 0;
}


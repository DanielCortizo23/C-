#include <iostream>
#include <string>
using namespace std;
#include "Jugador.h"
#include "Entrenador.h"
#include "Partido.h"

int main() {
    Jugador j1("Daniel Cortizo", "Central", 23, 15);
    Entrenador e1("Chacon", 5);
    Partido p1("Panteras", 25, 12);
    cout << "Jugador" << endl;

    cout << j1.get_nombre() << " (" << j1.get_posicion() << "), Puntos: " << j1.get_puntos() << endl;
    j1.anotarPuntos(5);

    cout << "\n Entrenador" << endl;
    e1.entrenar();

    cout << "\n Partido" << endl;
    p1.mostrarResultado();

    return 0;
}


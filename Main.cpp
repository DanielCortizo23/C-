/* 
 * Proyecto Equipo de Voleibol
 * Daniel Cortizo
 */

/**
 * Descripción:
 * Este es un proyecto demo para la clase de Programación Orientada a Objetos.
 * El programa permite capturar información de dos equipos de voleibol,
 * incluyendo jugadores y entrenadores, y posteriormente crear un partido del
 * tipo "Amistoso" o "Competitivo". 
 *
 * Dependiendo del tipo de partido seleccionado por el usuario, se mostrará
 * información diferente y se registrará el marcador final.
 */

// Bibliotecas
#include <iostream>
#include <string>
using namespace std;

// Archivos donde están los objetos del proyecto
#include "Jugador.h"
#include "Entrenador.h"
#include "Equipo.h"
#include "Partido.h"
#include "Amistoso.h"
#include "Competitivo.h"

/**
 * Inicia el código principal del programa
 */
int main() {
    
    // Variables para nombres de equipos
    string nombre_equipo1, nombre_equipo2;
    
    // Equipo 1
    cout << "Nombre del equipo 1: ";
    cin >> nombre_equipo1;
    
    // Se crea el objeto equipo 1
    Equipo equipo1(nombre_equipo1);

    // Datos del entrenador del equipo 1
    string nom_entrenador;
    int exp1;
    
    cout << "Nombre del entrenador del equipo 1: ";
    cin >> nom_entrenador;
    
    cout << "Experiencia de years (porfavor solo use numeros): ";
    cin >> exp1;

    // Asignación de entrenador al equipo 1
    equipo1.set_entrenador(Entrenador(nom_entrenador, exp1));

    // Registro de jugadores del equipo 1
    int n1;
    cout << "Cuantos jugadores tiene el equipo 1?(use numeros): ";
    cin >> n1;

    // Ciclo para agregar cada jugador
    for (int i = 0; i < n1; i++) {
        string n, p;
        int num, pts;

        cout << "\nJugador " << i + 1 << endl;
        cout << "Nombre: "; cin >> n;
        cout << "Posicion: "; cin >> p;
        cout << "Numero (porfavor solo use numeros): "; cin >> num;

        // Agrega jugador al equipo
        equipo1.agregarJugador(Jugador(n, p, num));
    }

    // Equipo 2
    cout << "\nNombre del equipo 2: ";
    cin >> nombre_equipo2;

    // Se crea el objeto equipo 2
    Equipo equipo2(nombre_equipo2);

    // Datos del entrenador del equipo 2
    string nom_entrenador2;
    int exp2;
    
    cout << "Nombre del entrenador del equipo 2: ";
    cin >> nom_entrenador2;
    
    cout << "Experiencia de years (porfavor solo use numeros): ";
    cin >> exp2;

    // Asignación de entrenador al equipo 2
    equipo2.set_entrenador(Entrenador(nom_entrenador2, exp2));

    // Registro de jugadores del equipo 2
    int n2;
    cout << "Cuantos jugadores tiene el equipo 2?(use numeros): ";
    cin >> n2;

    // Ciclo para agregar cada jugador del equipo 2
    for (int i = 0; i < n2; i++) {
        string n, p;
        int num, pts;

        cout << "\nJugador " << i + 1 << endl;
        cout << "Nombre: "; cin >> n;
        cout << "Posicion: "; cin >> p;
        cout << "Numero (porfavor solo use numeros): "; cin >> num;

        equipo2.agregarJugador(Jugador(n, p, num));
    }

// Creacion de Partido
 cout << "\n--- Crear Partido ---\n1. Amistoso\n2. Competitivo\nOpcion: ";
    int op;
    cin >> op;

    // Según la opción, crea el tipo de partido correspondiente
    if (op == 1) {

        // Partido amistoso
        cin.ignore(); // permitir getline
        string motivo;
        cout << "Motivo del partido: ";
        cin >> motivo;
        getline(cin, motivo);

        Amistoso partido(equipo1, equipo2, motivo);

        // Muestra la información del partido
        partido.mostrarInfo();

        // Captura del marcador final
        int a, b;
        cout << "\nPuntos finales del equipo 1: ";
        cin >> a;
        
        cout << "Puntos finales del equipo 2: ";
        cin >> b;

        // Se guarda el marcador y se muestra
        partido.setMarcador(a, b);
        partido.mostrarMarcador();

    } else {

        // Partido competitivo
        string sede;
        int premio;

        cout << "Sede: ";
        cin >> sede;
        cout << "Premio $: ";
        cin >> premio;

        Competitivo partido(equipo1, equipo2, sede, premio);

        // Muestra la información del partido
        partido.mostrarInfo();

        // Captura del marcador final
        int a, b;
        cout << "\nPuntos finales del equipo 1 (porfavor solo use numeros): ";
        cin >> a;
        
        cout << "Puntos finales del equipo 2 (porfavor solo use numeros): ";
        cin >> b;

        // Se guarda el marcador y se muestra
        partido.setMarcador(a, b);
        partido.mostrarMarcador();
}

// Aqui termina el codigo    
    return 0;
}








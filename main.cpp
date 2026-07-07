#include <iostream>
#include "funcion.h"
#include <windows.h>
using namespace std;

int opc, opPk, Lideres = 0, atk;
string entrenador, pkelegido = " ";

int main() {
    SetConsoleOutputCP(CP_UTF8); 
    
    LeerAleatorios();

    cout << "\033[1m" << "BIENVENIDO A POKEMON RPG: LA LIGA VALDERRA" << endl;
    cout << "  " << endl;

    do {
        MenuInicio();

        cout << " Ingrese su seleccion: " << endl;
        cin >> opc;

        switch (opc) {
            case 1: {
                string nom;
                int equipo[6];
                int tam = 0, hpJ = 0, lider = 0;
                bool cargado = CargarPartida(nom, equipo, tam, hpJ, lider);

                if (!cargado) {
                    cout << "Ingrese el nombre del entrenador: " << endl;
                    cin >> entrenador;

                    cout << "    " << endl;
                    cout << " ── ------------------------ ── " << endl;
                    cout << "    " << endl;

                    OpcPokemon();
                    cout << "    " << endl;
                    cout << "Que Pokemon eliges?" << endl;
                    cin >> opPk;
                    cout << "    " << endl;

                    switch (opPk) {
                        case 1:
                            pkelegido = " Escogiste a Charmander!";
                            break;
                        case 2:
                            pkelegido = " Escogiste a Squirtle!";
                            break;
                        case 3:
                            pkelegido = " Escogiste a Bulbasaur!";
                            break;
                        default:
                            cout << "Opcion invalida!" << endl;
                            break;
                    }

                    cout << pkelegido << endl;
                    cout << "Felicidades obtuviste tu primer Pokemon (Agregado al equipo)" << endl;

                    Partida();
                } else {
                    entrenador = nom;
                    cout << "\n Presiona ENTER para continuar..." << endl;
                    cin.ignore();
                    cin.get();
                    Partida();
                }
                break;
            }
            case 2:
                Estadisticas();
                break;
            case 3:
                Tipos();
                break;
            case 4:
                cout << "\n Saliendo del juego..." << endl;
                cout << "Gracias por jugar, hasta luego!!" << endl;
                break;
            default:
                cout << "Error! Opcion invalida, debe ingresar un numero del 1 al 4" << endl;
                break;
        }

    } while (opc != 4);

    return 0;
}
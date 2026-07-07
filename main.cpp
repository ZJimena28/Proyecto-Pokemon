#include <iostream>
#include "funcion.h"

#ifdef _WIN32
    #include <windows.h>
#endif

using namespace std;

int main() {

    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    #endif
    
    int opc;
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
                string entrenador;
                int opPk = 0;
                bool cargado = CargarPartida(nom, equipo, tam, hpJ, lider);

                if (!cargado) {
                    cout << "Ingrese el nombre del entrenador: " << endl;
                    cin.ignore();
                    getline(cin, entrenador);

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
                            cout << " Escogiste a Charmander!" << endl;
                            break;
                        case 2:
                            cout << " Escogiste a Squirtle!" << endl;
                            break;
                        case 3:
                            cout << " Escogiste a Bulbasaur!" << endl;
                            break;
                        default:
                            cout << "Opcion invalida!" << endl;
                            break;
                    }

                    cout << "Felicidades obtuviste tu primer Pokemon (Agregado al equipo)" << endl;

                    opc = Partida(entrenador, opPk);
                } else {
                    entrenador = nom;
                    // Recuperar el starter desde el equipo guardado
                    if (equipo[0] == 0) opPk = 1;
                    else if (equipo[0] == 3) opPk = 2;
                    else opPk = 3;
                    cout << "\n Presiona ENTER para continuar..." << endl;
                    cin.ignore();
                    cin.get();
                    opc = Partida(entrenador, opPk);
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
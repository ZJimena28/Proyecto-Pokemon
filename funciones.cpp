#include <iostream>
#include <windows.h>
#include "funcion.h"
using namespace std;

// ===================== DATOS DE LOS 8 POKEMON =====================


string nombresPokemon[8] = {
    "Charmander", "Pikachu", "Bulbasaur", "Squirtle",
    "Geodude", "Pidgey", "Caterpie", "Eevee"
};

string tiposPokemon[8] = {
    "Fuego", "Electrico", "Planta", "Agua",
    "Roca", "Volador", "Bicho", "Normal"
};

int hpMaxPokemon[8] = {
    60, 50, 60, 60,
    65, 55, 50, 60
};

string ataque1[8] = {
    "Aranazo", "Ataque Rapido", "Drenadoras", "Placaje",
    "Lanzarrocas", "Ataque Arena", "Ataque Sorpresa", "Placaje"
};

string tipoAtaque1[8] = {
    "Normal", "Normal", "Planta", "Normal",
    "Roca", "Normal", "Normal", "Normal"
};

int dano1[8] = {
    12, 12, 15, 12,
    16, 10, 10, 12
};

string ataque2[8] = {
    "Ascuas", "Impactrueno", "Derribar", "Pistola Agua",
    "Azote", "Tornado", "Picadura", "Mordisco"
};

string tipoAtaque2[8] = {
    "Fuego", "Electrico", "Normal", "Agua",
    "Normal", "Volador", "Bicho", "Normal"
};

int dano2[8] = {
    15, 15, 12, 15,
    10, 15, 12, 14
};

int lideresPokemon[5] = {1, 4, 5, 6, 7};

int numerosAleatorios[200];
int contadorAleatorio = 0;

// ===================== LECTURA DE DATOS ALEATORIOS =====================

void LeerAleatorios() {
    ifstream archivo("random.txt");
    int i = 0;
    int num;

    if (archivo.is_open()) {
        while (archivo >> num && i < 200) {
            numerosAleatorios[i] = num;
            i++;
        }
        archivo.close();
    }

    while (i < 200) {
        numerosAleatorios[i] = (i % 8) + 1;
        i++;
    }

    contadorAleatorio = 0;
}

int Aleatorio() {
    int valor = numerosAleatorios[contadorAleatorio];
    contadorAleatorio++;

    if (contadorAleatorio >= 200) {
        contadorAleatorio = 0;
    }

    return valor;
}

// ===================== MENU =====================

void MenuInicio() {
    SetConsoleOutputCP(CP_UTF8); 

    cout << "────────────────────────────────" << endl;
    cout << "|        MENU PRINCIPAL        |" << endl;
    cout << "| ── ---------------------- ── |" << endl;
    cout << "| 1. Cargar partida            |" << endl;
    cout << "| 2. Ver estadisticas pokemon  |" << endl;
    cout << "| 3. Tipos de pokemon          |" << endl;
    cout << "| 4. Salir                     |" << endl;
    cout << "────────────────────────────────" << endl;
}

// ===================== ESTADISTICAS =====================

void Estadisticas() {
    cout << "\033[1m" << "▻ Charmander 60 HP" << "\033[31m" << " (Fuego)" << "\033[0m" << endl;
    cout << "▸ Aranazo (Normal) ──> 12" << endl;
    cout << "▸ Ascuas " << "\033[31m" << "(Fuego) ──> 15" << "\033[0m" << endl;
    cout << "    " << endl;

    cout << "▻ Pikachu 50 HP" << "\033[34m" << " (Electrico)" << "\033[0m" << endl;
    cout << "▸ Ataque Rapido (Normal) ──> 12" << endl;
    cout << "▸ Impactrueno " << "\033[34m" << "(Electrico) ──> 15" << "\033[0m" << endl;
    cout << "    " << endl;

    cout << "▻ Bulbasaur 60 HP" << "\033[32m" << " (Planta)" << "\033[0m" << endl;
    cout << "▸ Drenadoras " << "\033[32m" << "(Planta) ──> 15" << "\033[0m" << endl;
    cout << "▸ Derribar (Normal) ──> 12" << endl;
    cout << "    " << endl;

    cout << "▻ Squirtle 60 HP" << "\033[36m" << " (Agua)" << "\033[0m" << endl;
    cout << "▸ Placaje (Normal) ──> 12" << endl;
    cout << "▸ Pistola Agua " << "\033[36m" << "(Agua) ──> 15" << "\033[0m" << endl;
    cout << "    " << endl;

    cout << "▻ Geodude 65 HP" << "\033[90m" << " (Roca)" << "\033[0m" << endl;
    cout << "▸ Lanzarrocas " << "\033[90m" << "(Roca) ──> 16" << "\033[0m" << endl;
    cout << "▸ Azote (Normal) ──> 10" << endl;
    cout << "    " << endl;

    cout << "▻ Pidgey 55 HP" << "\033[33m" << " (Volador)" << "\033[0m" << endl;
    cout << "▸ Ataque Arena (Normal) ──> 10" << endl;
    cout << "▸ Tornado " << "\033[33m" << "(Volador) ──> 15" << "\033[0m" << endl;
    cout << "    " << endl;

    cout << "▻ Caterpie 50 HP" << "\033[35m" << " (Bicho)" << "\033[0m" << endl;
    cout << "▸ Ataque Sorpresa (Normal) ──> 10" << endl;
    cout << "▸ Picadura " << "\033[35m" << "(Bicho) ──> 12" << "\033[0m" << endl;
    cout << "    " << endl;

    cout << "▻ Eevee 60 HP" << " (Normal)" << endl;
    cout << "▸ Placaje (Normal) ──> 12" << endl;
    cout << "▸ Mordisco (Normal) ──> 14" << endl;

    cout << "\n Presiona ENTER para volver...";
    cin.ignore();
    cin.get();
}

// ===================== OPCION POKEMON =====================

void OpcPokemon() {
    SetConsoleOutputCP(CP_UTF8); 
    cout << "────────────────────────────────" << endl;
    cout << "[    - Menu de Pokemons -      ]" << endl;
    cout << "|    1. Charmander             |" << endl;
    cout << "|    2. Squirtle               |" << endl;
    cout << "|    3. Bulbasaur              |" << endl;
    cout << "────────────────────────────────" << endl;
}

// ===================== TIPOS =====================

void Tipos() {
    SetConsoleOutputCP(CP_UTF8); 
    cout << "===============================================================" << endl;
    cout << "TIPO      DEBILIDADES                 EFICAZ CONTRA" << endl;
    cout << "===============================================================" << endl;
    cout << "Fuego     Agua, Roca                  Planta, Bicho" << endl;
    cout << "Agua      Planta, Electrico           Fuego, Roca" << endl;
    cout << "Planta    Fuego, Bicho                Agua, Roca" << endl;
    cout << "Electrico Ninguna                     Agua" << endl;
    cout << "Roca      Agua, Planta                Fuego, Bicho" << endl;
    cout << "Volador   Electrico, Roca             Planta, Bicho" << endl;
    cout << "Bicho     Fuego, Roca                 Planta" << endl;
    cout << "Normal    Ninguna                     Ninguna" << endl;
    cout << "===============================================================" << endl;

    cout << "\n Presiona ENTER para volver...";
    cin.ignore();
    cin.get();
}

// ===================== BARRA DE HP (ESTILO DEL PROYECTO) =====================

void mostrarHP(int hpJ, int hpR) {
    SetConsoleOutputCP(CP_UTF8); 
    cout << "────────────────────────────────────────" << endl;
    cout << "Tu HP [ ";
    for (int i = 10; i > 0; i--) {
        if (hpJ >= (11 - i) * 10) {
            cout << "\033[32m■\033[0m";
        } else {
            cout << "□";
        }
    }
    cout << " ]  ||  HP Rival [ ";
    for (int i = 10; i > 0; i--) {
        if (hpR >= (11 - i) * 10) {
            cout << "\033[31m■\033[0m";
        } else {
            cout << "□";
        }
    }
    cout << " ] " << endl;

    personajes();

    cout << "────────────────────────────────────────" << endl;
}

// ===================== PERSONAJES =====================

void personajes() {
    SetConsoleOutputCP(CP_UTF8); 
    cout << "\033[37;1m" << "  ●/                                 \\●" << endl;
    cout << "\033[37;1m" << " /||                                   ||\\" << endl;
    cout << "\033[37;1m" << "  /\\                                  /\\" << endl;
    cout << "\033[0m";
}

// ===================== EFICACIA DE TIPOS =====================

int Eficacia(string tipoAtaque, string tipoDefensor) {
    if (tipoAtaque == "Fuego") {
        if (tipoDefensor == "Planta" || tipoDefensor == "Bicho") return 2;
        if (tipoDefensor == "Agua" || tipoDefensor == "Roca") return 0;
    }
    if (tipoAtaque == "Agua") {
        if (tipoDefensor == "Fuego" || tipoDefensor == "Roca") return 2;
        if (tipoDefensor == "Planta" || tipoDefensor == "Electrico") return 0;
    }
    if (tipoAtaque == "Planta") {
        if (tipoDefensor == "Agua" || tipoDefensor == "Roca") return 2;
        if (tipoDefensor == "Fuego" || tipoDefensor == "Bicho") return 0;
    }
    if (tipoAtaque == "Electrico") {
        if (tipoDefensor == "Agua") return 2;
        if (tipoDefensor == "Roca") return 0;
    }
    if (tipoAtaque == "Roca") {
        if (tipoDefensor == "Fuego" || tipoDefensor == "Bicho") return 2;
        if (tipoDefensor == "Agua" || tipoDefensor == "Planta") return 0;
    }
    if (tipoAtaque == "Volador") {
        if (tipoDefensor == "Planta" || tipoDefensor == "Bicho") return 2;
        if (tipoDefensor == "Electrico" || tipoDefensor == "Roca") return 0;
    }
    if (tipoAtaque == "Bicho") {
        if (tipoDefensor == "Planta") return 2;
        if (tipoDefensor == "Fuego" || tipoDefensor == "Roca") return 0;
    }
    return 1;
}

// ===================== GUARDAR PARTIDA =====================

void GuardarPartida(string nombre, int equipo[], int tam, int vida, int lider) {
    ofstream archivo("partida.txt");

    if (archivo.is_open()) {
        archivo << nombre << endl;
        archivo << tam << endl;
        for (int i = 0; i < tam; i++) {
            archivo << equipo[i] << " ";
        }
        archivo << endl;
        archivo << vida << endl;
        archivo << lider << endl;
        archivo.close();
    }
}

// ===================== CARGAR PARTIDA =====================

bool CargarPartida(string &nombre, int equipo[], int &tam, int &vida, int &lider) {
    ifstream archivo("partida.txt");

    if (archivo.is_open()) {
        getline(archivo, nombre);
        archivo >> tam;
        for (int i = 0; i < tam; i++) {
            archivo >> equipo[i];
        }
        archivo >> vida;
        archivo >> lider;
        archivo.close();

        cout << "\nPartida cargada. Bienvenido de vuelta, " << nombre << "!" << endl;
        cout << "Lideres vencidos: " << lider << "/5" << endl;
        return true;
    }

    cout << "\nNo hay partida guardada. Iniciando nueva partida..." << endl;
    return false;
}

// ===================== PARTIDA (COMBATE + CICLO DE LIDERES) =====================

void Partida() {
    SetConsoleOutputCP(CP_UTF8); 
    int hpJ, hpR;
    int Lideres = 0;
    int dano = 0;
    bool jugador = true;
    bool turno = false;
    int idxStarter;
    int equipo[6];
    int tam = 0;
    int volver;
    int atk;
    int multi;

    // Asignar starter segun la eleccion de main.cpp
    if (opPk == 1) {
        idxStarter = 0; // Charmander
    } else if (opPk == 2) {
        idxStarter = 3; // Squirtle
    } else {
        idxStarter = 2; // Bulbasaur
    }

    cout << "    " << endl;
    cout << "────────────────────────────────────────" << endl;
    cout << entrenador << " vs LIGA VALDERRA" << endl;
    cout << "────────────────────────────────────────" << endl;

    equipo[0] = idxStarter;
    tam = 1;
    hpJ = hpMaxPokemon[idxStarter];

    // Ciclo de lideres
    while (Lideres < 5 && jugador) {

        if (!turno) {
            if (Lideres < 5) {
                cout << "Presiona ENTER para avanzar al siguiente lider: "
                     << nombresPokemon[lideresPokemon[Lideres]] << endl;
            } else {
                cout << "Presiona ENTER para continuar" << endl;
            }
            cin.ignore();
            cin.get();

            cout << "    " << endl;
            cout << "Todos los pokemones han sido restaurados al 100%" << endl;
        }

        hpR = hpMaxPokemon[lideresPokemon[Lideres]];

        mostrarHP(hpJ, hpR);

        // Combate por turnos
        bool combatiendo = true;

        while (combatiendo && jugador) {

            // TURNO DEL JUGADOR
            cout << "Tu turno de atacar!" << endl;
            cout << "    " << endl;
            cout << "───────────────────────────" << endl;
            cout << "   Ataques disponibles:    " << endl;
            cout << "   1. Ataque basico        " << endl;
            cout << "   2. Ataque especial      " << endl;
            cout << "───────────────────────────" << endl;
            cout << "    " << endl;

            // Mostrar info de ataque del pokemon actual
            int pj = equipo[0];
            cout << nombresPokemon[pj] << " > " << ataque1[pj] << " (" << tipoAtaque1[pj] << ") " << dano1[pj] << " dmg";
            cout << " | " << ataque2[pj] << " (" << tipoAtaque2[pj] << ") " << dano2[pj] << " dmg" << endl;
            cout << "    " << endl;

            cin >> atk;

            int pr = lideresPokemon[Lideres];

            if (atk == 1) {
                cout << "\n" << entrenador << "! " << nombresPokemon[pj] << " uso " << ataque1[pj] << "!" << endl;
                multi = Eficacia(tipoAtaque1[pj], tiposPokemon[pr]);
                dano = dano1[pj];
                if (multi == 2) { cout << "¡Es super eficaz!" << endl; dano = dano1[pj] * 2; }
                if (multi == 0) { cout << "No es muy efectivo..." << endl; dano = dano1[pj] / 2; }
            } else {
                cout << "\n" << entrenador << "! " << nombresPokemon[pj] << " uso " << ataque2[pj] << "!" << endl;
                multi = Eficacia(tipoAtaque2[pj], tiposPokemon[pr]);
                dano = dano2[pj];
                if (multi == 2) { cout << "¡Es super eficaz!" << endl; dano = dano2[pj] * 2; }
                if (multi == 0) { cout << "No es muy efectivo..." << endl; dano = dano2[pj] / 2; }
            }

            hpR = hpR - dano;
            cout << nombresPokemon[pr] << " pierde " << dano << " HP!" << endl;

            if (hpR <= 0) {
                hpR = 0;
                cout << "\n¡" << nombresPokemon[pr] << " ha sido derrotado!" << endl;
                Lideres++;
                combatiendo = false;
                turno = false;

                // Subir nivel: HP +10, dano +2
                pj = equipo[0];
                hpMaxPokemon[pj] = hpMaxPokemon[pj] + 10;
                dano1[pj] = dano1[pj] + 2;
                dano2[pj] = dano2[pj] + 2;
                cout << "¡" << nombresPokemon[pj] << " subio de nivel!" << endl;
                cout << "HP +10, Ataque +2" << endl;

                // Restaurar HP al nuevo maximo
                hpJ = hpMaxPokemon[pj];

                // Guardar
                GuardarPartida(entrenador, equipo, tam, hpJ, Lideres);

            } else {
                // TURNO DEL RIVAL
                int atkRival = (Aleatorio() % 2) + 1;
                string atkNombre, atkTipo;
                int atkDano;

                if (atkRival == 1) {
                    atkNombre = ataque1[pr];
                    atkTipo = tipoAtaque1[pr];
                    atkDano = dano1[pr];
                } else {
                    atkNombre = ataque2[pr];
                    atkTipo = tipoAtaque2[pr];
                    atkDano = dano2[pr];
                }

                cout << "\n" << nombresPokemon[pr] << " uso " << atkNombre << "!" << endl;
                multi = Eficacia(atkTipo, tiposPokemon[equipo[0]]);
                dano = atkDano;
                if (multi == 2) { cout << "¡Es super eficaz!" << endl; dano = atkDano * 2; }
                if (multi == 0) { cout << "No es muy efectivo..." << endl; dano = atkDano / 2; }

                hpJ = hpJ - dano;
                cout << nombresPokemon[equipo[0]] << " pierde " << dano << " HP!" << endl;

                if (hpJ <= 0) {
                    hpJ = 0;
                    jugador = false;
                    combatiendo = false;
                } else {
                    // Mostrar HP actualizado
                    mostrarHP(hpJ, hpR);
                }
            }
        }

        // Si el jugador perdio
        if (!jugador) {
            cout << "\n========== HAS SIDO DERROTADO ==========" << endl;
            cout << "Fin del camino, " << entrenador << "..." << endl;

            cout << "\nQuieres volver a jugar?" << endl;
            cout << "1. Si" << endl;
            cout << "2. No" << endl;
            cout << "Opcion: ";
            cin >> volver;

            while (volver < 1 || volver > 2) {
                cout << "Opcion invalida. Elige 1 o 2: ";
                cin >> volver;
            }

            if (volver == 1) {
                // Reiniciar
                Lideres = 0;
                jugador = true;
                turno = false;
                tam = 1;
                hpJ = hpMaxPokemon[idxStarter];
                equipo[0] = idxStarter;
                return 0;
            } else {
                cout << "\nGracias por jugar, hasta luego!!" << endl;
                return 4;
            }
        }
    }

    // Campeon
    if (Lideres == 5) {
        cout << "\n========================================" << endl;
        cout << "¡INCREIBLE!! ¡ERES EL CAMPEON!" << endl;
        cout << "Felicidades, " << entrenador << "!" << endl;
        cout << "========================================" << endl;

        cout << "\nTu equipo:" << endl;
        for (int i = 0; i < tam; i++) {
            cout << (i + 1) << ". " << nombresPokemon[equipo[i]];
            cout << " (" << tiposPokemon[equipo[i]] << ")" << endl;
        }

        cout << "\nQuieres volver a jugar?" << endl;
        cout << "1. Si" << endl;
        cout << "2. No" << endl;
        cout << "Opcion: ";
        cin >> volver;

        while (volver < 1 || volver > 2) {
            cout << "Opcion invalida. Elige 1 o 2: ";
            cin >> volver;
        }

        if (volver == 1) {
            Lideres = 0;
            jugador = true;
            turno = false;
            tam = 1;
            equipo[0] = idxStarter;
            hpJ = hpMaxPokemon[idxStarter];
            return 0;
        } else {
            cout << "\nGracias por jugar, hasta luego!!" << endl;
            return 4;
        }
    }
    return 0;
}

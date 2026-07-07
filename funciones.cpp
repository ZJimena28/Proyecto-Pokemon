#include <iostream>
#include "funcion.h" // o #include <funciones.h>
using namespace std;

void MenuInicio()
{
    cout << "────────────────────────────────" << endl;
    cout << "|        MENÚ PRINCIPAL        |" << endl;
    cout << "| ── ---------------------- ── |" << endl;
    cout << "| 1. Cargar partida            |" << endl;
    cout << "| 2. Ver estadisticas pokemon  |" << endl;
    cout << "| 3. Tipos de pokemon          |" << endl;
    cout << "| 4. Salir                     |" << endl;
    cout << "────────────────────────────────" << endl;
}

void Estadisticas()
{
    cout << "\033[1m" << "▻ Charmsnder 60 HP" << "\033[31m" << " (Fuego)" << "\033[0m" << endl;
    cout << "▸ Arañazo (Normal) ──> 12" << endl;
    cout << "▸ Ascuas " << "\033[31m" << "(Fuego)" << "\033[0m" << endl;

    cout << "    " << endl; // dejar espacio

    cout << "▻ Pikachu 50 HP" << "\033[34m" << " (Eléctrico)" << "\033[0m" << endl;
    cout << "▸ Ataque Rápido (Normal) ──> 12" << endl;
    cout << "▸ Impactrueno" << "\033[34m" << "(Eléctrico) ──> 15" << "\033[0m" << endl;

    cout << "    " << endl;

    cout << "▻ Bulbasar 60 HP" << "\033[32m" << " (Planta)" << "\033[0m" << endl;
    cout << "▸ Drenadora" << "\033[32m" << " (Planta) ──> 15" << "\033[0m" << endl;
    cout << "▸ Derribar (Normal) ──> 12" << endl;

    cout << "    " << endl;

    cout << "▻ Squirtle 60 HP" << "\033[36m" << "(Agua)" << "\033[0m" << endl;
    cout << "▸ Placaje (Normal) ──> 12" << endl;
    cout << "▸ Pistola de Agua " << "\033[36m" << "(Agua) ──> 15" << "\033[0m" << endl;

    cout << "    " << endl;

    cout << "▻ Geodude 65 HP" << "\033[90m" << "(Roca)" << "\033[0m" << endl;
    cout << "▸ Lanzarrocas" << "\033[90m" << " (Roca) ──> 16" << "\033[0m" << endl;
    cout << "▸ Azote (normal) ──> 10" << endl;

    cout << "    " << endl;

    cout << "▻ Pidgey 55 HP" << "\033[33m" << "(Volador)" << "\033[0m" << endl;
    cout << "▸ Ataque de arena (Normal) ──> 10" << endl;
    cout << "▸ Tornado " << "\033[33m" << "(Volador) ──> 15" << "\033[0m" << endl;

    cout << "    " << endl;

    cout << "▻ Caterpie 50 HP" << "\033[38m" << "(Bicho)" << "\033[0m" << endl;
    cout << "▸ Ataque de Sorpresa (Normal) ──> 10" << endl;
    cout << "▸ Picadura " << "\033[38m" << "(Bicho) ──> 12" << "\033[0m" << endl;

    cout << "    " << endl;

    cout << "▻ Eevee 60 HP" << "(Normal)" << endl;
    cout << "▸ Placaje (Normal) ──> 12" << endl;
    cout << "▸ Mordisco (Normal) ──> 14" << endl;
}

void OpcPokemon()
{
    cout << "────────────────────────────────" << endl;
    cout << "[    - Menú de Pokemons -      ]" << endl;
    cout << "|    1. Charmander             |" << endl;
    cout << "|    2. Squirtle               |" << endl;
    cout << "|    3. Bulbasaur              |" << endl;
    cout << "────────────────────────────────" << endl;
}

void mostrarHP(int hpJ, int hpR)
{

    cout << "────────────────────────────────────────" << endl;

    cout << "Tu HP [ ";

    for (int i = 10; i > 0; i--)
    {
        if (hpJ >= (11 - i) * 10)
        {
            cout << "■";
        }
        else
        {
            cout << "□";
        }
    }
    cout << " ]  ||  HP Rival [ ";

    cout << "HP Rival [ ";

    for (int i = 10; i > 0; i--)
    {
        if (hpR >= (11 - i) * 10)
        {
            cout << "■";
        }
        else
        {
            cout << "□";
        }
    }
    cout << " ] " << endl;

    personajes();

    cout << "────────────────────────────────────────" << endl;
}

void personajes()
{

    cout << "\033[37;1m" << "  ●/                                 \\●" << endl;
    cout << "\033[37;1m" << " /||                                   ||\\" << endl;
    cout << "\033[37; 1m" << "  /\\                                  /\\" << endl;
}

void Partida()
{

    int Lideres = 0, hpJ = 100, hpR = 80 + (Lideres * 10);
    int atk, dano = 0;
    bool jugador = true, turno = false; // el jugador esta vivo

    while (Lideres < 5 && jugador)
    {

        if (!turno)
        {
            cout << "Presiona ENTER para avanzar al siguiente líder" << endl;
            cin.ignore();
            cin.get(); // Esperamos el enter del jugador

            cout << "    " << endl;
            // RestaurarHP
            cout << "Todos los pokemones han sido resturados al 100%" << endl;
        }

        mostrarHP(hpJ, hpR);

        // Empieza el jugador a atacar
        cout << "Tu turno de atacar!" << endl;

        cout << "    " << endl;

        cout << "───────────────────────────" << endl;
        cout << "   Ataques disponibles:    " << endl;
        cout << "   1. Ataque basico        " << endl;
        cout << "   2. Ataque especial      " << endl;
        cout << "───────────────────────────" << endl;

        cout << "    " << endl;

        cin >> atk;

        switch (atk)
        {
        case 1:
            /* code */
            break;
        case 2:
            /* code */
            break;

        default:
            break;
        }
    }
}

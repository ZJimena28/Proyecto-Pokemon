#include <iostream>
#include "funcion.h" // o #include <funciones.h>
using namespace std;


void MenuInicio(){
    cout<<"────────────────────────────────"<<endl;
    cout<<"|        MENÚ PRINCIPAL        |"<<endl;
    cout<<"| ── ---------------------- ── |"<<endl;
    cout<<"| 1. Cargar partida            |"<<endl;
    cout<<"| 2. Ver estadisticas pokemon  |"<<endl;
    cout<<"| 3. Tipos de pokemon          |"<<endl;
    cout<<"| 4. Salir                     |"<<endl;
    cout<<"────────────────────────────────"<<endl;
}

void Estadisticas(){
    cout<< "\033[1m" <<"▻ Charmsnder 60 HP"<< "\033[31m" <<" (Fuego)"<< "\033[0m" <<endl;
    cout<<"▸ Arañazo (Normal) ──> 12"<<endl;
    cout<<"▸ Ascuas "<< "\033[31m"  <<"(Fuego)"<<"\033[0m"<<endl;

    cout<<"▻ Pikachu 50 HP"<< "\033[34m" << " (Eléctrico)" << "\033[0m" <<endl;
    cout<<"▸ Ataque Rápido (Normal) ──> 12"<<endl;
    cout<<"▸ Impactrueno" << "\033[34m" <<"(Eléctrico) ──> 15"<< "\033[0m" <<endl;

    cout<<"▻ Bulbasar 60 HP"<< "\033[32m" <<" (Planta)"<< "\033[0m" <<endl;
    cout<<"▸ Drenadora"<< "\033[32m" <<" (Planta) ──> 15"<< "\033[0m" <<endl;
    cout<<"▸ Derribar (Normal) ──> 12"<<endl;

    cout<<"▻ Squirtle 60 HP"<< "\033[36m" << "(Agua)"<< "\033[0m" <<endl;
    cout<<"▸ Placaje (Normal) ──> 12"<<endl;
    cout<<"▸ Pistola de Agua "<< "\033[36m" << "(Agua) ──> 15" <<"\033[0m" <<endl;

    cout<<"▻ Geodude 65 HP"<< "\033[90m" << "(Roca)"<< "\033[0m" <<endl;
    cout<<"▸ Lanzarrocas"<<"\033[90m"<< " (Roca) ──> 16" <<endl;
    cout<<"▸ Azote (normal) ──> 10"<<endl;

    cout<<"▻ Pidgey 55 HP"<<endl;

}





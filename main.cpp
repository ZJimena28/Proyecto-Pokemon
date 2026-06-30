#include <iostream>
#include "funcion.h"
#include <Windows.h>
using namespace std;


//variables declaradas
int opc, opPk;
string entrenador, pkelegido=" ";


int main(){
    SetConsoleOutputCP(CP_UTF8);

    cout<< "\033[1m" <<"BIENVENIDO A POKEMON RPG: LA LIGA VALDERRA"<<endl; 
    cout<<"  "<<endl; 

    MenuInicio();

    cout<<" Ingrese su seleccion: "<<endl;
    cin>> opc;

    switch (opc)
    {
    case 1:
        cout<<"Ingrese el nombre del entrenador: "<<endl;
        cin>> entrenador;

        cout<<"    "<<endl;
        cout<<" ── ------------------------ ── "<<endl;
        cout<<"     "<<endl;

        OpcPokemon();
        cout<<"    "<<endl;
        cout<<"¿Qué Pokemon eliges?"<<endl;
        cin>>opPk;
        cout<<"    "<<endl;

        switch (opPk)
        {
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
            cout<<"Opcion invalida!"<<endl;
            break;
        }

        cout<<"Felicidades obtuviste tu primer Pokemon (Agregado al equipo)"<<endl;

        //Empieza el juego
        Partida();

        break;

    case 2:
        Estadisticas();

        break;

    case 3:
        cout << "===============================================================" << endl;
    cout << "TIPO      DEBILIDADES                 EFICAZ CONTRA" << endl;
    cout << "===============================================================" << endl;

    cout << "Fuego     Agua, Roca                  Planta, Bicho" << endl;
    cout << "Agua      Planta, Electrico           Fuego, Roca" << endl;
    cout << "Planta    Fuego, Bicho                Agua, Roca" << endl;
    cout << "Electrico Ninguna                     Agua" << endl;
    cout << "Roca      Agua, Planta                Fuego, Bicho, Volador" << endl;
    cout << "Volador   Electrico, Roca             Planta, Bicho" << endl;
    cout << "Bicho     Fuego, Roca                 Planta" << endl;
    cout << "Normal    Ninguna                     Ninguna" << endl;

    cout << "===============================================================" << endl;
        break;
    
    case 4:
        /* code */
        break;

    default:
        cout<<"Error! Opcion invalida, debe ingresar un numero del 1 al 4"<<endl;
        break;
    }

    return 0;
}
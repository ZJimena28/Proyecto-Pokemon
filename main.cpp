#include <iostream>
#include <funcion.h>
#include <Windows.h>
using namespace std;

namespace Colores{
const std::string ROJO = "\033[0m";
const std::string NEGRITA = "\033[1m";
}

//variables declaradas
int opc;

int main(){
    SetConsoleOutputCP(CP_UTF8);

    cout<< Colores::NEGRITA <<"BIENVENIDO A POKEMON RPG: LA LIGA VALDERRA"<<endl; 

    MenuInicio();

    cout<<" Ingrese su seleccion: "<<endl;
    cin>> opc;

    switch (opc)
    {
    case 1:
        /* code */
        break;

    case 2:
        /* code */
        break;

    case 3:
        /* code */
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
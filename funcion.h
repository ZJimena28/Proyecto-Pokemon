#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int MAX_EQUIPO = 6;
const int TOTAL_POKEMON = 8;
const int NUM_LIDERES = 5;
const int TOTAL_NUMEROS = 200;

void MenuInicio();
void Estadisticas();
void Tipos();
void OpcPokemon();
int Partida(string entrenador, int opPk);
void mostrarHP(int hpJ, int hpR);
void personajes();
int Aleatorio();
int Eficacia(string tipoAtaque, string tipoDefensor);
void LeerAleatorios();
void GuardarPartida(string nombre, int equipo[], int tam, int vida, int lider);
bool CargarPartida(string &nombre, int equipo[], int &tam, int &vida, int &lider);

#endif

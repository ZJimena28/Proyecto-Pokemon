#ifndef FUNCIONES_H
#define FUNCIONES_H

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// Variables globales (declaradas en main.cpp)
extern int opc, opPk, atk;
extern string entrenador, pkelegido;

const int MAX_EQUIPO = 6;
const int TOTAL_POKEMON = 8;
const int NUM_LIDERES = 5;
const int TOTAL_NUMEROS = 200;

extern string nombresPokemon[8];
extern string tiposPokemon[8];
extern int hpMaxPokemon[8];
extern string ataque1[8];
extern string tipoAtaque1[8];
extern int dano1[8];
extern string ataque2[8];
extern string tipoAtaque2[8];
extern int dano2[8];

extern int lideresPokemon[5];

extern int numerosAleatorios[200];
extern int contadorAleatorio;

void MenuInicio();
void Estadisticas();
void Tipos();
void OpcPokemon();
void Partida();
void mostrarHP(int hpJ, int hpR);
void personajes();
int Aleatorio();
int Eficacia(string tipoAtaque, string tipoDefensor);
void LeerAleatorios();
void GuardarPartida(string nombre, int equipo[], int tam, int vida, int lider);
bool CargarPartida(string &nombre, int equipo[], int &tam, int &vida, int &lider);

#endif

/*Declarations regarding pokemon and their qualities*/

#ifndef POKEMON_DEC
#define POKEMON_DEC

#include<string>
#include<iostream>
#include<vector>
#include"MoveListClassDeclarations.h"
#include"PokemonClassDeclarations.h"
using namespace std;

void pokemonSelection(vector<Pokemon> &pokemon_class, int number);

void moveListSelection(vector<MoveList> &pokemon_move, int number);
#endif
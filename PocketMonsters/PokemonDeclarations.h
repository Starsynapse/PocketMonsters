/*Declarations regarding pokemon and their qualities*/

#ifndef POKEMON_DEC
#define POKEMON_DEC

#include<string>
#include<iostream>
#include<vector>
#include"ClassDeclarations.h"
using namespace std;

void pokemonSelection(vector<Pokemon> &pokemon_class, int number);

void moveListSelection(vector<MoveList> &move_class, int number);
#endif
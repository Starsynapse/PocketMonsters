/*Function Declarations*/

#ifndef FUNCTION_DEC
#define FUNCTION_DEC

#include"ClassDeclarations.h"

void createPokemon(vector<Pokemon> &pokemon_class, int type);

void nicknamePokemon(vector<Pokemon> &pokemon_class, string nickname);

void checkExpLvlUp(vector<Pokemon> &pokemon_class, int earned_exp);

void nicknamePokemonOption(vector<Pokemon> &pokemon_class);
#endif
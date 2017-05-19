//Define Functions

#include"FunctionDeclarations.h"

void createPokemon(vector<Pokemon> &pokemon_class, int type)
{
	pokemon_class.emplace_back();
	pokemon_class.back().which_pokemon(type);
}
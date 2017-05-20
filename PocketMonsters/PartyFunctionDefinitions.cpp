//Define Functions

#include"PartyFunctionDeclarations.h"

void createPokemon(vector<Pokemon> &pokemon_class, int type)
{
	pokemon_class.emplace_back();
	pokemon_class.back().which_pokemon(type);
}

void namePokemon(vector<Pokemon> &pokemon_class, string nickname)
{
	if (nickname != "")
	{
		pokemon_class.back().setNickname(nickname);
	}
}

void checkExpLvlUp(vector<Pokemon> &pokemon_class, int earned_exp)
{
	pokemon_class.back().addExperience(earned_exp);
	while (pokemon_class.back().getExperience() >= pokemon_class.back().getExpLvlUp())
	{
		pokemon_class.back().addLevel();
		pokemon_class.back().changeExpLvlUp();
	}
}


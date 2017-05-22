/*Pokemon Declarations*/
#include"PokemonDeclarations.h"

void pokemonSelection(vector<Pokemon> &pokemon_class, int number)
{
	if (number == 1)
	{
		pokemon_class.back().setName("Bulbasaur");
		pokemon_class.back().setNickname("Bulbasaur");

		pokemon_class.back().setHealthPoints(45);
		pokemon_class.back().setAttack(49);
		pokemon_class.back().setDefense(49);
		pokemon_class.back().setSpecialAttack(65);
		pokemon_class.back().setSpecialDefense(65);
		pokemon_class.back().setSpeed(45);


	}
	else if (number == 2)
	{
		pokemon_class.back().setName("Charmander");
		pokemon_class.back().setNickname("Charmander");

		pokemon_class.back().setHealthPoints(39);
		pokemon_class.back().setAttack(52);
		pokemon_class.back().setDefense(43);
		pokemon_class.back().setSpecialAttack(60);
		pokemon_class.back().setSpecialDefense(50);
		pokemon_class.back().setSpeed(65);
	}
	else
	{
		pokemon_class.back().setName("Squirtle");
		pokemon_class.back().setNickname("Squirtle");

		pokemon_class.back().setHealthPoints(44);
		pokemon_class.back().setAttack(48);
		pokemon_class.back().setDefense(65);
		pokemon_class.back().setSpecialAttack(50);
		pokemon_class.back().setSpecialDefense(64);
		pokemon_class.back().setSpeed(43);
	}
}
/*Define functions that edit pokemon party object values*/

#include"PartyFunctionDeclarations.h"
#include"PokemonDeclarations.h"

void createPokemon(vector<Pokemon> &pokemon_class, int type)
{
	pokemon_class.emplace_back();
	//pokemon_class.back().which_pokemon(type);
	pokemonSelection(pokemon_class, type);
}

void nicknamePokemon(vector<Pokemon> &pokemon_class, string nickname)
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
	}
}

void nicknamePokemonOption(vector<Pokemon> &pokemon_class)
{
	char yes_no;
	string nickname_pokemon;

	cout << "Would you like to give " << pokemon_class.back().getName() << " a nickname? (y/n)" << endl;
	cin >> yes_no;
	if (yes_no == 'y')
	{
		cout << "Insert the nickname for " << pokemon_class.back().getName() << ": ";
		cin >> nickname_pokemon;
		nicknamePokemon(pokemon_class , nickname_pokemon);
		cout << "You've given " << pokemon_class.back().getName() << " the nickname: " << pokemon_class.back().getNickname() << ".\n";
	}
	system("pause");
	system("cls");
}
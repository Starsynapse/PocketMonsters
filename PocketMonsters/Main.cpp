/*Project Name: PocketMonsters
Author: Eduardo Zamora
Date Created: 18 May 2017
Date Edited: 18 May 2017*/

#include"PartyFunctionDeclarations.h"
#include"PartyClassDeclarations.h"
#include"BattleDeclarations.h"
using namespace std;

int main()
{
	//initialization of variables and vectors
	vector<Pokemon> player_pokemon;
	vector<Pokemon> rival_pokemon;
	int choices;
	char yes_no;
	string nickname_pokemon;
	int earned_exp;

	//introduction
	cout << "Hello There! Welcome to the world of pokemon!\n";
	system("pause");
	system("cls");
	cout << "My name is Bonsai! People call me the pokemon prof!\n";
	system("pause");
	system("cls");
	cout << "This world is inhabited by creatures called pokemon!\n";
	system("pause");
	system("cls");
	cout << "Now pick one!\n";
	cout << "1 : Bulbasaur\n";
	cout << "2 : Charmander\n";
	cout << "3 : Squirtle\n";

	//pokemon choice
	cin >> choices;
	createPokemon(player_pokemon, choices);
	system("cls");

	//option to nickname starter
	nicknamePokemonOption(player_pokemon);
	cout << "Now that you have chosen your pokemon you will now battle your rival.\n";
	system("pause");
	system("cls");

	//testing


	cout << "EXP to be earned: ";
	cin >> earned_exp;
	checkExpLvlUp(player_pokemon, earned_exp);
	endOfBattleText(player_pokemon, earned_exp);
	cout << player_pokemon.back().getSpecialDefense() << endl;

	system("pause");
	return 0;
}
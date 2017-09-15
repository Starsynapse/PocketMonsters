/*Project Name: PocketMonsters
Author: Eduardo Zamora
Date Created: 18 May 2017
Date Edited: 18 May 2017*/

#include "PartyFunctionDeclarations.h"
#include "ClassDeclarations.h"
#include "BattleDeclarations.h"
#include "PokemonDeclarations.h"
#include <cstdlib>
#include <ctime> // for "srand" and "time"
using namespace std;

int main()
{
	//initialization of variables and vectors
	vector<Pokemon> player_pokemon;
	vector<Pokemon> rival_pokemon;
	int choices;
	int rival_choices;
	char yes_no;
	string nickname_pokemon;
	int earned_exp;

	srand(time(NULL));

	//introduction & pick starter text
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

	//starter choice
	cin >> choices;
	createPokemon(player_pokemon, choices);
	system("cls");

	//option to nickname starter
	nicknamePokemonOption(player_pokemon);
	cout << "Now that you have chosen your pokemon you will now battle your rival.\n";
	system("pause");
	system("cls");

	//rival chooses pokemon
	rival_choices = (choices % 3) + 1;
	createPokemon(rival_pokemon, rival_choices);

	//testing
	

	cout << "you go first." << endl;
	cout << "Player hp: " << player_pokemon.back().getHealthPoints() << endl;
	cout << "Rival hp: " << rival_pokemon.back().getHealthPoints() << endl;
	mainBattleLoop(player_pokemon, rival_pokemon);
	cout << "Player hp: " << player_pokemon.back().getHealthPoints() << endl;
	cout << "Rival hp: " << rival_pokemon.back().getHealthPoints() << endl;
	system("pause");
	system("cls");
	
	vector<MoveList> moveing;
	moveing.emplace_back();
	moveListSelection(moveing, 10);
	player_pokemon.back().setMoveList(moveing, 1);
	cout << "middle" << endl;
	//cout << player_pokemon.back().getMoveList().back().getName();

	system("pause");
	cout << "Before" << endl;
	createMove(player_pokemon, 10);
	cout << "After" << endl;

	system("pause");//hack microsoft
	activeMoveSet(player_pokemon.back().getMoveList());
	cout << endl;

	cout << "EXP to be earned: ";
	cin >> earned_exp;
	checkExpLvlUp(player_pokemon, earned_exp);
	endOfBattleText(player_pokemon, earned_exp);
	cout << player_pokemon.back().getSpecialDefense() << endl;
	
	system("pause");
	return 0;
}
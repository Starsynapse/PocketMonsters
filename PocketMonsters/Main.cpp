/*Project Name: PocketMonsters
Author: Eduardo Zamora
Date Created: 18 May 2017
Date Edited: 18 May 2017*/

#include"FunctionDeclarations.h"
#include"ClassDeclarations.h"
#include<vector>
#include<chrono>
#include<thread>
#include<iostream>
using namespace std;

int main()
{
	/*
	vector<Pokemon> pokemon;

	int number_of_pokemon;
	cin >> number_of_pokemon;

	pokemon.resize(number_of_pokemon);
	cout << "Size: " << pokemon.size() << endl;

	string give_nickname;
	cout << "Give Pokemon a nickname: ";
	cin >> give_nickname;
	pokemon[0].setNickname(give_nickname);
	cout << "Nickname: " << pokemon[0].getNickname() << endl;
	*/

	vector<Pokemon> player_pokemon;
	vector<Pokemon> rival_pokemon;
	int choices;
	char yes_no;

	string nickname_pokemon;

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
	cout << "2 : Squirtle\n";
	cout << "3 : Charmander\n";

	cin >> choices;
	createPokemon(player_pokemon, choices);
	system("cls");

	cout << "Would you like to give " << player_pokemon.back().getName() << " a nickname? (y/n)" << endl;
	cin >> yes_no;
	if (yes_no == 'y')
	{
		cout << "Insert the nickname for " << player_pokemon.back().getName() << ": ";
		cin >> nickname_pokemon;
		namePokemon(player_pokemon, nickname_pokemon);
		cout << "You've given " << player_pokemon.back().getName() << " the nickname: " << player_pokemon.back().getNickname() << ".\n";
	}
	system("cls");

	cout << "Now that you have chosen your pokemon you will now battle your rival.\n";
	system("pause");
	system("cls");

	//battle system

	system("pause");
	return 0;
}
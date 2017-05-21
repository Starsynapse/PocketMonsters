/*Definitions for frequent cout statements
involving the party class*/

#include"PartyCoutDeclarations.h"

void endOfBattleText(vector<Pokemon> &pokemon_class, int earned_exp)
{
	cout << pokemon_class.back().getNickname() << " earned " << earned_exp << " exp!\n";
	cout << "EXP: " << pokemon_class.back().getExperience() << endl;
	cout << "Exp for LVL up: " << (pokemon_class.back().getExpLvlUp() - pokemon_class.back().getExperience()) << endl;
	cout << "New EXP target: " << pokemon_class.back().getExpLvlUp() << endl;
	cout << "LVL: " << pokemon_class.back().getLevel() << endl;
}
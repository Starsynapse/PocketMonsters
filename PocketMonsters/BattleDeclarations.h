/*Declarations for frequent cout statements
involving the paarty class*/

#ifndef COUT_DEC
#define COUT_DEC

#include<vector>
#include"ClassDeclarations.h"
using namespace std;

void endOfBattleText(vector<Pokemon> &pokemon_class, int earned_exp);

void battleText(vector<Pokemon> &pokemon_player_class, vector<Pokemon> &pokemon_enemy_class);

void damageCalculation(vector<Pokemon> &pokemon_attack_class, vector<Pokemon> &pokemon_defence_class);

int calculateTurnOrder(vector<Pokemon> &pokemon_player_class, vector<Pokemon> &pokemon_enemy_class);

void mainBattleLoop(vector<Pokemon> &pokemon_player_class, vector<Pokemon> &pokemon_enemy_class);

void selectMove(vector<Pokemon> &pokemon_payer_class, int which);
#endif COUT_DEC
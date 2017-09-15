/*Definitions for frequent cout statements
involving the party class*/

#include"BattleDeclarations.h"

void endOfBattleText(vector<Pokemon> &pokemon_class, int earned_exp)
{
	cout << pokemon_class.back().getNickname() << " earned " << earned_exp << " exp!\n";
	cout << "EXP: " << pokemon_class.back().getExperience() << endl;
	cout << "Exp for LVL up: " << (pokemon_class.back().getExpLvlUp() - pokemon_class.back().getExperience()) << endl;
	cout << "New EXP target: " << pokemon_class.back().getExpLvlUp() << endl;
	cout << "LVL: " << pokemon_class.back().getLevel() << endl;
}

void battleText(vector<Pokemon> &pokemon_player_class, vector<Pokemon> &pokemon_enemy_class)
{
	cout << pokemon_player_class.back().getNickname() << " has " << pokemon_player_class.back().getHealthPoints() << " hp." << endl;
	cout << pokemon_enemy_class.back().getName() << " has " << pokemon_enemy_class.back().getHealthPoints() << " hp." << endl;
}

void damageCalculation(vector<Pokemon> &pokemon_attack_class, vector<Pokemon> &pokemon_defence_class)
{
	int damage = pokemon_attack_class.back().getAttack();
	int defence = pokemon_defence_class.back().getDefense();
	int net_damage = damage - defence;
	pokemon_defence_class.back().dealDamage(net_damage);
	system("pause");//hacking microsoft
}

int calculateTurnOrder(vector<Pokemon> &pokemon_player_class, vector<Pokemon> &pokemon_enemy_class)
{
	if (pokemon_player_class.back().getSpeed() > pokemon_enemy_class.back().getSpeed())
	{
		return 0;
	}

	else if (pokemon_player_class.back().getSpeed() < pokemon_enemy_class.back().getSpeed())
	{
		return 1;
	}

	else
	{
		return rand() % 2;
	}
}

void selectMove(vector<Pokemon> &pokemon_payer_class, int which)
{
	cout << "What attack will you use" << endl;
	pokemon_payer_class.back().getMoveList();
}

void mainBattleLoop(vector<Pokemon> &pokemon_player_class, vector<Pokemon> &pokemon_enemy_class)
{
	int order = calculateTurnOrder(pokemon_player_class, pokemon_enemy_class);
	while (order < 2)
	{
		cout << pokemon_player_class.back().getHealthPoints() << endl;
		if (pokemon_player_class.back().getHealthPoints() <= 0 || pokemon_enemy_class.back().getHealthPoints() <= 0)
		{
			cout << "hp detected 0" << endl;
			break;
		}

		else if (order == 0)
		{
			
			damageCalculation(pokemon_player_class, pokemon_enemy_class);
		}

		else if (order == 1)
		{
			damageCalculation(pokemon_enemy_class, pokemon_player_class);
		}

		else
		{
			cout << "What the hell did you break?" << endl;
		}

		battleText(pokemon_player_class, pokemon_enemy_class);

		if (order == 0)
		{
			order = 1;
		}

		else
		{
			order = 0;
		}
	}
}

void activeMoveSet(vector<MoveList> player_pokemon_move_list)
//figuring stuff out
{
	cout << "1. " << player_pokemon_move_list.back().getName() << endl;
}

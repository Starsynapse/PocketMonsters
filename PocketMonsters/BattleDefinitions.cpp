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
	cout << "Your " << pokemon_player_class.back().getNickname() << " has " << pokemon_player_class.back().getHealthPoints() << " hp." << endl;
	cout << "Enemy Pokemon " << pokemon_enemy_class.back().getName() << " has " << pokemon_enemy_class.back().getHealthPoints() << " hp." << endl;
}

void damageCalculation(vector<Pokemon> &pokemon_attack_class, vector<Pokemon> &pokemon_defence_class, vector<MoveList> &pokemon_move)
{
	int level = pokemon_attack_class.back().getLevel();
	cout << "lol: " << pokemon_attack_class.back().getMoveOne() - 1 << endl;
	cout << "lol2: " << pokemon_move.at(9).getPower() << endl;
	cout << "lol3: " << pokemon_move.at(pokemon_attack_class.back().getMoveOne() - 1).getPower() << endl;
	int power = pokemon_move.at(pokemon_attack_class.back().getMoveOne() - 1).getPower();
	int attack = pokemon_attack_class.back().getAttack();
	int defense = pokemon_defence_class.back().getDefense();
	
	cout << "hi 1" << endl;
	int damage = ((((2 * level)/5)+2)*power*attack/defense)/50 + 2;
	cout << "damage: " << damage << endl;
	pokemon_defence_class.back().dealDamage(damage);
	
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

void selectMove(vector<Pokemon> &pokemon_player_class, vector<MoveList> &pokemon_move_class)
{
	int move_selected;
	cout << "Select move you want to use." << endl;
	cout << "1: " << pokemon_move_class.at(pokemon_player_class.back().getMoveOne() - 1).getName() << endl;
	cin >> move_selected;
	if (move_selected == 1)
	{
		cout << "move: " << pokemon_player_class.back().getMoveOne() << endl;
	}
}

void mainBattleLoop(vector<Pokemon> &pokemon_player_class, vector<Pokemon> &pokemon_enemy_class, vector<MoveList> &pokemon_moves)
{
	int order = calculateTurnOrder(pokemon_player_class, pokemon_enemy_class);
	int selected_move;
	while (order < 2)
	{
		cout << "meow: " << pokemon_player_class.back().getMoveOne() << endl;
		battleText(pokemon_player_class, pokemon_enemy_class);
		if (pokemon_player_class.back().getHealthPoints() <= 0 || pokemon_enemy_class.back().getHealthPoints() <= 0)
		{
			cout << "hp detected 0" << endl;
			break;
		}

		else if (order == 0)
		{
			cout << "zero: " << endl;
			selectMove(pokemon_player_class, pokemon_moves);
			damageCalculation(pokemon_player_class, pokemon_enemy_class, pokemon_moves);
		}

		else if (order == 1)
		{
			cout << "one: " << endl;
			damageCalculation(pokemon_enemy_class, pokemon_player_class, pokemon_moves);
		}

		else
		{
			cout << "What the hell did you break?" << endl;
		}

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

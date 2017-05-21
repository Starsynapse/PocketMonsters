
#include"PartyClassDeclarations.h"

Pokemon::Pokemon()
{
	exp_ = 0;
	lvl_ = 5;
	exp_lvlup_ = lvl_ * lvl_ * lvl_;
}

void Pokemon::which_pokemon(int type)
{
	if (type == 1)
	{
		name_ = "Bulbasaur";
		nickname_ = "Bulbasaur";
		hp_ = 45;
		attack_ = 49;
		defense_ = 49;
		sp_atk_ = 65;
		sp_def_ = 65;
		speed_ = 45;
	}
	else if (type == 2)
	{
		name_ = "Charmander";
		nickname_ = "Charmander";
		hp_ = 39;
		attack_ = 52;
		defense_ = 43;
		sp_atk_ = 60;
		sp_def_ = 50;
		speed_ = 65;
	}
	else
	{
		name_ = "Squirtle";
		nickname_ = "Squirtle";
		hp_ = 44;
		attack_ = 48;
		defense_ = 65;
		sp_atk_ = 50;
		sp_def_ = 64;
		speed_ = 43;
	}
}

string Pokemon::getName()
{
	return name_;
}

void Pokemon::setNickname(string nickname)
{
	nickname_ = nickname;
}

string Pokemon::getNickname()
{
	return nickname_;
}

void Pokemon::addExperience(int earned_exp) 
{
	exp_ = exp_ + earned_exp;
}

int Pokemon::getExperience()
{
	return exp_;
}

void Pokemon::addLevel()
{
	lvl_ = lvl_++;
}

int Pokemon::getLevel()
{
	return lvl_;
}

void Pokemon::changeExpLvlUp()
{
	exp_lvlup_ = lvl_ * lvl_ * lvl_;
}

int Pokemon::getExpLvlUp()
{
	return exp_lvlup_;
}


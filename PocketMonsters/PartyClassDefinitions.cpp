
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
	}
	else if (type == 2)
	{
		name_ = "Squirtle";
		nickname_ = "Squirtle";
	}
	else
	{
		name_ = "Charmander";
		nickname_ = "Charmander";
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
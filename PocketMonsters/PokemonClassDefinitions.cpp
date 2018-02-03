
#include"PokemonClassDeclarations.h"

Pokemon::Pokemon()
{
	exp_ = 0;
	lvl_ = 5;
	exp_lvlup_ = lvl_ * lvl_ * lvl_;
}

void Pokemon::setName(string name)
{
	name_ = name;
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
	changeExpLvlUp();
}

int Pokemon::getLevel()
{
	return lvl_;
}

int Pokemon::getExpLvlUp()
{
	return exp_lvlup_;
}

void Pokemon::setHealthPoints(int health)
{
	hp_ = health;
}

int Pokemon::getHealthPoints()
{
	return hp_;
}

void Pokemon::setAttack(int attack)
{
	attack_ = attack;
}

int Pokemon::getAttack()
{
	return attack_;
}
void Pokemon::setDefense(int defense)
{
	defense_ = defense;
}

int Pokemon::getDefense()
{
	return defense_;
}

void Pokemon::setSpecialAttack(int sp_attack)
{
	sp_atk_ = sp_attack;
}

int Pokemon::getSpecialAttack()
{
	return sp_atk_;
}

void Pokemon::setSpecialDefense(int sp_defence)
{
	sp_def_ = sp_defence;
}

int Pokemon::getSpecialDefense()
{
	return sp_def_;
}

void Pokemon::setSpeed(int speed)
{
	speed_ = speed;
}

int Pokemon::getSpeed()
{
	return speed_;
}

void Pokemon::dealDamage(int damage_dealt)
{
	hp_ = hp_ - damage_dealt;
}

void Pokemon::setMoveOne(int move_one)
{
	move_one_ = move_one;
}

int Pokemon::getMoveOne()
{
	return move_one_;
}

void Pokemon::setMoveTwo(int move_two)
{
	move_two_ = move_two;
}

int Pokemon::getMoveTwo()
{
	return move_two_;
}

void Pokemon::setMoveThree(int move_three)
{
	move_three_ = move_three;
}

int Pokemon::getMoveThree()
{
	return move_three_;
}

void Pokemon::setMoveFour(int move_four)
{
	move_four_ = move_four;
}

int Pokemon::getMoveFour()
{
	return move_four_;
}

void Pokemon::changeExpLvlUp()
{
	exp_lvlup_ = lvl_ * lvl_ * lvl_;
}

#include"ClassDeclarations.h"

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
/*
const Pokemon operator -(Pokemon& pokemon_class_attacker, Pokemon& pokemon_class_defender)
{
	int damage = pokemon_class_attacker.getAttack() + pokemon_class_attacker.getSpecialAttack();
	int damage_reduction = pokemon_class_defender.getDefense() + pokemon_class_defender.getSpecialDefense();
	int net_damage = damage - damage_reduction;
	pokemon_class_defender.set() = pokemon_class_defender.hp_ - net_damage;
}
*/
void Pokemon::changeExpLvlUp()
{
	exp_lvlup_ = lvl_ * lvl_ * lvl_;
}
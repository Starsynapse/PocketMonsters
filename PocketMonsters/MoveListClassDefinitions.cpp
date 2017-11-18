/*Definitions for the functions in the
MoveList class*/
#include"ClassDeclarations.h"

void MoveList::setNumber(int number)
{
	number_ = number;
}

int MoveList::getNumber()
{
	return number_;
}

void MoveList::setName(string move_name)
{
	name_ = move_name;
}
string MoveList::getName()
{
	return name_;
}
void MoveList::setCategory(string category)
{
	category_ = category;
}
string MoveList::getCategory()
{
	return category_;
}
void MoveList::setType(string attack_type)
{
	type_ = attack_type;
}
string MoveList::getType()
{
	return type_;
}
void MoveList::setPower(int power)
{
	power_ = power;
}
int MoveList::getPower()
{
	return power_;
}
void MoveList::setAccuracy(int accuracy)
{
	accuracy_ = accuracy;
}
int MoveList::getAccuracy()
{
	return accuracy_;
}
void MoveList::setPowerPoints(int pp)
{
	pp_ = pp;
}
int MoveList::getPowerPoints()
{
	return pp_;
}
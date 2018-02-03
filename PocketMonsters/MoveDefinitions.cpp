/*Definitions for all possible pokemon moves*/
#include"MoveListClassDeclarations.h"

void moveListSelection(vector<MoveList> &move_class, int number)
{
	if (number == 10)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Scratch");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Normal");
		move_class.at(number - 1).setPower(40);
		move_class.at(number - 1).setAccuracy(100);
		move_class.at(number - 1).setPowerPoints(35);
	}

	else if (number == 33)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Takle");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Normal");
		move_class.at(number - 1).setPower(40);
		move_class.at(number - 1).setAccuracy(100);
		move_class.at(number - 1).setPowerPoints(35);
	}
}
/*Definitions for all possible pokemon moves*/
#include"ClassDeclarations.h"

void moveListSelection(vector<MoveList> &move_class, int number)
{
	if (number == 10)
	{
		move_class.back().setName("Scratch");
		move_class.back().setCategory("Physical");
		move_class.back().setType("Normal");
		move_class.back().setPower(40);
		move_class.back().setAccuracy(100);
		move_class.back().setPowerPoints(35);
	}

	else if (number == 33)
	{
		move_class.back().setName("Takle");
		move_class.back().setCategory("Physical");
		move_class.back().setType("Normal");
		move_class.back().setPower(40);
		move_class.back().setAccuracy(100);
		move_class.back().setPowerPoints(35);
	}
}
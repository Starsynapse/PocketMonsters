/*Definitions for all possible pokemon moves*/
#include"ClassDeclarations.h"

MoveList moveListSelection(vector<MoveList> &move_class, int number)
{
	move_class.emplace_back();
	if (number == 33)
	{
		move_class.back().setName("Takle");
		move_class.back().setCategory("Physical");
		move_class.back().setType("Normal");
		move_class.back().setPower(40);
		move_class.back().setAccuracy(100);
		move_class.back().setPowerPoints(35);
	}

	return move_class.back();
}
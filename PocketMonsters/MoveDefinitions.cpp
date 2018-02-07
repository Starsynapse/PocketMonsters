/*Definitions for all possible pokemon moves*/
#include"MoveListClassDeclarations.h"

void moveListSelection(vector<MoveList> &move_class, int number)
{
	if (number == 1)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Pound");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Normal");
		move_class.at(number - 1).setPower(40);
		move_class.at(number - 1).setAccuracy(100);
		move_class.at(number - 1).setPowerPoints(35);
	}

	else if (number == 2)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Karate Chop");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Fighting");
		move_class.at(number - 1).setPower(50);
		move_class.at(number - 1).setAccuracy(100);
		move_class.at(number - 1).setPowerPoints(25);
	}

	else if (number == 3)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Double Slap");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Normal");
		move_class.at(number - 1).setPower(15);
		move_class.at(number - 1).setAccuracy(85);
		move_class.at(number - 1).setPowerPoints(10);
	}

	else if (number == 4)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Comet Punch");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Normal");
		move_class.at(number - 1).setPower(18);
		move_class.at(number - 1).setAccuracy(85);
		move_class.at(number - 1).setPowerPoints(15);
	}

	else if (number == 5)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Mega Punch");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Normal");
		move_class.at(number - 1).setPower(80);
		move_class.at(number - 1).setAccuracy(85);
		move_class.at(number - 1).setPowerPoints(20);
	}

	else if (number == 6)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Pay Day");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Normal");
		move_class.at(number - 1).setPower(40);
		move_class.at(number - 1).setAccuracy(100);
		move_class.at(number - 1).setPowerPoints(20);
	}

	else if (number == 7)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Fire Punch");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Fire");
		move_class.at(number - 1).setPower(75);
		move_class.at(number - 1).setAccuracy(100);
		move_class.at(number - 1).setPowerPoints(15);
	}

	else if (number == 8)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Ice Punch");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Ice");
		move_class.at(number - 1).setPower(75);
		move_class.at(number - 1).setAccuracy(100);
		move_class.at(number - 1).setPowerPoints(15);
	}

	else if (number == 9)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Thunder Punch");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Electric");
		move_class.at(number - 1).setPower(75);
		move_class.at(number - 1).setAccuracy(100);
		move_class.at(number - 1).setPowerPoints(15);
	}

	else if (number == 10)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Scratch");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Normal");
		move_class.at(number - 1).setPower(40);
		move_class.at(number - 1).setAccuracy(100);
		move_class.at(number - 1).setPowerPoints(35);
	}

	else if (number == 11)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Vice Grip");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Normal");
		move_class.at(number - 1).setPower(55);
		move_class.at(number - 1).setAccuracy(100);
		move_class.at(number - 1).setPowerPoints(30);
	}

	else if (number == 12)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Guillotine");
		move_class.at(number - 1).setCategory("Physical");
		move_class.at(number - 1).setType("Normal");
		move_class.at(number - 1).setPower(120);
		move_class.at(number - 1).setAccuracy(30);
		move_class.at(number - 1).setPowerPoints(5);
	}

	else if (number == 13)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Razor Wind");
		move_class.at(number - 1).setCategory("Special");
		move_class.at(number - 1).setType("Normal");
		move_class.at(number - 1).setPower(80);
		move_class.at(number - 1).setAccuracy(100);
		move_class.at(number - 1).setPowerPoints(10);
	}

	else if (number == 14)
	{
		move_class.at(number - 1).setNumber(number);
		move_class.at(number - 1).setName("Swords Dance");
		move_class.at(number - 1).setCategory("Status");
		move_class.at(number - 1).setType("Normal");
		move_class.at(number - 1).setPower(0);
		move_class.at(number - 1).setAccuracy(0);
		move_class.at(number - 1).setPowerPoints(20);
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
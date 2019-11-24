
#include"PokemonClassDeclarations.h"
#include"MoveListClassDeclarations.h" //========== test =========

Pokemon::Pokemon()
{
	exp_ = 0;
	lvl_ = 5;
	exp_lvlup_ = lvl_ * lvl_ * lvl_;
	local_move_list_.resize(9);
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

//========= start test ==========

void Pokemon::setMoveVector(int number, int move_slot)
{
	moveListSelectionPrivate(local_move_list_ ,number, move_slot);
}

string Pokemon::getMoveName(int move)
{
	return local_move_list_.at(move).getName();
}

int Pokemon::getMovePower(int move)
{
	return local_move_list_.at(move).getPower();
}

void Pokemon::moveListSelectionPrivate(vector<MoveList> &move_class, int number, int move_slot)
{
	if (number == 1)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Pound");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(40);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(35);
	}

	else if (number == 2)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Karate Chop");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Fighting");
		move_class.at(move_slot).setPower(50);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(25);
	}

	else if (number == 3)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Double Slap");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(15);
		move_class.at(move_slot).setAccuracy(85);
		move_class.at(move_slot).setPowerPoints(10);
	}

	else if (number == 4)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Comet Punch");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(18);
		move_class.at(move_slot).setAccuracy(85);
		move_class.at(move_slot).setPowerPoints(15);
	}

	else if (number == 5)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Mega Punch");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(80);
		move_class.at(move_slot).setAccuracy(85);
		move_class.at(move_slot).setPowerPoints(20);
	}

	else if (number == 6)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Pay Day");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(40);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(20);
	}

	else if (number == 7)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Fire Punch");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Fire");
		move_class.at(move_slot).setPower(75);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(15);
	}

	else if (number == 8)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Ice Punch");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Ice");
		move_class.at(move_slot).setPower(75);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(15);
	}

	else if (number == 9)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Thunder Punch");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Electric");
		move_class.at(move_slot).setPower(75);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(15);
	}

	else if (number == 10)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Scratch");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(40);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(35);
	}

	else if (number == 11)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Vice Grip");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(55);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(30);
	}

	else if (number == 12)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Guillotine");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(120);
		move_class.at(move_slot).setAccuracy(30);
		move_class.at(move_slot).setPowerPoints(5);
	}

	else if (number == 13)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Razor Wind");
		move_class.at(move_slot).setCategory("Special");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(80);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(10);
	}

	else if (number == 14)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Swords Dance");
		move_class.at(move_slot).setCategory("Status");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(0);
		move_class.at(move_slot).setAccuracy(0);
		move_class.at(move_slot).setPowerPoints(20);
	}

	else if (number == 15)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Cut");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(50);
		move_class.at(move_slot).setAccuracy(95);
		move_class.at(move_slot).setPowerPoints(30);
	}

	else if (number == 16)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Gust");
		move_class.at(move_slot).setCategory("Special");
		move_class.at(move_slot).setType("Flying");
		move_class.at(move_slot).setPower(40);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(35);
	}

	else if (number == 17)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Wing Attack");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Flying");
		move_class.at(move_slot).setPower(40);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(35);
	}

	else if (number == 18)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Whirlwind");
		move_class.at(move_slot).setCategory("Status");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(100);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(20);
	}

	else if (number == 19)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Fly");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Flying");
		move_class.at(move_slot).setPower(90);
		move_class.at(move_slot).setAccuracy(95);
		move_class.at(move_slot).setPowerPoints(15);
	}

	else if (number == 20)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Bind");
		move_class.at(move_slot).setCategory("Pysical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(15);
		move_class.at(move_slot).setAccuracy(85);
		move_class.at(move_slot).setPowerPoints(20);
	}

	else if (number == 21)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Slam");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(80);
		move_class.at(move_slot).setAccuracy(75);
		move_class.at(move_slot).setPowerPoints(20);
	}

	else if (number == 22)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Vine Whip");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Grass");
		move_class.at(move_slot).setPower(45);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(25);
	}

	else if (number == 23)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Stomp");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(65);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(20);
	}

	else if (number == 24)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Double Kick");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Fighting");
		move_class.at(move_slot).setPower(30);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(30);
	}

	else if (number == 25)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Mega Kick");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(120);
		move_class.at(move_slot).setAccuracy(75);
		move_class.at(move_slot).setPowerPoints(5);
	}

    else if (number == 26)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Jump Kick");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Fighting");
        move_class.at(move_slot).setPower(100);
        move_class.at(move_slot).setAccuracy(95);
        move_class.at(move_slot).setPowerPoints(10);
    }

    else if (number == 27)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Rolling Kick");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Fighting");
        move_class.at(move_slot).setPower(60);
        move_class.at(move_slot).setAccuracy(85);
        move_class.at(move_slot).setPowerPoints(15);
    }

    else if (number == 28)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Sand Attack");
        move_class.at(move_slot).setCategory("Status");
        move_class.at(move_slot).setType("Ground");
        move_class.at(move_slot).setPower(0);
        move_class.at(move_slot).setAccuracy(100);
        move_class.at(move_slot).setPowerPoints(15);
    }

    else if (number == 29)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Headbutt");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Normal");
        move_class.at(move_slot).setPower(70);
        move_class.at(move_slot).setAccuracy(100);
        move_class.at(move_slot).setPowerPoints(15);
    }

    else if (number == 30)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Horn Attack");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Normal");
        move_class.at(move_slot).setPower(65);
        move_class.at(move_slot).setAccuracy(100);
        move_class.at(move_slot).setPowerPoints(25);
    }

    else if (number == 31)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Fury Attack");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Normal");
        move_class.at(move_slot).setPower(15);
        move_class.at(move_slot).setAccuracy(85);
        move_class.at(move_slot).setPowerPoints(20);
    }


    else if (number == 32)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Horn Drill");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Normal");
        move_class.at(move_slot).setPower(0);
        move_class.at(move_slot).setAccuracy(0);
        move_class.at(move_slot).setPowerPoints(5);
    }

	else if (number == 33)
	{
		move_class.at(move_slot).setNumber(number);
		move_class.at(move_slot).setName("Takle");
		move_class.at(move_slot).setCategory("Physical");
		move_class.at(move_slot).setType("Normal");
		move_class.at(move_slot).setPower(40);
		move_class.at(move_slot).setAccuracy(100);
		move_class.at(move_slot).setPowerPoints(35);
	}

    else if (number == 34)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Body Slam");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Normal");
        move_class.at(move_slot).setPower(85);
        move_class.at(move_slot).setAccuracy(100);
        move_class.at(move_slot).setPowerPoints(15);
    }

    else if (number == 35)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Wrap");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Normal");
        move_class.at(move_slot).setPower(15);
        move_class.at(move_slot).setAccuracy(90);
        move_class.at(move_slot).setPowerPoints(20);
    }

    else if (number == 36)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Take Down");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Normal");
        move_class.at(move_slot).setPower(90);
        move_class.at(move_slot).setAccuracy(85);
        move_class.at(move_slot).setPowerPoints(20);
    }

    else if (number == 37)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Thrash");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Normal");
        move_class.at(move_slot).setPower(120);
        move_class.at(move_slot).setAccuracy(100);
        move_class.at(move_slot).setPowerPoints(10);
    }

    else if (number == 38)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Double-Edge");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Normal");
        move_class.at(move_slot).setPower(120);
        move_class.at(move_slot).setAccuracy(100);
        move_class.at(move_slot).setPowerPoints(15);
    }

    else if (number == 39)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Tail Whip");
        move_class.at(move_slot).setCategory("Status");
        move_class.at(move_slot).setType("Normal");
        move_class.at(move_slot).setPower(0);
        move_class.at(move_slot).setAccuracy(100);
        move_class.at(move_slot).setPowerPoints(30);
    }

    else if (number == 40)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Poison Sting");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Poison");
        move_class.at(move_slot).setPower(15);
        move_class.at(move_slot).setAccuracy(100);
        move_class.at(move_slot).setPowerPoints(35);
    }

    else if (number == 41)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Twineedle");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Bug");
        move_class.at(move_slot).setPower(25);
        move_class.at(move_slot).setAccuracy(100);
        move_class.at(move_slot).setPowerPoints(20);
    }

    else if (number == 42)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Pin Missle");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Bug");
        move_class.at(move_slot).setPower(25);
        move_class.at(move_slot).setAccuracy(95);
        move_class.at(move_slot).setPowerPoints(20);
    }

    else if (number == 43)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Leer");
        move_class.at(move_slot).setCategory("Status");
        move_class.at(move_slot).setType("Normal");
        move_class.at(move_slot).setPower(0);
        move_class.at(move_slot).setAccuracy(100);
        move_class.at(move_slot).setPowerPoints(30);
    }

    else if (number == 44)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Bite");
        move_class.at(move_slot).setCategory("Physical");
        move_class.at(move_slot).setType("Dark");
        move_class.at(move_slot).setPower(60);
        move_class.at(move_slot).setAccuracy(100);
        move_class.at(move_slot).setPowerPoints(25);
    }

    else if (number == 45)
    {
        move_class.at(move_slot).setNumber(number);
        move_class.at(move_slot).setName("Growl");
        move_class.at(move_slot).setCategory("Status");
        move_class.at(move_slot).setType("Normal");
        move_class.at(move_slot).setPower(0);
        move_class.at(move_slot).setAccuracy(100);
        move_class.at(move_slot).setPowerPoints(40);
    }
}

//========= end test ==========
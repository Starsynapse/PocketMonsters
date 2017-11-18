/*Class Declarations*/

#ifndef CLASS_DEC
#define CLASS_DEC

#include<string>
#include<iostream>
#include<vector>
using namespace std;

class MoveList
{
public:
	void setNumber(int number);
	int getNumber();
	void setName(string move_name);
	string getName();
	void setCategory(string category);
	string getCategory();
	void setType(string type);
	string getType();
	void setPower(int power);
	int getPower();
	void setAccuracy(int accuracy);
	int getAccuracy();
	void setPowerPoints(int pp);
	int getPowerPoints();
private:
	int number_;
	string name_;
	string category_;
	string type_;
	int power_;
	int accuracy_;
	int pp_;
};


class Pokemon
{
public:
	Pokemon();
	void setName(string name);
	string getName();
	void setNickname(string nickname);
	string getNickname();
	void addExperience(int earned_exp);
	int getExperience();
	void addLevel();
	int getLevel();
	int getExpLvlUp();

	void setHealthPoints(int health);
	int getHealthPoints();
	void setAttack(int attack);
	int getAttack();
	void setDefense(int defense);
	int getDefense();
	void setSpecialAttack(int sp_attack);
	int getSpecialAttack();
	void setSpecialDefense(int sp_defence);
	int getSpecialDefense();
	void setSpeed(int speed);
	int getSpeed();

	void dealDamage(int damage_dealt);

	void setMoveOne(int move_one);
	int getMoveOne();
	void setMoveTwo(int move_two);
	int getMoveTwo();
	void setMoveThree(int move_three);
	int getMoveThree();
	void setMoveFour(int move_four);
	int getMoveFour();

private:
	string name_;
	string nickname_;
	int exp_;
	int exp_lvlup_;
	int lvl_;

	int hp_;
	int attack_;
	int defense_;
	int sp_atk_;
	int sp_def_;
	int speed_;

	void changeExpLvlUp();

	int move_one_;
	int move_two_;
	int move_three_;
	int move_four_;
};

#endif
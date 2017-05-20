/*Class Declarations*/

#ifndef CLASS_DEC
#define CLASS_DEC

#include<string>
#include<iostream>
#include<vector>
using namespace std;

class Pokemon
{
public:
	Pokemon();
	void which_pokemon(int type);
	string getName();
	void setNickname(string nickname);
	string getNickname();
	void addExperience(int earned_exp);
	int getExperience();
	void addLevel();
	int getLevel();
	void changeExpLvlUp();
	int getExpLvlUp();
private:
	string name_;
	string nickname_;
	int exp_;
	int exp_lvlup_;
	int lvl_;
};

#endif
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
	void which_pokemon(int type);
	string getName();
	void setNickname(string nickname);
	string getNickname();
private:
	string name_;
	string nickname_;
};

#endif
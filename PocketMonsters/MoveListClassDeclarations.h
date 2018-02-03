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

#endif
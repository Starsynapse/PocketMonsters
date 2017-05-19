
#include"ClassDeclarations.h"

void Pokemon::which_pokemon(int type)
{
	if (type == 1)
	{
		name_ = "Bulbasaur";
	}
	else if (type == 2)
	{
		name_ = "Squirtle";
	}
	else
	{
		name_ = "Charmander";
	}
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


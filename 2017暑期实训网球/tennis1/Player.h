#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
using namespace std;

class Player
{
public:
	string _name;
	string _sex;
	size_t _age;

	Player(const Player& p);
	Player() {}

	void Set(const  char *name, const  char *sex, size_t age);
	Player& operator = (Player p);
};

void Player::Set(const  char *name, const  char *sex, size_t age)
{
	_name = name;
	_sex = sex;
	_age = age;
}

Player& Player::operator = (Player p)
{
	swap(_name, p._name);
	swap(_age, p._age);
	swap(_sex, p._sex);
	return *this;
}

Player::Player(const Player& p)
{
	if (this != &p)
	{
		_name = p._name;
		_sex = p._sex;
		_age = p._age;
	}
}

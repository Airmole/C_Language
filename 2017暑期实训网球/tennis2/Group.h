#include"Player.h"
class Group
{
public:
	void Match();
	void SetGroup(Player *p, size_t size);

	static void Match8_1(vector<Player>& _g1)
	{
		vector<Player> ret;
		cout << "第一轮比赛：" << endl;
		while (!_g1.empty())
		{
			Player p1 = _g1[_g1.size() - 1];
			_g1.pop_back();
			Player p2 = _g1[_g1.size() - 1];
			_g1.pop_back();
			if (IsVictory(&p1, &p2))
			{
				ret.push_back(p1);
			}
			else
				ret.push_back(p2);
		}
		cout << "\n第二轮比赛：" << endl;
		_g1 = ret;
		while (!_g1.empty())
		{
			Player p1 = _g1[_g1.size() - 1];
			_g1.pop_back();
			Player p2 = _g1[_g1.size() - 1];
			_g1.pop_back();
			if (IsVictory(&p1, &p2))
			{
				ret.push_back(p1);
			}
			else
				ret.push_back(p2);
		}
		cout << "\n第三轮比赛：" << endl;
		_g1 = ret;
		while (!_g1.empty())
		{
			Player p1 = _g1[_g1.size() - 1];
			_g1.pop_back();
			Player p2 = _g1[_g1.size() - 1];
			_g1.pop_back();
			if (IsVictory(&p1, &p2))
			{
				ret.push_back(p1);
			}
			else
				ret.push_back(p2);
		}
		_g1 = ret; 
	}
	void Match4_1(vector<Player> _g1);
	static bool IsVictory(const Player* p1, const Player* p2)
	{
		srand(rand());
		seek = rand() % 100;
		srand(seek);
//		seek += 100;
//		printf("seek = %d\n", seek);

		size_t points = 0;
		size_t p1Count = 0;
		size_t p2Count = 0;
		cout << p1->_name << "VS" << p2->_name << endl;
		if (rand() % 2)
			cout << p1->_name << "获得了先手！" << endl;
		else
			cout << p2->_name << "获得了先手！" << endl;
		while (p1Count != 6 && p2Count != 6)
		{
			if (rand() % 2)
				p1Count++;
			else
				p2Count++;
//			srand(rand());
		}
		if (p1Count == 5 || p2Count == 5)
		{
			cout << "进行了加时赛！" << endl;
			if (rand() % 2)
				p1Count++;
			else
				p2Count++;
			while (p1Count == p2Count)
			{
				if (rand() % 2)
					p1Count++;
				else
					p2Count++;
//				srand(rand());
			}
		}

		cout << p1->_name << ":" << p1Count << endl;
		cout << p2->_name << ":" << p2Count << endl;
		if (p1Count>p2Count)
		{
			cout << "恭喜" << p1->_name << "获得了胜利！" << endl;
			return true;
		}
		else
		{
			cout << "恭喜" << p2->_name << "获得了胜利！" << endl;
			return false;
		}

	}
protected:
	vector<Player> _g1;
	vector<Player> _g2;
	vector<Player> _g3;
	vector<Player> _g4;
};
void Group:: Match()
{
	Match8_1(_g1);
	Match8_1(_g2);
	Match8_1(_g3);
	Match8_1(_g4);
	_g1.push_back(_g2[0]);
	_g1.push_back(_g3[0]);
	_g1.push_back(_g4[0]);
	Match4_1(_g1);
}
void Group::SetGroup(Player *p, size_t size)
{
	size_t i = 0;
	srand(time(NULL));
	size_t SortSeek = rand() % 4;

//	printf("rand() % 4 = %d\n", rand() % 4);
//	printf("rand() % 4 = %d\n", rand() % 4);
//	printf("rand() % 4 = %d\n", rand() % 4);

	if (SortSeek == 0)
	{
		for (; i<size; i += 4)
		{
			_g1.push_back(p[i + 0]);
			_g2.push_back(p[i + 1]);
			_g3.push_back(p[i + 2]);
			_g4.push_back(p[i + 3]);
		}
	}
	else if (SortSeek == 1)
	{
		for (; i<size; i += 4)
		{
			_g2.push_back(p[i + 0]);
			_g3.push_back(p[i + 1]);
			_g4.push_back(p[i + 2]);
			_g1.push_back(p[i + 3]);
		}
	}
	else if (SortSeek == 2)
	{
		for (; i<size; i += 4)
		{
			_g3.push_back(p[i + 0]);
			_g4.push_back(p[i + 1]);
			_g1.push_back(p[i + 2]);
			_g2.push_back(p[i + 3]);
		}
	}
	else
	{
		for (; i<size; i += 4)
		{
			_g4.push_back(p[i + 0]);
			_g1.push_back(p[i + 1]);
			_g2.push_back(p[i + 2]);
			_g3.push_back(p[i + 3]);
		}
	}
}
void Group::Match4_1(vector<Player> _g1)
{
	vector<Player> ret;
	cout << "\n半决赛赛：" << endl;
	while (!_g1.empty())
	{
		Player p1 = _g1[_g1.size() - 1];
		_g1.pop_back();
		Player p2 = _g1[_g1.size() - 1];
		_g1.pop_back();
		if (IsVictory(&p1, &p2))
		{
			ret.push_back(p1);
		}
		else
			ret.push_back(p2);
	}
	cout << "\n决赛：" << endl;
	_g1 = ret;
	while (!_g1.empty())
	{
		Player p1 = _g1[_g1.size() - 1];
		_g1.pop_back();
		Player p2 = _g1[_g1.size() - 1];
		_g1.pop_back();
		if (IsVictory(&p1, &p2))
		{
			cout << "恭喜" << p1._name << "获得了冠军！\n" << endl;

		}
		else
			cout << "恭喜" << p2._name << "获得了冠军！\n" << endl;

	}
}
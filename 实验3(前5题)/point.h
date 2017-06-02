#include <iostream>
using namespace std;

class CPoint
{
private:
	static int count;//4步
public:
	CPoint()
	{
		count++;
	}
	~CPoint()
	{
		count--;
	}
	static void output()
	{

	}
};


/*
class CPoint
{
public:
	void init()
	{
		output();
	}
	static void output()
	{
	}
};
*/
/*
class CPoint
{
private:
	int m;
public:
	void init()
	{
	}
	static void output()
	{
		cout << m << endl;
	}
};

//四个箭头
//静态函数 -> 静态函数或数据
//非静态函数 ->静态函数或数据
//静态函数 -> 非静态函数或数据？
//非静态函数 ->非静态函数或数据

*/

/*
class CPoint
{
public:
	void init()//非静态成员函数,对象名
	{
	}
	static void output()//静态成员函数， 对象名、类名
	{
	}
};
*/

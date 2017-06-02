#include <iostream>
using namespace std;
class A
{
	int a;
public:
	A(int x) : a(x)  // 构造函数
	{
		cout << "construct A " << a << endl;
	}
 	~A()   // 析构函数
	{
		cout <<  "destruct A " << a << endl;
	}
};
class B : public A
{
private:
	int   b, c;
	const int d;
	A   x, y;
public:
	B(int v) : b(v), y(b+2), x(b+1), d(b), A(v) // 构造函数
	{
		c = v;
		cout << "construct B" << b <<" "  << c << " " << d << endl;
	}
	~B() // 析构函数
	{
		cout << "destruct B" << b <<" "  << c << " " << d << endl;
	}
};
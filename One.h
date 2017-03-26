#include <iostream>
using namespace std;
class Rectanle
{
private:
	int x,y,z;
public:
	Rectanle(int a=0,int b=0);
	Rectanle(const Rectanle&t);
	~Rectanle();
	void Display()
	{cout<<x<<","<<y<<","<<z<<endl;}
	void area()
	{z=x*y;}
};
Rectanle::Rectanle(int a, int b):x(a),y(b)
{
	cout<<a<<","<<b<<endl;
}
Rectanle::Rectanle(const Rectanle&t)
{
	x=t.x;
	y=t.y;
}
Rectanle::~Rectanle()
{
	cout<<"Destructor is active"<<endl;
}

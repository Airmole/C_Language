#include<iostream>
using namespace std;
class Point
{
private:
	int X,Y;
public:
	Point(int a=0,int b=0)    //带默认参数的构造函数
	{
		X=a;
		Y=b;
		cout<<"Initializing..."<<endl;    //Initializing初始化中...
	}
	Point(const Point &p);   //拷贝构造函数原型
	int GetX();
	int GetY();
	void Show()
	{
		cout<<"X="<<X<<",Y="<<Y<<endl;
	}
	~Point()           //析构函数
	{
		cout<<"delete..."<<X<<","<<Y<<endl;
	}
};
Point::Point(const Point &p)     //定义拷贝构造函数
{
	X=p.X;
	Y=p.Y;
	cout<<"Copy Initializing"<<endl;
}
void display(Point p)    //Point类的对象作为函数的形参
{
	p.Show();
}
void disp(Point &p)    //Point类的对象的引用作为函数的形参
{
	p.Show();
}
Point fun()     //函数的返回值为Point类的对象
{
	Point A(101,202);
	return A;
}

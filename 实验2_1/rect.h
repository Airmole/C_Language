#include<iostream>
using namespace std;
class Point
{
private:
	int X,Y;
public:
	Point(int a=0,int b=0)    //��Ĭ�ϲ����Ĺ��캯��
	{
		X=a;
		Y=b;
		cout<<"Initializing..."<<endl;    //Initializing��ʼ����...
	}
	Point(const Point &p);   //�������캯��ԭ��
	int GetX();
	int GetY();
	void Show()
	{
		cout<<"X="<<X<<",Y="<<Y<<endl;
	}
	~Point()           //��������
	{
		cout<<"delete..."<<X<<","<<Y<<endl;
	}
};
Point::Point(const Point &p)     //���忽�����캯��
{
	X=p.X;
	Y=p.Y;
	cout<<"Copy Initializing"<<endl;
}
void display(Point p)    //Point��Ķ�����Ϊ�������β�
{
	p.Show();
}
void disp(Point &p)    //Point��Ķ����������Ϊ�������β�
{
	p.Show();
}
Point fun()     //�����ķ���ֵΪPoint��Ķ���
{
	Point A(101,202);
	return A;
}

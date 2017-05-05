#include<iostream>
using namespace std;
#include<cmath>
class CTrigon
{
private:
	int a,b,c;		//abc为三边长，p为半周长。
	double p;
public:
	CTrigon();
	void Area();
};

CTrigon::CTrigon()
{
	int q = 0;
	do
	{
		cout << "即将创建一个新的三角形\n请依次输入三条边的值(注：a+b<c)" << endl;
		cin >> a >> b >> this->c;
		if((this->a+this->b>this->c)||(this->a+this->c>this->b)||(this->b+this->c>this->a))
			q = 1;
	}while(q == 0);
	p = (a + b + c) / 2;
}
void CTrigon::Area()
{
	double area = 0;
	area = sqrt(p*(p-a)*(p-b)*(p-c));
	cout << "三角形的面积是" << area << endl;
}


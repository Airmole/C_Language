#include<iostream>
using namespace std;
#include<cmath>
class CTrigon
{
private:
	int a,b,c;		//abcΪ���߳���pΪ���ܳ���
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
		cout << "��������һ���µ�������\n���������������ߵ�ֵ(ע��a+b<c)" << endl;
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
	cout << "�����ε������" << area << endl;
}


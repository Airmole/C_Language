#include "crect.h"
void main()
{
	CRect r("red",1,2,10,20);
	r.Draw();
	cout << "����ǣ�" << r.Area() <<endl;
	cout << "�ܳ��ǣ�" << r.Perimeter() <<endl;
	r.SetColor("blue");
	r.SetSize(10,20);
	r.MoveTo(50,50);
	r.Draw();
	cout << "������ǣ�" << r.Area() <<endl;
	cout << "�±߳��ǣ�" << r.Perimeter() << endl;
}

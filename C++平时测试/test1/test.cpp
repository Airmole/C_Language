#include "crect.h"
void main()
{
	CRect r("red",1,2,10,20);
	r.Draw();
	cout << "面积是：" << r.Area() <<endl;
	cout << "周长是：" << r.Perimeter() <<endl;
	r.SetColor("blue");
	r.SetSize(10,20);
	r.MoveTo(50,50);
	r.Draw();
	cout << "新面积是：" << r.Area() <<endl;
	cout << "新边长是：" << r.Perimeter() << endl;
}

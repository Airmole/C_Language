#include "circle.h"
void main()
{
    CCirle c(2,2,3,"red");
    c.Draw();
    cout << "����ǣ�" << c.Area() << endl;
    cout << "�ܳ��ǣ�" << c.Perimeter() << endl;
    c.SetCenter(1,2);
    c.SetColor("blue");
    c.SetRadius(4);
    c.Draw();
    cout << "������ǣ�" << c.Area() << endl;
    cout << "�±߳��ǣ�" << c.Perimeter() << endl;
}

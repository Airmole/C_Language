#include "circle.h"
void main()
{
    CCirle c(2,2,3,"red");
    c.Draw();
    cout << "面积是：" << c.Area() << endl;
    cout << "周长是：" << c.Perimeter() << endl;
    c.SetCenter(1,2);
    c.SetColor("blue");
    c.SetRadius(4);
    c.Draw();
    cout << "新面积是：" << c.Area() << endl;
    cout << "新边长是：" << c.Perimeter() << endl;
}

#include "rect.h"
void main()
{
    CRect r(1,1,5,6);
    r.Draw();
    cout << "周长是：" << r.Perimeter() <<endl;
}
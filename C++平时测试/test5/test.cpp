#include "point.h"
#include "rect.h"
#include <iostream>
using namespace std;
void main()
{
    CPoint p1(1,1),p2(4,5);
    CRect rect(p1,p2);
    cout << "Ãæ»ýÊÇ£º" << rect.Area() <<endl;
}
#include "point.h"
#include "line.h"
#include <iostream>
using namespace std;
void main()
{
    CPoint p1(1,1),p2(4,5);
    CLine line(p1,p2);
    cout << "³¤¶ÈÊÇ£º" << line.GetLength() <<endl;
}
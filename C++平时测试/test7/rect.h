#include "location.h"
#include <iostream>
using namespace std;
class CRect:public CLocation
{
    int width;
    int length;
public:
    CRect(int x,int y,int len,int wid):CLocation(x,y)
    {
        length = len;
        width = wid;
    }
    void Draw()
    {
        cout << "左上坐标是：(" << GetX() << "," << GetY() << ")" << endl;
        cout << "长和宽是：" << length << "," << width << endl;
    }
    int Perimeter()
    {
        return 2*(length+widtg);
    }
};
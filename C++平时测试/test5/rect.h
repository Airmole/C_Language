#include <cmath>
class CRect
{
private:
    CPoint ltop;
    CPoint rbottom;
public:
    CRect(CPoint p1,CPoint p2):ltop(p1),rbottom(p2)
    { }
    int Area()
    {
        int wid=ltop.GetY()-rbottom.GetY();
        int len=ltop.GetX()-rbottom.GetX();
        return fabs(wid)*fabs(len);
    }
};
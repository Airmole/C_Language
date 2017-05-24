#include "cmath"
class CLine
{
private:
    CPoint start;
    CPoint end;
public:
    CLine(CPoint p1,CPoint p2):start(p1),end(p2)
    { }
    double GetLength()
    {
        int x=start.GetX()-end.GetX();
        int y=start.GetY()-end.GetY();
		return sqrt(x*x+y*y);
    }
};
#include <iostream>
using namespace std;
class CPoint
{
private:
	int X;
	int Y;
public:
	 CPoint(int x=0, int y=0);
     CPoint(CPoint &p);
     int GetX();
     int GetY();
};
 CPoint::CPoint(int x, int y)
{
	X = x;
	Y = y;
} 
CPoint::CPoint(CPoint &p)
{
		X = p.X;
		Y = p.Y;
}
int CPoint:: GetX() 
{          return X;         }
int CPoint::GetY() 
{     	return Y;          }

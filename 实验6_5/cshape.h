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
class CShape
{
	char Color[10];
public:
	CShape(char *c)
	{
		strcpy(Color, c);
	}
	void Draw()
	{
		cout << "Draw a shape, color is"<< Color << endl;
	}
	void PrintColor()
	{
		cout << Color << endl;
	}
}; 
class CRect : public CShape
{
	CPoint   lt;      //×óÉÏ½Ç×ø±ê
	int length, width;       //³¤¿í
public:
	 CRect (CPoint s, int len, int wid, char *c) : CShape(c), lt(s)
	{  length = len;   width = wid;   } 
	void Draw()
	{
	   cout << "Draw a Rect at  leftTop  (" << lt.GetX() <<","<< lt.GetY()
	   	   << ") with length "<< length << ", width" << width
		  << " , color ";
        PrintColor();
	}
};

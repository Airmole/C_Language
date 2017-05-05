#include "iostream"
#include "CPoint.h"
#include "cmath"
using namespace std;
class CLine
{
	CPoint   start,end;
	double   length;
public:
	CLine(CPoint p1, CPoint p2):start(p1), end(p2)
	{
		int   x = end.GetX() - start.GetX() ;
		int   y = end.GetY() - start.GetY() ;
		length = sqrt(x*x + y*y );
		cout << "CLine ���캯��������" << endl;
	}
	~CLine()    {  cout << "CLine ��������������" << endl;   }    //��������������
	double GetLength(){    return  length;  }  
}; 

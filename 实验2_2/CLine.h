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
		cout << "CLine 构造函数被调用" << endl;
	}
	~CLine()    {  cout << "CLine 析构函数被调用" << endl;   }    //析构函数及调用
	double GetLength(){    return  length;  }  
}; 

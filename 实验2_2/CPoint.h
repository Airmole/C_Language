#include "iostream"
using namespace std;
class CPoint
{
    int X,Y;  
public:
	CPoint(CPoint &p) 
	{
		X=p.X;       
		Y=p.Y;
		cout<<"CPoint�������캯��������"<<endl;
		cout<<"("<<X<<","<<Y<<")"<<endl;
    }
    CPoint(int x=0, int y=0):X(x), Y(y)
	{
		cout<<"CPoint���캯��������"<<endl;
	}
	~CPoint() {  cout<<"CPoint��������������"<<endl; }
	int  GetX()	 {return X;}
	int  GetY()	 {return Y;}
}; 

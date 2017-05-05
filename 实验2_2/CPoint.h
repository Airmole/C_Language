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
		cout<<"CPoint拷贝构造函数被调用"<<endl;
		cout<<"("<<X<<","<<Y<<")"<<endl;
    }
    CPoint(int x=0, int y=0):X(x), Y(y)
	{
		cout<<"CPoint构造函数被调用"<<endl;
	}
	~CPoint() {  cout<<"CPoint析构函数被调用"<<endl; }
	int  GetX()	 {return X;}
	int  GetY()	 {return Y;}
}; 

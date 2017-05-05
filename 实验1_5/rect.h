#include<iostream>
using namespace std;
class CRect
{
private:
	char color[10];
	int left;
	int top;
	int length;
	int width;
public:
	void SetColor(char *c);
	void SetSize(int l,int w);
	void Move(int t,int l);
	void Draw();
    CRect();
};
class CPoint
{
	int x,y;
public:
	CPoint(int x=0, int y=0);
	~CPoint();
};
void CRect::SetColor(char *c)
{
	strcpy(color,c);
}
void CRect::SetSize(int l,int w)
{
	length=l;
	width=w;
}
void CRect::Move(int t,int l)
{
	top=t;
	left=l;
}
void CRect::Draw()
{
	cout<<"���Ͻǵ�����Ϊ��"<<left<<","<<top<<"��"<<endl;
	cout<<"���Ϳ�Ϊ��"<<length<<","<<width<<"��"<<endl;
	cout<<"��ɫ��"<<color<<endl;
}

CRect::CRect() 
{
	cout<<"���ù��캯��"<<endl;
    strcpy (color,"red");
	left=0;
	top=0;
	length=0;
	width=0;
}
/*
CPoint::~CPoint()
{
	cout<<"des"<<endl;
}
*/
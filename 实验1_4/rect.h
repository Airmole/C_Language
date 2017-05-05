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
	void point();//无参构造
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
	cout<<"左上角的坐标为（"<<left<<","<<top<<"）"<<endl;
	cout<<"长和宽为（"<<length<<","<<width<<"）"<<endl;
	cout<<"颜色是"<<color<<endl;
}
void CRect::point() 
{
	cout<<"引用构造函数"<<endl;
}
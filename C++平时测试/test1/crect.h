#include <iostream>
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
	CRect(char*c,int l,int t,int len,int wid);
	void SetColor(char*c);
	void SetSize(int len,int wid);
	void MoveTo(int l,int t);
	void Draw();
	int Area();
	int Perimeter();
};
CRect::CRect(char *c,int l,int t,int len,int wid)
{
	strcpy(color,c);
	left = l;
	top = t;
	length = len;
	width = wid;
}
void CRect::SetColor(char *c)
{
	strcpy (color,c);
}
void CRect::SetSize(int len,int wid)
{
	length = len;
	width = wid;
}
void CRect::MoveTo(int l,int t)
{
	left = l;
	top = t;
}
void CRect::Draw()
{
	cout << "长和宽是：" << length << "," << width << endl;
	cout << "坐标是：" << left << "," << top << endl;
	cout << "颜色是：" << color << endl;
}
int CRect::Area()
{
	return length*width;
}
int CRect::Perimeter()
{
	return 2*(length+width);
}

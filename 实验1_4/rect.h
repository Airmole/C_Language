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
	void point();//�޲ι���
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
void CRect::point() 
{
	cout<<"���ù��캯��"<<endl;
}
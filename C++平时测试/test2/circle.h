#include <iostream>
using namespace std;
class CCirle
{
    char color[10];
    int x;
    int y;
    int radius;
public:
    CCirle(int x,int y,int r,char *c);
    void SetCenter(int x,int y);
    void SetRadius(int r);
    void SetColor(char *c);
    void Draw();
    float Area();
    float Perimeter();
};
CCirle::CCirle(int x, int y,int r,char *c)
{
    this->x=x;
    this->y=y;
    radius = r;
    strcpy(color,c);
}
void CCirle::SetCenter(int x,int y)
{
    this->x=x;
    this->y=y;
}
void CCirle::SetRadius(int r)
{
    radius = r;
}
void CCirle::SetColor(char *c)
{
    strcpy(color,c);
}
void CCirle::Draw()
{
    cout << "颜色是：" << color << endl;
    cout << "圆心是：" << x << "," << y << endl;
    cout << "半径是：" << radius << endl;  
}
float CCirle::Area()
{
    return 3.14*radius*radius;
}
float CCirle::Perimeter()
{
    return 2*3.14*radius;
}

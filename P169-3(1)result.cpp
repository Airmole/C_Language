#include "iostream.h"
class CCircle
{
public:
    double r;
    CCircle()
    { r=0;}
    CCircle(double m_r)
    {
        r=m_r; s=0;
    }
    ~CCircle()
    { }
    double CalculateArea();
    void OutCircleArea();
private:
    double s;
};
class CCylinder:public CCircle
{
public:
    CCylinder(double m_R, double m_H);
    double CalcCylinderVolume();
    void OutVolume()
    { cout << "圆柱体体积=" << volume <<endl;}
    ~CCylinder(){}
protected:
    double high;
double volume;
};
//circleCylinder.cpp
#include "circlecylinder.h"
double CCircle::CalculateArea()
{
    s=3.1415926*r*r; return (s);
}
void CCircle::OutCircleArea()
{
    cout << "圆面积=" << s <<endl;
}
CCylinder::CCylinder(double m_R,double m_H):CCircle(m_R)
{high=m_H;}
double CCylinder ::CalcCylinderVolume()
{
    double v(0);
    v=CalculateArea();
    volume=v*=high;
    return (v);
}
//MainProg.cpp
#include "circlecylinder.h"
void main(void)
{
    CCircle x(10);
    class CCylinder y(10,10);
    x.CalculateArea();
    x.OutCircleArea();
    y.CalcCylinderVolume();
    y.OutVolume();
}
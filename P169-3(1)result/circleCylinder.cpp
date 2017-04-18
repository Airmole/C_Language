#include "circlecylinder.h"
double CCircle::CalculateArea()
{
    s=3.1415926*r*r; return (s);
}
void CCircle::OutCircleArea()
{
    cout << "Ô²Ãæ»ý=" << s <<endl;
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
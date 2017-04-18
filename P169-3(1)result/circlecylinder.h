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
    { cout << "Ô²ÖùÌåÌå»ý=" << volume <<endl;}
    ~CCylinder(){}
protected:
    double high;
double volume;
};
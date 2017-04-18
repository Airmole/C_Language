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
#include "1.h"
#include "2.h"
#include "3.h"
#include "4.h"
void main()
{
	CShape s("Red");
	CPoint p1(10,10), p2(50,50);
	CRect  r(p1,20,30,"Green");
	CCircle c(p2, 20, "Black");
	s.Draw();
	r.Draw();
	c.Draw();
} 

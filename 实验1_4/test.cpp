
#include "rect.h"
void main()
{
	CRect r;
	r.SetColor("Red");
	r.Move(10,20);
	r.SetSize(100,200);
	r.Draw();
	r.Move(50,50);
	r.SetColor("Blue");
	r.Draw();
	CRect r1();
} 
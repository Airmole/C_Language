#include "CLine.h"

void main()
{
	CPoint  p1(1,1), p2(4,5);
	CLine  line(p1, p2);
	cout << "The length is :"
		<< line.GetLength() << endl;
} 
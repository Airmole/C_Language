#include "One.h"
#include <stdlib.h>

void main()
{
	Rectanle A(10,10);
	Rectanle B(A);
	A.area();
	B.area();
	A.Display();
	B.Display();
	system("pause");
}
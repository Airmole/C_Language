#include "complex.h"
CComplex operator +(CComplex c1, CComplex c2) 
{
	CComplex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}
CComplex operator -(CComplex c1, CComplex c2) 
{
	CComplex temp;
	temp.real = c1.real - c2.real;
	temp.imag = c1.imag - c2.imag;
	return temp;
} 
void main(  )
{
	CComplex  a(1, 2), b(3.0, 4.0), c, d, e; 
	c = a+b; 
	d = b-10; 
	e = 20+a;
	cout << "c = ";	c.Display();
	cout << "d = ";	d.Display();
	cout << "e = ";	e.Display();
} 

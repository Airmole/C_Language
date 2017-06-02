#include <iostream>
using namespace std;

class  CComplex;

CComplex operator -(CComplex c1, CComplex c2); 
CComplex operator +(CComplex c1, CComplex c2); 

class  CComplex 
{
private:
	double real;
	double imag;
public:
	CComplex(double r=0, double i=0)
	{ 	real = r;     	imag = i;
	} 
 	CComplex(CComplex & c)
	{	real = c.real;  imag = c.imag;
	}
	void  Display()
{
		cout << "(" << real << "," << imag << ")" << endl;
}
	friend CComplex operator +(CComplex c1, CComplex c2); 
	friend CComplex operator -(CComplex c1, CComplex c2); 
};

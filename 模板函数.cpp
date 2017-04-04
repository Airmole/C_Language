#include <iostream>
using namespace std;
template <typename T>
T add(T a,T b)
{
	return a+b;
}
int main()
{
	int m=10,n=20;
	float u=2.5,v=4.6;
	cout <<"m+n="<<add(m,n)<<endl;
	cout <<"u+v="<<add(u,v)<<endl;
	return 0;
}
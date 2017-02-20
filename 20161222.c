//============求素数的和===========
/*#include <stdio.h>
#include <math.h>
int prime(int n)
{
	int r,i;
	for(i=2;i<=n-1;i++)
	{
		r=n%i;
		if(r==0) break;
	}
	if(i>=n)
		return 1;
	else
		return 0;
}
int main()
{
	int n,s=0;
	while(scanf("%d",&n)==1&&n>0)
		if(prime(n))
			s+=n;
	printf("%d\n",s);
	return 0;	
}*/
//S=1*1!+2*2!+3*3!+……+n*n!(n<10)
#include <stdio.h>
int factorial(int n)  //计算n的阶乘
{
	int f;
	for(i;i<10;i++)
		f=
}
int sum(int b)   //求解阶乘之和
{
	int i=1,s=0,n;
	for(i;i<10;i++)
		s=s+(i*factorial(n));
	return b;
}
int main()
{
	int factorial(int n);
	int sum(int b);
	int n,b;
	factorial(n);
	sum(b);
	printf("%d",sum(b));
	return 0;
}
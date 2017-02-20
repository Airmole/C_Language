//多分支实现分段函数
/*#include<stdio.h>
int main()
{
	double x,y;
	printf("请输入x的值");
	scanf("%lf",&x);
	if(x>=30)
		y=(3*x)+1;
	else if(x>=20)
		y=(2*x)-1;
	else if(x>=10)
		y=x+1;
	else if(x>=0)
		y=x;
	else
		y=0;
	printf("y=%lf\n",y);
	return 0;
}*/

//课后第四题
#include <stdio.h>
int main()
{
	int h=10;
	float x1=2,y1=2,x2=-2,y2=2,x3=-2,y3=-2,x4=-2,y4=-2,x,y,d1,d2,d3,d4;
	printf("请输入点:");
	scanf("%f%f",&x,&y);
	d1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
	d2=(x-x2)*(x-x2)+(y+y2)*(y+y2);
	d3=(x+x3)*(x+x3)+(y-y3)*(y-y3);
	d4=(x+x4)*(x-x4)+(y+y4)*(y+y4);
	if(d1>1&&d2>1&&d3>1&&d4>1)
		h=0;
	printf("高度为%d\n",h);
    return 0;
}

//课后第五题
/*#include <stdio.h>
int main()
{
	char ch;
	printf("请输入星期的英文大写首字母");
	scanf("%c",&ch);
	if(ch=='M')
		printf("星期一\n");
	if(ch=='T')
	{
		printf("请输入第二位");
		getchar();
		scanf("%c",&ch);
		if(ch=='u')
			printf("星期二\n");
		if(ch=='h')
			printf("星期四\n");
		else
		printf("输入错误\n");
	}
	if(ch=='W')
		printf("星期三\n");
	if(ch=='F')
		printf("星期五\n");
	if(ch=='S')
	{
		printf("请输入第二位");
		getchar();
		scanf("%c",&ch);
			if(ch=='a')
				printf("星期六\n");
			if(ch=='u')
				printf("星期日\n");
	}
	return 0;
}*/
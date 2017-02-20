//课后题5.2
/*#include <stdio.h>
int main()
{
 long int n, s=1, sum=0;
 for(n=1; n<=11; n++)
 {
	 s=s*n;
	 if(n%2==1)
		 sum=sum+s;
 }
 printf("结果是：%ld\n", sum);
}*/
//课后题5.3
/*#include <stdio.h>
int main()
{
	int i,a=0,h,s=0,t;
	for(i=1;i<=3;i++)
	{
		printf("输入第%d个班组的工资:\n",i);
		scanf("%d",&t);
		while(t>0)
		{
			a++;
			s=s+t;
			scanf("%d",&t);
		}
		h=s/a;
		printf("第%d班组的平均工资为%d\n",i,h);
	}
}*/
//课后题5.4
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	int peach=0,rest=1,day=0;
	for(day=9;day>0;day--)
	{
		peach=2*(rest+1);
		rest=peach;
	}
	printf("猴子第一天一共摘了%d个桃子\n",peach);
}*/
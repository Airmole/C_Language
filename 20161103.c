//1.练习使用do_while语句计算100以内奇偶数之和
/*#include <stdio.h>
int main()
{
	int i=1,sum1=0,j=1,sum2=0;
	do
	{
		i++;
		if(i%2==0)
		{
			sum1+=i;
		}
	}while(i<=100);
	printf("偶数和为%d\n",sum1);
		do
	{
		sum2=sum2+j;
		j=j+2;
	}while(j<100);
	printf("奇数和为%d\n",sum2);
	return 0;
}*/
//统计计算机班的C语言成绩的平均分。输入所有学生的成绩，当输入负数时表示输入结束。
/*#include <stdio.h>
int main()
{
	int a;
	int m=0,sum=0;
	printf("请输入成绩，输入负数结束");
	do
	{
		scanf("%d",&a);
		if(a>=0)
		{
			sum=sum+a;
			m++;
		}
	}while(a>=0);
	printf("平均分数为：%d\n",sum/m);
	return 0;
}*/
//课后题5.5,输出水仙花数!
/*#include<stdio.h>
int main()
{
	int a,b,c,d;
	for(a=100;a<=999;a++)
	{
		b=a/100;
		c=a%10;
		d=(a/10)%10;
		if(b*b*b+c*c*c+d*d*d==a)
			printf("水仙花数是%d \n",a);
	}
	return 0;
}*/
//课后题5.6
/*#include<stdio.h>
int main()
{
	char ch;
	int char_num=0,blankspace=0,int_num=0,other_num=0;
	while((ch=getchar())!='\n')
	{
		if(ch>='a'&&ch<='z'||ch<='z'&&ch>='a')
		{
			char_num++;
		}
		else if(ch==' ')
		{
			blankspace++;
		}
		else if(ch>='0'&&ch<='9')
		{
			int_num++;
		}
		else
		{
			other_num++;
		}
	}
	printf("字母%d个，空格%d个，数字%d个，其他%d个\n",char_num,blankspace,int_num,other_num);
	return 0;
}*/
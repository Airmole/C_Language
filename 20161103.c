//1.��ϰʹ��do_while������100������ż��֮��
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
	printf("ż����Ϊ%d\n",sum1);
		do
	{
		sum2=sum2+j;
		j=j+2;
	}while(j<100);
	printf("������Ϊ%d\n",sum2);
	return 0;
}*/
//ͳ�Ƽ�������C���Գɼ���ƽ���֡���������ѧ���ĳɼ��������븺��ʱ��ʾ���������
/*#include <stdio.h>
int main()
{
	int a;
	int m=0,sum=0;
	printf("������ɼ������븺������");
	do
	{
		scanf("%d",&a);
		if(a>=0)
		{
			sum=sum+a;
			m++;
		}
	}while(a>=0);
	printf("ƽ������Ϊ��%d\n",sum/m);
	return 0;
}*/
//�κ���5.5,���ˮ�ɻ���!
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
			printf("ˮ�ɻ�����%d \n",a);
	}
	return 0;
}*/
//�κ���5.6
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
	printf("��ĸ%d�����ո�%d��������%d��������%d��\n",char_num,blankspace,int_num,other_num);
	return 0;
}*/
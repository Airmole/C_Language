//�κ���5.2
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
 printf("����ǣ�%ld\n", sum);
}*/
//�κ���5.3
/*#include <stdio.h>
int main()
{
	int i,a=0,h,s=0,t;
	for(i=1;i<=3;i++)
	{
		printf("�����%d������Ĺ���:\n",i);
		scanf("%d",&t);
		while(t>0)
		{
			a++;
			s=s+t;
			scanf("%d",&t);
		}
		h=s/a;
		printf("��%d�����ƽ������Ϊ%d\n",i,h);
	}
}*/
//�κ���5.4
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
	printf("���ӵ�һ��һ��ժ��%d������\n",peach);
}*/
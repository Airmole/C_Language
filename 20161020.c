//���֧ʵ�ֶַκ���
/*#include<stdio.h>
int main()
{
	double x,y;
	printf("������x��ֵ");
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

//�κ������
#include <stdio.h>
int main()
{
	int h=10;
	float x1=2,y1=2,x2=-2,y2=2,x3=-2,y3=-2,x4=-2,y4=-2,x,y,d1,d2,d3,d4;
	printf("�������:");
	scanf("%f%f",&x,&y);
	d1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
	d2=(x-x2)*(x-x2)+(y+y2)*(y+y2);
	d3=(x+x3)*(x+x3)+(y-y3)*(y-y3);
	d4=(x+x4)*(x-x4)+(y+y4)*(y+y4);
	if(d1>1&&d2>1&&d3>1&&d4>1)
		h=0;
	printf("�߶�Ϊ%d\n",h);
    return 0;
}

//�κ������
/*#include <stdio.h>
int main()
{
	char ch;
	printf("���������ڵ�Ӣ�Ĵ�д����ĸ");
	scanf("%c",&ch);
	if(ch=='M')
		printf("����һ\n");
	if(ch=='T')
	{
		printf("������ڶ�λ");
		getchar();
		scanf("%c",&ch);
		if(ch=='u')
			printf("���ڶ�\n");
		if(ch=='h')
			printf("������\n");
		else
		printf("�������\n");
	}
	if(ch=='W')
		printf("������\n");
	if(ch=='F')
		printf("������\n");
	if(ch=='S')
	{
		printf("������ڶ�λ");
		getchar();
		scanf("%c",&ch);
			if(ch=='a')
				printf("������\n");
			if(ch=='u')
				printf("������\n");
	}
	return 0;
}*/
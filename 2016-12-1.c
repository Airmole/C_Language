//һ��
/*#include<stdio.h>
#define sn 10
int main()
{
	int i,a[sn],max=0,sum=0;
	for(i=0;i<sn;i++){
		printf("������%d�ſ�����ѧ�ɼ���",i+1);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	for(i=0;i<sn;i++){
		if(a[i]>max)
			max=a[i];
	}
	printf("ƽ���ɼ�Ϊ��%d\n��߷�Ϊ��%d\n",sum/sn,max);
	return 0;
}*/
//����
/*#include <stdio.h>
#define n 4
int main()
{
	int i,j,a[n][3],sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<3;j++){
			switch(j)
			{
				case 0:
				printf("������%d�ſ�����ѧ�ɼ���",i+1);
				scanf("%d",&a[i][j]);
				break;
				case 1:
				printf("������%d�ſ���C���Գɼ���",i+1);
				scanf("%d",&a[i][j]);
				break;
				default:
				printf("������%d�ſ����������ɼ���",i+1);
				scanf("%d",&a[i][j]);
				break;
			}
			sum+=a[i][j];
		}
		printf("�ÿ���ƽ���ɼ�Ϊ%d\n",sum/3);
		sum=0;
	}
	return 0;
}*/
//��ά����Խ���Ԫ��֮��
/*#include <stdio.h>
int main()
{
	int i,j,a[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("�������%d�е�%d�е����ݣ�",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("�Խ���Ԫ��֮��Ϊ��%d\n",a[0][0]+a[0][2]+a[1][1]+a[2][0]+a[2][2]);
}*/
//�������
/*#include<stdio.h>
int main()
{
	int a[10][10],i,j;
	for(i=0;i<10;i++){
		a[i][0]=1;
		a[i][i]=1;
		}
		for(i=1;i<10;i++)
			for(j=1;j<i;j++)
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			for(i=0;i<10;i++){
				for(j=0;j<=i;j++)
					printf("%d\t",a[i][j]);
				printf("\n");
 }
} */
//-------------------------
/*#include <stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int i;
	for(i=0,i<5,i++){
		printf("%-5d",a[i]);
	}
	return 0;
}*/
//---------------------------
/*#include <stdio.h>
int main()
{
	int i[10],a=0;
	printf("请输入十个数据：");
	for(;a<10;a++){
		scanf("%d",&i[a]);
	}
	for(a=0;a<10;a++){
		printf("%d ",i[a]);
	}
	printf("\n");
}*/
//----------------------------
/*#include <stdio.h>
int main()
{
	int sum=0;
	int i[10],a=0;
	printf("请输入十个数据：");
	for(;a<10;a++)
		scanf("%d",&i[a]);
	for(a=0;a<=9;a++)
	sum=sum+i[a];
	printf("累加和为：%d\n",sum);
}*/
//----------------------------
/*#include <stdio.h>
int main()
{
	int sum=0,a,n;
	printf("请输入10个数据：");
	for(n=0;n<10;n++){
		scanf("%d",&a);
		sum=sum+a;
	}
	printf("累加和为：%d\n",sum);
}*/
//-------------------------------
/*#include <stdio.h>
int main() 
{
	int i, j, num, t;
	int a[100];	
	printf("How many numbers:\n");
	scanf("%d", &num);	
	printf("Input %d numbers:\n", num);
	for(i=0; i<num; i++)	
		scanf("%d", &a[i]);
	for(i=0; i<num-1; i++)	
		for(j=0; j<num-i-1; j++) 
			if(a[j]>a[j+1]) 
			{	
				t=a[j+1];
				a[j+1]=a[j];
				a[j]=t;
			}
	printf("The sorted number:\n");
	for(i=0; i<num; i++)
		printf("%d ", a[i]);
	return 0;
}*/
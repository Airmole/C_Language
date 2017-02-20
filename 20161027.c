/*#include <stdio.h>
int main()
{
	float F,c;
	printf("请输入华氏温度：");      //提示用户输入华氏温度
	scanf("%f",&F);                  //取用户输入的值给F
	c=(5.0/9.0)*(F-32);              //进行温度的转换计算
	printf("摄氏温度是：%5.2f",c);   //输出显示摄氏温度给用户
	return 0;
}*/

/*#include <stdio.h>
#define PI 3.14
int main()
{
	float r,h,C,S1,S2,V;
	printf("请输入圆半径和圆柱的高度");         //提示用户输入半径r和高度h的值
	scanf("%f%f",&r,&h);                        //从键盘获得用户输入的r，h的值
	C=2*PI*r;                                   //计算圆的周长C
	S1=PI*r*r;                                  //计算圆的面积S1
	S2=(2*PI*r*r)+(2*PI*r*h);                   //计算圆柱的表面积S2
	V=PI*r*r*h;                                 //计算圆柱的体积V
	printf("该圆的周长为：%5.2f\n",C);          //输出展示圆的周长的值给用户
	printf("该圆的面积为：%5.2f\n",S1);         //输出展示圆的面积的值给用户
	printf("该圆柱的表面积为：%5.2f\n",S2);     //输出展示圆柱的表面积的值给用户
	printf("该圆柱的体积为：%5.2f\n",V);        //输出展示圆柱的体积的值给用户
	return 0;
}*/

/*#include <stdio.h>
int main()
{
	int a,b,c,max;
	printf("请输入三个整数以比较大小");     //提示用户输入三个整数
	scanf("%d%d%d",&a,&b,&c);               //从键盘获取用户输入的值分别给a，b，c
	if(b>c)                                 //如果b>c        
		max=b;                              //将b的值赋予max
	else max=c;                             //否则将c的值赋予max
	if(a>max)                               //如果a>max
		max=a;                              //将a的值赋予max
	printf("最大值为%d\n",max);             //输出最大值结果给用户
	retutn 0;
}*/

/*#include <stdio.h>
int main()
{
	char n;                            //定义n的数据类型为字符类型
	scanf("%c",&n);                    //从键盘获得用户输入的值并赋于n
	if(n>='0'&&n<='9')                 //判断n是否大于等于0且小于等于9
		printf("是数字\n");            //若成立则输出提示是数字
	else printf("非数字\n");           //若不成立则输出提示非数字
	return 0;
}*/
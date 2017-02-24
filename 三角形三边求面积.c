//输入三角形三边长，求三角形面积
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    double s,area;
    printf("请输入三角形三边长a,b,c的值：\n");
    scanf("%d,%d,%d",&a,&b,&c);
    s=1.0/2*(a+b+c);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("a=%d,b=%d,c=%d,s=%7.21f\n", a,b,c,s);
    printf("面积为：%7.21f\n",area);
    return 0;
}
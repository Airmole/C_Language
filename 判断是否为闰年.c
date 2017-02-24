//判断输入的年份是否为闰年
#include <stdio.h>
int main()
{
    int year;
    printf("请输入要判断的年份：\n");
    scanf("%d",&year);
    if (year%4==0&&year%100==0||year%400==0)
    {
        printf("%d是闰年\n",year );
    }
    else
    {
        printf("%d不是闰年\n",year );
    }
    return 0;
}
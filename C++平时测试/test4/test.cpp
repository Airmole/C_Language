#include "student.h"
double GetAvgScore(CStudent *stu,int n);
void main()
{
    CStudent s[5]=
    {
    CStudent(101,"aa",90),
    CStudent(102,"bb",80),
    CStudent(103,"cc",70),
    CStudent(104,"dd",60),
    CStudent(105,"ee",50),
    };
    cout << "平均成绩是：" << GetAvgScore(s,5) << endl;
}
double GetAvgScore(CStudent *stu,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
    sum+=stu[i].GetScore();
    }
    return sum*1.0/n;
}

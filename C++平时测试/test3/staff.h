#include <iostream>
using namespace std;
class CStaff
{
    int number;
    char name[20];
    int money;
    static int total;
public:
    CStaff(int num,char *n,int m)
    {
        strcpy(name,n);
        number = num;
        money = m;
        total++;
    }
    ~CStaff()
    {
        total--;
    }
    static int GetTotal()
    {
        return total;
    }
};
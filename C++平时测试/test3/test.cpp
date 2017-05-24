#include "staff.h"
int CStaff::total=0;
void fun()
{
    CStaff s(1,"zhangsan",2000);
    cout << CStaff::GetTotal() << endl;
}
void main()
{
    cout << CStaff::GetTotal() << endl;
    CStaff s(2,"zhangsi",3000);
    cout << CStaff::GetTotal() << endl;
    fun();
    cout << CStaff::GetTotal() << endl;
}
#include <iostream>
using namespace std;
void main(void)
{
    int x=18,*px=&x;
    cout << "   x:" << x   <<endl;  //输出x的值
    cout << " *px:" <<*px  << endl; //输出px的目标值
    cout << "  &x:" << hex << &x <<endl; //输出x的地址值
    cout << "  px:" << px <<endl; //输出px存放的地址值
    cout << " &px:" << hex << &px <<endl; //输出px本身的地址值
}
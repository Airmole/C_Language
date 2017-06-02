#include "point.h"
//文件域 初始化
int CPoint::count = 0;

void main()
{
	CPoint pt;
	pt.output();
}
//3-5： 不能编译通过，原因是：静态数据成员未初始化

/*
void main()
{
	CPoint pt;
	pt.init();
}*/
//3-4：编译通过，非静态函数中可以访问静态函数
/*
void main()
{
	CPoint pt;
	pt.output();
}*/
//3-3  不能编译通过。原因是不能再静态函数中访问非静态的数据成员

/*
void main()
{
	CPoint pt;
	pt.init();
	pt.output();
}
*/
//3-2编译可以通过，静态函数与非静态函数都可以通过对象名访问

/*
void main()
{
	CPoint::init();
	CPoint::output();
}*/
//3-1  不能编译通过，原因是非静态函数不能用类名直接访问
#include"rect.h"
void main()
{
	Point A(42,35);   //对象A

	//第一次调用拷贝构造函数
	Point B(A);     //(!)用A初始化B
	Point C(58,94);   //对象C
	cout  << "called display(B)" << endl;
	display(B);    //对象B作为display的实参
	cout << "Next..." << endl;
	cout << "called disp(B)" << endl;
	disp(B);
	cout << "call C=fun()" << endl;
	C=fun();    //fun的返回值赋给对象C
	cout << "called disp(C)" << endl;
	disp(C);
	cout << "out..." << endl;
}

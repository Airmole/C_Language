#include"rect.h"
void main()
{
	Point A(42,35);   //����A

	//��һ�ε��ÿ������캯��
	Point B(A);     //(!)��A��ʼ��B
	Point C(58,94);   //����C
	cout  << "called display(B)" << endl;
	display(B);    //����B��Ϊdisplay��ʵ��
	cout << "Next..." << endl;
	cout << "called disp(B)" << endl;
	disp(B);
	cout << "call C=fun()" << endl;
	C=fun();    //fun�ķ���ֵ��������C
	cout << "called disp(C)" << endl;
	disp(C);
	cout << "out..." << endl;
}

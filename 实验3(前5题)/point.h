#include <iostream>
using namespace std;

class CPoint
{
private:
	static int count;//4��
public:
	CPoint()
	{
		count++;
	}
	~CPoint()
	{
		count--;
	}
	static void output()
	{

	}
};


/*
class CPoint
{
public:
	void init()
	{
		output();
	}
	static void output()
	{
	}
};
*/
/*
class CPoint
{
private:
	int m;
public:
	void init()
	{
	}
	static void output()
	{
		cout << m << endl;
	}
};

//�ĸ���ͷ
//��̬���� -> ��̬����������
//�Ǿ�̬���� ->��̬����������
//��̬���� -> �Ǿ�̬���������ݣ�
//�Ǿ�̬���� ->�Ǿ�̬����������

*/

/*
class CPoint
{
public:
	void init()//�Ǿ�̬��Ա����,������
	{
	}
	static void output()//��̬��Ա������ ������������
	{
	}
};
*/

#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    int num;
    string name;
    char sex;
public:
    Student(int n,string nam,char s)
    {
        cout << "调用基类Student 构造函数"  << endl;
        num = n;
        name = nam;
        sex = s;
    }
};
class Student1 : public Student
{
private:
    int age;
    string addr;
public:
    Student1(int n,string nam,char s,int a,string ad)
		: Student(n,nam,s)
    {
        cout << "调用派生类Student1构造函数"  << endl;
        age = a;
        addr = ad;
    }
    void show()
    {
        cout << "num" <<num << endl;
        cout << "name" <<name << endl;
        cout << "sex" << sex<< endl;
        cout << "age" <<age << endl;
        cout << "address" <<addr << endl;
    }
};

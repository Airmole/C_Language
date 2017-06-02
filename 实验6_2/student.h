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
    void display()
    {
        cout << "num" <<num << endl;
        cout << "name" <<name << endl;
        cout << "sex" << sex<< endl;
    }
};
class Student1:public Student
{
private:
    int age;
    string addr;
    Student monitor;
public:
    Student1(int n,string nam,char s,int n1,string nam1,char s1,int a,string ad)
    :Student(n,nam,s),monitor(n1,nam1,s1)
    {
        cout << "This student is:"  << endl;
        display();
        cout << "age:" << age<< endl;
        cout << "address" << addr << endl << endl;
    }
    void show()
    {
        cout << "this student is:" <<endl;
        display();
        cout << "age:"  << age << endl;
        cout << "address"  << addr <<endl << endl;
    }
    void show_monitor()
    {
        cout << "Class monitor is" << endl;
        monitor.display();
    }
};

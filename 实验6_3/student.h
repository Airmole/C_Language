#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
    int num;
    string name;
public:
    Student(int n,string nam)
    {
        cout << "���û���Student ���캯��"  << endl;
        num = n;
        name = nam;
    }
    void display()
    {
        cout << "num" <<num << endl;
        cout << "name" <<name << endl;
    }
};
class Student1:public Student
{
private:
    int age;
public:
    Student1(int n,string nam,int a)
    :Student(n,nam)
    {
        cout << "����������Student1���캯��" <<endl;
        age = a ;
    }
    void show()
    {
        display();
        cout << "age" << age <<endl; 
    }
};
class Student2 : public Student1
{
private:
    int score;
public:
    Student2(int n,string nam,int a,int s) 
	: Student1(n,nam,a)
    {
        score = s;
    }
    void show_all()
    {
        show();
        cout <<"score" << score << endl;
    }
};

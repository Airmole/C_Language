#include <iostream>
using namespace std;
class CStudent
{
    int number;
    char name[10];
    int score;
public:
    CStudent(int n,char *nm,int s)
    {
        number = n;
        strcpy(name,nm);
        score = s;
    }
    int GetScore()
    {
        return score;
    }
};
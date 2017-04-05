//CPP教材课本棋盘游实例
#include <iostream>
#include <cstdlib>
using namespace std;
void roll_the_dice(int &spot)
{
    int roll;
    roll=rand()%11+2;
    spot+=roll;
    cout << "您掷了" << roll << "点！";
    cout << "\t您当前的位置是：" <<spot<<endl;
}
int main()
{
    int player1_spot=0,player2_spot=0;
    do{
        cout << "请玩家1掷骰子：";
        roll_the_dice(player1_spot);
        if (player1_spot>=90)
        {
            cout << "玩家1获胜！" << endl; break;
        }
        cout << "请玩家2掷骰子：";
        roll_the_dice(player2_spot);
    }
    while(player2_spot);
    if (player2_spot>=90)
    {
        cout << "玩家2获胜！" <<endl;
    }
}
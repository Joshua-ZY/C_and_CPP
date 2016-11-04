#include <iostream>
using namespace std;

/*4名专家对4款赛车进行评论
1）A说：2号赛车是最好的；
2）B说：4号赛车是最好的；
3）C说：3号赛车不是最好的；
4）D说： B说错了。
事实上只有1款赛车最佳，且只有1名专家说对了，其他3人都说错了。
请编程输出最佳车的车号，以及说对的专家。*/

int main()
{
    for (int best = 1; best <= 4; best++)
    {
        bool a = best == 2;
        bool b = best == 4;
        bool c = best != 3;
        bool d = !b;
        if (a + b + c + d == 1)
        {
            cout << best << endl;
            if (a == 1)
            {
                cout << 'A' << endl;
            }
            else if (b == 1)
            {
                cout << 'B' << endl;
            }
            else if (c == 1)
            {
                cout << 'C' << endl;
            }
            else
            {
                cout << 'D' << endl;
            }
        }
    }
    return 0;
}

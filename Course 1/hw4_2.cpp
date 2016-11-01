#include <iostream>

using namespace std;

int main()
{
    const float Pi = 3.14159;
    double h, r, volumn; int num;
    cin >> h >> r;
    volumn = Pi * r * r * h;
    num = 20e3 / volumn + 1;
    cout << num << endl;
    return 0;
}

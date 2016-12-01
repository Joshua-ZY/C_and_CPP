#include <iostream>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    int remain = n - y / x;
    if (y % x != 0)
        remain--;
    if (remain < 0)
        remain = 0;
    cout << remain << endl;
    return 0;
}

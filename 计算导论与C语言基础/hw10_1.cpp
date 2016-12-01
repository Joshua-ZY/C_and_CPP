#include <iostream>
using namespace std;

/*判断闰年
描述:判断某年是否是闰年。
输入:输入只有一行，包含一个整数a(0 < a < 3000)
输出:一行，如果公元a年是闰年输出Y，否则输出N*/

int main() {
	int year;
	cin >> year;
	if (year % 3200 != 0) {
		if (year % 400 == 0)
			cout << 'Y' << endl;
		else {
			if (year % 100 != 0 && year % 4 == 0)
				cout << 'Y' << endl;
			else
				cout << 'N' << endl;
		}
	}
	else
		cout << 'N' << endl;
	return 0;
}
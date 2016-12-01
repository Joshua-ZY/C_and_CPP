#include <iostream>
using namespace std;

/*编程题＃4：人民币支付
从键盘输入一指定金额（以元为单位，如345），然后输出支付该金额的各种面额的人民币数量，显示100元，50元，20元，10元，5元，1元各多少张，要求尽量使用大面额的钞票。
输入一个小于1000的正整数。
输出分行，每行显示一个整数，从上到下分别表示100元，50元，20元，10元，5元，1元人民币的张数*/

int main() {
	int n, remain;
	cin >> n;
	cout << n / 100 << endl;
	remain = n % 100;
	cout << remain / 50 << endl;
	remain %= 50;
	cout << remain / 20 << endl;
	remain %= 20;
	cout << remain / 10 << endl;
	remain %= 10;
	cout << remain / 5 << endl;
	remain %= 5;
	cout << remain << endl;
	return 0;
}
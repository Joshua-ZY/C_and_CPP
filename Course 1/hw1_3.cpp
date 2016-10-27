#include <iostream>
using namespace std;

/*输入十个整数，将十个整数按升序排列输出，并且奇数在前，偶数在后。*/

int main() {
	int a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	// 冒泡，不断比较相邻的两个数，如果顺序错了，那么就交换
	for (int i = 0; i < 9; i++) {
		for (int j = 1; j < 10 - i; j++) {
			// 与普通的冒泡排序不同，不只是通过较数字的大小决定顺序
			// 如果左边的为偶数，右边的为奇数，那么顺序也需要颠倒
			bool leftIsOdd = a[j - 1] % 2 == 1;
			bool rightIsOdd = a[j] % 2 == 1;
			if ((!leftIsOdd && rightIsOdd) || (leftIsOdd == rightIsOdd && a[j - 1] > a[j])) {
				int temp = a[j - 1];
				a[j - 1] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}
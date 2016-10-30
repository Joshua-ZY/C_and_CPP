#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int num, count1 = 0;
		cin >> num;
		while (num) {
			count1 += num % 2;
			num /= 2;
		}
		cout << count1 << endl;
	}
	return 0;
}
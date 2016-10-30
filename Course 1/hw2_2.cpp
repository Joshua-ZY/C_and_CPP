#include <iostream>
using namespace std;

int main() {
	int m, n, start, sum = 0;
	cin >> m >> n;
	if (m % 2 == 1)
		start = m;
	else
		start = m + 1;
	for (int i = start; i <= n; i += 2) {
		sum += i;
	}
	cout << sum << endl;
	return 0;
}
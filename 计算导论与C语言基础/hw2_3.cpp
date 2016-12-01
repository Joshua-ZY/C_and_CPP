#include <iostream>
using namespace std;

int main() {
	int k, count1 = 0, count5 = 0, count10 = 0;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int num;
		cin	>> num;
		switch (num)
		{
		case 1: count1++; break;
		case 5: count5++; break;
		case 10:count10++; break;
		}
	}
	cout << count1 << '\n' << count5 << '\n' << count10 << endl;
	return 0;
}
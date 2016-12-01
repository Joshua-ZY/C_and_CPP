#include <iostream>
using namespace std;

int main() {
	int n, l;
	cin >> n;
	if (n >= 95)
		l = 1;
	else if (n >= 90)
		l = 2;
	else if (n >= 85)
		l = 3;
	else if (n >= 80)
		l = 4;
	else if (n >= 70)
		l = 5;
	else if (n >= 60)
		l = 6;
	else
		l = 7;
	cout << l << endl;
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
	int num,  maxOdd = 0, maxEven = 100, diff;
	for (int i = 0; i < 6; i++)
	{
		cin >> num;
		if (num % 2 == 1 && num > maxOdd)
			maxOdd = num;
		else if (num % 2 == 0 && num < maxEven)
			maxEven = num;
	}
	diff = maxOdd - maxEven;
	if (diff >= 0)
		cout << diff << endl;
	else
		cout << -diff << endl;

	return 0;
}

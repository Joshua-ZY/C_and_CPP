#include <iostream>
using namespace std;

int main()
{
	int n, max = 0, current;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> current;
		if (current > max)
			max = current;
	}
	cout << max << endl;
	return 0;
}
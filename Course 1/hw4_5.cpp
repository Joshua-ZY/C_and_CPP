#include <iostream>
using namespace std;

int main()
{
	int num, hundreds, tens, ones;
	cin >> num;
	hundreds = num / 100;
	tens = num % 100 / 10;
	ones = num % 10;
	cout << hundreds << endl << tens << endl << ones << endl;
	return 0;
}
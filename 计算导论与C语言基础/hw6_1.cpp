#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double n;
	cin >> n;
	int age, age1 = 0, age2 = 0, age3 = 0, age4 = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> age;
		if (1 <= age && age <= 18)
			age1++;
		else if (19 <= age && age <= 35)
			age2++;
		else if (36 <= age && age <= 60)
			age3++;
		else
			age4++;
	}
	cout << "1-18: " << setprecision(2) << std::fixed << age1 / n * 100 << '%' << endl;
	cout << "19-35: " << setprecision(2) << std::fixed << age2 / n * 100 << '%' << endl;
	cout << "36-60: " << setprecision(2) << std::fixed << age3 / n * 100 << '%' << endl;
	cout << "60-: " << setprecision(2) << std::fixed << age4 / n * 100 << '%' << endl;
	return 0;
}
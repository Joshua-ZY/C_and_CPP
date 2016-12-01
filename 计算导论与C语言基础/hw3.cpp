#include <iostream>
using namespace std;

int main() {
	int n;// n为细菌的数量
  // id记录细菌的编号, rate记录细菌的繁殖率，第i个细菌对应id[i]和rate[i]
	int id[100];
	double rate[100];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int initial, final;
		cin >> id[i] >> initial >> final;
		rate[i] = (double)final / initial;
	}

	// 对整个细菌排序(冒泡排序）
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 1; j < n - i; j++)
		{
			if (rate[j - 1] > rate[j])
			{
				int tempId = id[j - 1];
				id[j - 1] = id[j];
				id[j] = tempId;
				double tempRate = rate[j - 1];
				rate[j - 1] = rate[j];
				rate[j] = tempRate;
			}
		}
	}
	// 记录最大的差的值和位置
	double maxDiff = 0;
	int maxIdx;
	for (int i = 0; i < n - 1; i++)
	{
		double diff = rate[i + 1] - rate[i];
		if (diff > maxDiff)
		{
			maxDiff = diff;
			maxIdx = i;
		}
	}
	//先输出繁殖率较大的那组细菌
	cout << n - maxIdx - 1 << endl;
	for (int i = maxIdx + 1; i < n; i++)
	{
		cout << id[i] << endl;
	}
	//后输出繁殖率较小的那组细菌
	cout << maxIdx + 1 << endl;
	for (int i = 0; i < maxIdx + 1; i++)
	{
		cout << id[i] << endl;
	}
	return 0;
}
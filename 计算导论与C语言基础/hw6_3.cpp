#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n;
	cin >> k;
	int bigk[100] = {0}, num, temp;//建立一个长度为100（防止不够长）的数组，并将数组里的所有值初始化为0;
	//bigk是前k个最大的数，从大到小排列，因此bigk[k -1]就是第k大的数
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num > bigk[k -1]) {
			for (int i = 0; i < k; i++) {
				if (num > bigk[i]) {
					temp = num;
					num = bigk[i];
					bigk[i] = temp;
				}
			}
		}
	}
	cout << bigk[k - 1] << endl;
	return 0;
}

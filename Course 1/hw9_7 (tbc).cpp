#include <iostream>
using namespace std;

/*描述:给出一组无序整数，求出中位数，如果求最中间两个数的平均数，向下取整即可（不需要使用浮点数）
输入:该程序包含多组测试数据，每一组测试数据的第一行为N，代表该组测试数据包含的数据个数，1 <= N <= 15000.
接着N行为N个数据的输入，N=0时结束输入
输出:输出中位数，每一组测试数据输出一行.

这是也一道经典的算法问题，在企业面试里出现概率很高，是“找到第K大的数”的变种。先排序再找中位数自然是很直
接的做法，但排序本身很慢。我们只想找到第n/2大的数，对于其他数的顺序我们并不关心。那么怎么在不排序的前提下
找到第n/2大的数呢？
先将序列玩完全排序效率比较低，可以采用类似quicksort的pivot element排序的方法找到pivot位置为n/2的pivot，但
是由于还不会用C++写递归,所以只能先采用排序的方法。
*/

int main() {
	while (true) {
		int n;
		cin >> n;
		if (n == 0)
			return 0;
		else {
			int vec[15000];
			for (int i = 0; i < n; i++)
				cin >> vec[i];
			//冒泡排序
			for (int i = 0; i < n; i++){
				for (int j = 1; j < n - i; j++) {
					if (vec[j - 1] > vec[j]) {
						int temp = vec[j - 1];
						vec[j - 1] = vec[j];
						vec[j] = temp;
					}
				}
			}
			if (n % 2 == 1)
				cout << vec[n / 2] << endl;
			else
				cout << (vec[n / 2 - 1] + vec[n / 2]) / 2 << endl;
		}
	}
}
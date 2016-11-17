#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

/*编程题＃3：最远距离
注意： 总时间限制: 1000ms 内存限制: 65536kB
描述：给定一组点(x,y)，求距离最远的两个点之间的距离。
输入：第一行是点数n（n大于等于2），接着每一行代表一个点，由两个浮点数x y组成。
输出：输出一行是最远两点之间的距离。
使用cout << fixed << setprecision(4) << dis << endl;输出距离值并精确到小数点后4位。
fixed和setprecision是在<iomanip>头文件里定义的格式控制操作符，需要#include <iomanip>.*/

int main() {
	int n;
	cin >> n;
	double p1[100], p2[100], distance, longest = 0;
	for (int i = 0; i < n; i++)
		cin >> p1[i] >> p2[i];
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			distance = sqrt(pow(p1[j] - p1[i], 2) + pow(p2[j] - p2[i], 2));
			if (distance > longest)
				longest = distance;
		}
	}
	cout << fixed << setprecision(4) << longest << endl;
	return 0;
}
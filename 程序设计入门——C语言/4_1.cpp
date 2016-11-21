#include <stdio.h>

/*素数和
题目内容：
我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
输入格式:
两个整数，第一个表示n，第二个表示m。
输出格式：
一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。*/

int main() {
	int n, m, sum = 0;
	scanf("%d %d", &n, &m);
	int i = 1, start = 2;
	while (i <= m) {
		int is_prime = 1; //注意，在C语言中没有bool类型，C++中才有
		for (int dev = 2; dev <= start / 2; dev++) {
			if (start % dev == 0) {
				is_prime = 0;
				break;
			}
		}
		if (is_prime) {
			if (i >= n)
				sum += start;
			i++;
		}
		start++;
	}
	printf("%d\n", sum);
	return 0;
}
#include <stdio.h>
#include <math.h>

/*分解质因数
题目内容：每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，这几个素数就都叫做这个合数的质因数。
比如，6可以被分解为2x3，而24可以被分解为2x2x2x3。现在，你的程序要读入一个[2,100000]范围内的整数，然后输出它
的质因数分解式；当读到的就是素数时，输出它本身。
提示：可以用一个函数来判断某数是否是素数。
输入格式:一个整数，范围在[2,100000]内。
输出格式：形如：n=axbxcxd或n=n所有的符号之间都没有空格，x是小写字母x。abcd这样的数字一定是从小到大排列的。
*/

int is_prime(int anum) { //如果是质数，返回0，如果不是，返回最小的因子
	int n = sqrt(anum);
	for (int i = 2; i <= n; i++) {
		if (anum % i == 0)
			return i;
	}
	return 0;
}

int main() {
	int num;
	scanf("%d", &num);
	printf("%d=", num);
	while (1) {
		int result = is_prime(num);
		if (result == 0) {
			printf("%d\n", num);
			return 0;
		}
		printf("%dx", result);
		num /= result;
	}
}


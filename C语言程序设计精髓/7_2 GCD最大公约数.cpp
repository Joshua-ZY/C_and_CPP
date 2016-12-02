#include <stdio.h>

/*递归法计算两个数的最大公约数（4分）
题目内容：
利用最大公约数的性质计算。对正整数a和b，当a>b时，若a中含有与b相同的公约数，则a中去掉b后
剩余的部分a-b中也应含有与b相同的公约数，对a-b和b计算公约数就相当于对a和b计算公约数。反复
使用最大公约数的上述性质，直到a和b相等为止，这时，a或b就是它们的最大公约数。这三条性质，
也可以表示为： 
性质1  如果a>b，则a和b与a-b和b的最大公约数相同，即Gcd(a, b) = Gcd(a-b, b)
性质2  如果b>a，则a和b与a和b-a的最大公约数相同，即Gcd(a, b) = Gcd(a, b-a)
性质3  如果a=b，则a和b的最大公约数与a值和b值相同，即Gcd(a, b) = a = b*/

unsigned int GCD(unsigned int a,unsigned int b) {
	int r = a % b;
	if (r == 0)
		return b;
	else
		return GCD(b, r);
}

int main() {
	int a, b, gcd;
	printf("Input a,b:");
	scanf("%d,%d", &a, &b);
	if (a <= 0 || b <= 0) {
		printf("Input error!\n");
	}
	else {
		gcd = GCD(a, b);
		printf("%d\n", gcd);
	}
	return 0;
}
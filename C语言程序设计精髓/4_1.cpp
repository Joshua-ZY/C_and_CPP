#include <stdio.h>

/*数位拆分
题目内容：
从键盘上输入一个4位数的整数n，编写程序将其拆分为两个2位数的整数a和b，计算并输出拆分后的两个数的加、减、乘、
除和求余运算的结果。例如n=-4321,设拆分后的两个整数为a,b，则a=-43,b=-21。除法运算结果要求精确到小数点后2位,
数据类型为float。求余和除法运算需要考虑除数为0的情况，即如果拆分后b=0,则输出提示信息"The second operater 
is zero!"
*/

int main() {
	int num, num1, num2, sum, sub, multi, mod;
	float dev;
	printf("Please input n:\n");
	scanf("%d", &num);

	num1 = num / 1000 * 10 + num % 1000 / 100;
	num2 = num % 100 / 10 * 10 + num % 10;

	sum = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;

	printf("%d,%d\n", num1, num2);
	printf("sum=%d,sub=%d,multi=%d\n", sum, sub, multi);
	if (num2 == 0)
		printf("The second operater is zero!\n");
	else {
		dev = num1 / (float)num2;
		mod = num1 % num2;
		printf("dev=%.2f,mod=%d\n", dev, mod);
	}
	return 0;
}
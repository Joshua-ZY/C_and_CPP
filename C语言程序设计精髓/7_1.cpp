#include <stdio.h>

/*题目内容：
有n个人围坐在一起，问第n个人多大年纪，他说比第n-1个人大2岁；问第n-1个人，他说比第n-2个人
大2岁,.....,问第3个人，他说比第2个人大2岁；问第2个人，他说比第1个人大2岁。第1个人说自己
10岁，问第n个人多大年纪。
递归函数原型：unsigned int ComputeAge(unsigned int n); */

unsigned int ComputeAge(unsigned int n) {
	if (n == 1)
		return 10;
	else
		return ComputeAge(n - 1) + 2;
}

int main() {
	int n, age;
	scanf("%u", &n);
	age = ComputeAge(n);
	printf("The person's age is %u\n", age);
	return 0;
}

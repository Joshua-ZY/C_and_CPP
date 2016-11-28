#include <stdio.h>

/*数据区间判断
题目内容：从键盘输入一个int型的正整数n（已知：0<n<10000），编写程序判断n落在哪个区间。
如果用户输入的数据不在指定的范围里，程序输出 "error!"。例如，输入265，则该数属于区间 
100-999。*/

int main() {
	int num;
	printf("Please enter the number:\n");
	scanf("%d", &num);
	if (num <= 0 || num >= 10000)
		printf("error!\n");
	else if (num >= 1000)
		printf("%d: 1000-9999\n", num);
	else if (num >= 100)
		printf("%d: 100-999\n", num);
	else if (num >= 10)
		printf("%d: 10-99\n", num);
	else
		printf("%d: 0-9\n", num);
	return 0;
}
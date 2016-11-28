#include <stdio.h>

/*判断一个整型数据有几位v1.0
题目内容：从键盘输入一个整型数据(int型)，编写程序判断该整数共有几位。例如，从键盘输入整数16644,该整数共有5位。*/

int main() {
	int num, remain, bits = 0;
	printf("Please enter the number:\n");
	scanf("%d", &num);
	remain = num;
	while (remain != 0) {
		remain /= 10;
		bits++;
	}
	printf("%d: %d bits\n", num, bits);
	return 0;
}

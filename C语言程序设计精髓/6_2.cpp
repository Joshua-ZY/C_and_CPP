#include <stdio.h>

/*编程计算a+aa+aaa+…+aa…a（n个a）的值
题目内容：编程计算 a+aa+aaa+…+aa…a（n个a）的值，n和a的值由键盘输入。例如，
当n=4,a=2,表示计算2+22+222+2222的值。*/

int num_repeator(int a, int n) {
	int num = 0;
	for (int i = 0; i < n; i++) {
		num += a;
		a *= 10;
	}
	return num;
}

int main() {
	int a, n, sum = 0;
	printf("Input a,n:\n");
	scanf("%d,%d", &a, &n);
	for (int i = 0; i < n; i++) {
		sum += num_repeator(a, i + 1);
	}
	printf("sum=%ld\n", sum);
	return 0;
}
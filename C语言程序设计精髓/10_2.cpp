#include <stdio.h>

/*奇偶数分离
输入n个整数（n从键盘输入，假设n的值不超过100），按奇偶数分成两组并输出。输出两行，第一行为所有奇数，
第二行为所有偶数，保持数据的相对顺序与输入顺序相同。
函数原型如下所示：void Seperate(int a[], int n); //数组a[]存放用户输入的n个整数
解题思路：用两个循环分别输出奇数和偶数，在输出第一个数时用"%d"格式字符，在输出其余数时用",%d"格式字
符，用标志变量记录和判断是否是第一个奇数或偶数。*/

void Seperate(int a[], int n) {
	//输出奇数
	int first_flag = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			if (first_flag) {
				printf("%d", a[i]);
				first_flag = 0;
			}
			else
				printf(",%d", a[i]);
		}
	}
	printf("\n");
	//输出偶数
	first_flag = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			if (first_flag) {
				printf("%d", a[i]);
				first_flag = 0;
			}
			else
				printf(",%d", a[i]);
		}
	}
	printf("\n");
}

int main() {
	int n, numarr[100];
	printf("Input n:");
	scanf("%d", &n);
	printf("Input numbers:");
	for (int i = 0; i < n; i++) {
		scanf("%d", &numarr[i]);
	}
	Seperate(numarr, n);
	return 0;
}
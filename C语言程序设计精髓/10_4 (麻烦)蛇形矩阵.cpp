#include <stdio.h>

/*蛇形矩阵
从键盘任意输入一个自然数n（n表示矩阵的大小，假设不超过100），请编程输出一个n*n的蛇形矩阵。
如果输入的n不是自然数或者输入了不合法的数字，则输出"Input error!"。
函数原型： void ZigzagMatrix(int a[][N], int n); 函数功能：计算n*n的蛇形矩阵
提示：用两个双重循环分别计算n*n矩阵的左上三角和右下三角，设置一个计数器从1开始记录当前要写
入矩阵的元素值，每次写完一个计数器加1，在计算左上角和右下角矩阵元素时，分奇数和偶数两种情况
考虑待写入的元素在矩阵中的行列下标位置。*/


void ZigzagMatrix(int a[][100], int n) {
	int num = 1;
	//填充左上三角矩阵
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) { //如果是偶数行（注意行号从0开始),那么就从右下往左上填充
			for (int j = 0; j <= i; j++) {
				a[i - j][j] = num;
				num++;
			}
		}
		else { //如果是奇数行（注意行号从0开始),那么就从左上往右下填充
			for (int j = 0; j <= i; j++) {
				a[j][i - j] = num;
				num++;
			}
		}
	}
	//填充右下三角矩阵
	for (int i = n; i < 2*n; i++) {
		if (i % 2 == 0) { //如果是偶数行（注意行号从0开始),那么就从右下往左上填充
			for (int j = 0; j < 2 * n - 1 - i; j++) {
				a[(n - 1) - j][i + j - (n - 1)] = num;
				num++;
			}
		}
		else { //如果是奇数行（注意行号从0开始),那么就从左上往右下填充
			for (int j = 0; j < 2 * n - 1 - i; j++) {
				a[i + j - (n - 1)][(n - 1) - j] = num;
				num++;
			}
		}
	}
	return;
}

int main() {
	int n, mat[100][100];
	printf("Input n:\n");
	if (scanf("%d", &n)) {
		if ((n <= 0) || (n > 100)) {
			printf("Input error!\n");
			return 0;
		}
	}
	else {
		printf("Input error!\n");
		return 0;
	}

	ZigzagMatrix(mat, n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%4d", mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
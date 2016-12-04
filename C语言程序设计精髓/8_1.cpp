#include <stdio.h>

/*矩阵转置v1.0
用二维数组作为函数参数，编程计算并输出n×n阶矩阵的转置矩阵。其中，n的值不超过10，n的值由用户从键盘输入。*/

void transpose(int mat[][10], int size){
	int temp;
	for (int i = 0; i < size; i++) {
		for (int j = i + 1; j < size; j++) {
			temp = mat[i][j];
			mat[i][j] = mat[j][i];
			mat[j][i] = temp;
		}
	}
}

int main() {
	int n, mat[10][10];
	printf("Input n:");
	scanf("%d", &n);
	printf("Input %d*%d matrix:\n", n, n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);
	}

	transpose(mat, n);

	printf("The transposed matrix is:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%4d", mat[i][j]);
		printf("\n");
	}
	return 0;
}
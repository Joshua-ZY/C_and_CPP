#include <stdio.h>

/*寻找鞍点
请编程找出一个M*N矩阵中的鞍点，即该位置上的元素是该行上的最大值，是该列上的最小值。
如果矩阵中没有鞍点，则输出“No saddle point！”
已知函数原型：void FindSaddlePoint(int a[][N], int m, int n);在该函数中输出有
无鞍点的信息。*/

#define M 10 //用宏定义矩阵的最大尺寸M、N为10*10，如果不够，可以修改这里。
#define N 10

void FindSaddlePoint(int a[][10], int m, int n) {
	int max_of_row[10], min_of_col[10];

	//找出每一行的最大值
	for (int i = 0; i < m; i++) {
		int max = a[i][0]; //将每一行的最大值max的初值赋为每一行的第一个值
		for (int j = 0; j < n; j++) {
			if (a[i][j] > max)
				max = a[i][j];
		}
		max_of_row[i] = max;
	}
	//找出每一列的最大值
	for (int i = 0; i < n; i++) {
		int min = a[0][i]; //将每一列的最大值max的初值赋为每一列的第一个值
		for (int j = 0; j < m; j++) {
			if (a[j][i] < min)
				min = a[j][i];
		}
		min_of_col[i] = min;
	}
	//找鞍点
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i][j] == max_of_row[i] && a[i][j] == min_of_col[j]) {
				printf("a[%d][%d] is %d\n", i, j, a[i][j]);
				return;
			}
		}
	}
	printf("No saddle point!\n");
	return;
}

int main() {
	int m, n, mat[M][N];
	printf("Input m,n:\n");
	scanf("%d,%d", &m, &n);
	printf("Input matrix:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);
	}
	FindSaddlePoint(mat, m, n);
	return 0;
}
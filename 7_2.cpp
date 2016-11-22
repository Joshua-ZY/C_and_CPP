#include <stdio.h>

/*寻找鞍点
给定一个n*n矩阵A。矩阵A的鞍点是一个位置（i，j），在该位置上的元素是第i行上的最大数，第j列上的最小数。一个矩阵A也可能没有鞍点。
你的任务是找出A的鞍点。
输入的第1行是一个正整数n, （1<=n<=100），然后有n行，每一行有n个整数，同一行上两个整数之间有一个或多个空格。
对输入的矩阵，如果找到鞍点，就输出其下标。下标为两个数字，第一个数字是行号，第二个数字是列号，均从0开始计数。
如果找不到，就输出NO。
题目所给的数据保证了不会出现多个鞍点。*/

//修改自哈工大HIT C语言程序设计精髓9_3（哈工大的更复杂一些）

#define M 100 //用宏定义矩阵的最大尺寸M、N为10*10，如果不够，可以修改这里。
#define N 100

void FindSaddlePoint(int a[][N], int m, int n) {
	int max_of_row[M], min_of_col[N];

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
				//printf("a[%d][%d] is %d\n", i, j, a[i][j]);
				printf("%d %d", i, j);
				return;
			}
		}
	}
	printf("NO\n");
	return;
}

int main() {
	int m, n, mat[M][N];
	scanf("%d,%d", &m);
	n = m;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);
	}
	FindSaddlePoint(mat, m, n);
	return 0;
}

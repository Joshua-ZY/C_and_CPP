#include <stdio.h>

/*检验并打印幻方矩阵。
幻方矩阵是指该矩阵中每一行、每一列、每一对角线上的元素之和都是相等的。从键盘输入
一个5×5的矩阵并将其存入一个二维整型数组中，检验其是否为幻方矩阵，并将其按指定格
式显示到屏幕上。*/

int main() {
	int mat[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			scanf("%d", &mat[i][j]);
	}
	int sum = 0;
	for (int i = 0; i < 5; i++)
		sum += mat[0][i];

	//检查行
	for (int i = 0; i < 5; i++) {
		int check = 0;
		for (int j = 0; j < 5; j++) 
			check += mat[i][j];
		if (check != sum) {
			printf("It is not a magic square!\n");
			return 0;
		}
	}

	//检查列
	for (int i = 0; i < 5; i++) {
		int check = 0;
		for (int j = 0; j < 5; j++)
			check += mat[j][i];
		if (check != sum) {
			printf("It is not a magic square!\n");
			return 0;
		}
	}

	//检查对角线
	int check1 = 0, check2 = 0;
	for (int i = 0; i < 5; i++) {
		check1 += mat[i][i];
		check2 += mat[i][4 - i];
	}
	if (check1 != sum || check2 != sum) {
		printf("It is not a magic square!\n");
		return 0;
	}

	//输出
	printf("It is a magic square!\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			printf("%4d", mat[i][j]);
		printf("\n");
	}
	return 0;
}
#include <stdio.h>

/*还原算术表达式（4分）
编写程序求算式“XYZ + YZZ = 三位数N”中XYZ的值，其中两数XYZ与YZZ相加的和N（99<n<1000）的值要求从键盘输入。*/

//注意，题目中并没有说XYZ不相等，因此下面注释了的这段程序不对，后面的是对的。

/*
int main() {
	int num;
	printf("Input n(n<1000):\n");
	scanf("%d", &num);
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			if (y != x) {
				for (int z = 0; z < 10; z++) {
					if (z != x && z != y) {
						if (100 * x + 110 * y + 12 * z == num) {
							printf("X=%d,Y=%d,Z=%d\n", x, y, z);
							return 0;
						}
					}
				}
			}
		}
	}
	printf("Invalid\n");
	return 0;
}
*/

int main() {
	int num;
	printf("Input n(n<1000):\n");
	scanf("%d", &num);
	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			for (int z = 0; z < 10; z++) {
				if (100 * x + 110 * y + 12 * z == num) {
					printf("X=%d,Y=%d,Z=%d\n", x, y, z);
					return 0;
				}
			}
		}
	}
	printf("Invalid\n");
	return 0;
}
#include <stdio.h>

/*计算球的反弹高度
题目内容：一个球从100米高度自由落下，每次落地后反跳回原高度的一半，再落下并反弹......，
求它在第5次和第10次落地时，分别共经过了多少米？第5次和第10次反弹分别是多高？要求计算结果
保留到小数点后3位。用户从键盘输入想要计算的第n次（n<=15）。程序中所有浮点数的数据类型均
为float。*/

int main() {
	float distance = 0, height = 100;
	int times;
	printf("Input:\n");
	scanf("%d", &times);
	for (int i = 0; i < times; i++) {
		if (i == 0)
			distance += height;
		else
			distance += height * 2;
		height /= 2;
	}
	printf("%d times:\n", times);
	printf("%.3f\n", distance);
	printf("%.3f\n", height);
	return 0;
}

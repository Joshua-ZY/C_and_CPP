#include <stdio.h>
#include <math.h>

/*题目内容：
根据的求根公式，计算并输出一元二次方程的两个实根，要求精确到小数点后4位。其中a，b，c的值
由用户从键盘输入。如果用户输入的系数不满足求实根的要求，输出错误提示 "error!"。程序中所
有的数据类型均为float。*/

int main() {
	float a, b, c, judge, mid;
	printf("Please enter the coefficients a,b,c:\n");
	scanf("%f,%f,%f", &a, &b, &c);
	judge = pow(b, 2) - 4 * a * c;
	if (judge < 0)
		printf("error!\n");
	else {
		mid = sqrt(judge);
		printf("x1=%7.4f, x2=%7.4f\n", (-b + mid) / (2 * a), (-b - mid) / (2 * a));
	}
	return 0;
}
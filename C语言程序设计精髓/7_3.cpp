#include <stdio.h>

/*寻找中位数v1.0
编写一个函数返回三个整数中的中间数。函数原型为： int mid(int a, int b, int c); 
函数功能是返回a，b，c三数中大小位于中间的那个数。*/

int find_mid(int a, int b, int c) {
	if ((a >= b && a <= c) || (a <= b && a >= c))
		return a;
	else
		return find_mid(b, c, a);
}

int main() {
	int a, b, c, mid;
	scanf("%d%d%d", &a, &b, &c);
	mid = find_mid(a, b, c);
	printf("The result is %d\n", mid);
	return 0;
}
#include <stdio.h>

//求最大公约数的经典递归算法——辗转相除法
int find_gcd(int a, int b) {
	if (b % a == 0)
		return a;
	else
		return find_gcd(b % a, a);
}

int main() {
	int top, bot, gcd;
	scanf("%d/%d", &top, &bot);
	gcd = find_gcd(top, bot);
	printf("%d/%d\n", top / gcd, bot / gcd);
	return 0;
}
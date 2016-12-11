#include <stdio.h>

/*凯撒密码
凯撒密码是罗马扩张时期朱利斯•凯撒（Julius Caesar）创造的，用于加密通过信使传递的作战命令，
其原理很简单，就是通过将字母表中的字母移动一定位置而实现加密。例如，每个字母按字母表顺序向后
移3位，如a加密后变成d，b加密后变成e......x加密后变成a，y加密后变成b，z加密后变成c。请编写一个
程序，将用户从键盘输入的文本字符串（只包含a～z的字符且长度小于100）进行加密后输出。
函数原型：void Caesar(char c[])
函数功能：计算凯撒密码*/

void Caesar(char c[]) {
	while (*c) {
		*c += 3;
		if (*c > 'z')
			*c -= ('z' - 'a' + 1);
		c++;
	}
	return;
}

int main() {
	char str[100];
	printf("Input a string:");
	gets_s(str);
	char *p = str;
	Caesar(str);
	puts(str);
	return 0;
}
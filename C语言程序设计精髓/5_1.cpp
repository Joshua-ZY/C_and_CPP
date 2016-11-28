#include <stdio.h>

/*6位密码输入检测
从键盘输入6位仅由数字0~9组成的密码。用户每输入一个密码并按回车键后，程序给出判断：如果是
数字，则原样输出该数字，并提示用户目前已经输入了几位密码，同时继续输入下一位密码；否则，
程序提示"error"，并让用户继续输入下一位密码。直到用户输入的密码全部是数字为止。*/

int main() {
	char input, backspace;
	printf("Input your password:\n");
	for (int i = 0; i < 6; ) {
		scanf("%c%c", &input, &backspace);
		if (input >= 48 && input <= 57) {
			printf("%c, you have enter %d-bits number\n", input, i + 1);
			i++;
		}
		else
			printf("error\n");
	}
	return 0;
}

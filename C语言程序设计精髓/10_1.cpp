#include <stdio.h>

/*数字字符串转换为整型数
从键盘输入一串字符（假设字符数少于8个），以回车表示输入结束，编程将其中的数字部分转换为整型数并以整型的形式输出。   
函数原型为 int Myatoi(char str[]);其中，形参数组str[]对应用户输入的字符串，函数返回值为转换后的整型数。
解题思路的关键是：1）判断字符串中的字符是否是数字字符；2）如何将数字字符转换为其对应的数字值；3）如何将每一个转
换后的数字值加起来形成一个整型数。*/

int Myatoi(char str[]) {
	int num = 0;
	while (*str) { //当str指向的值不为'\0'时，就执行循环体
		if (*str >= '0' && *str <= '9') //不记得ascii序号，可以直接用字符表示，字符就等同于字符的ascii序号
			num = 10 * num + (*str - '0');//现有数字乘10，即向高位推一位，空出的个位就是新数字，新数字的值就是新数字的ascii序号减去'0'的ascii序号
		str++;
	}
	return num;
}

int main() {
	char str[8];
	int num;
	printf("Input a string:");
	scanf("%7s", &str);
	num = Myatoi(str);
	printf("%d\n", num);
	return 0;
}
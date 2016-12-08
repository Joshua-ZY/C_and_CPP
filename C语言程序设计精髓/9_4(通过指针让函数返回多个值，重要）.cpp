#include <stdio.h>

/*统计重复字符
输入一串字符（字符数小于80），以回车表示输入结束，编程计算并输出这串字符中连续重复次数最多的字符和重复次数。
如果重复次数最多的字符有两个，则输出最后出现的那一个。
已知函数原型：
//函数功能：统计字符串中连续重复次数最多的字符及其重复的次数
//函数参数：str指向待统计的字符串，指针形参tag返回重复字符最后出现的下标位置 
//函数返回值：返回字符重复的次数
int CountRepeatStr(char str[], int *tag);
求解思路：设置一个计数器，遍历字符串中的所有字符，若str[i] == str[i+1]，则计数器加1，同时判断计数器的值是否
大于记录的最大重复次数max，若大于，则用计数器的值更新max，并记录该字符最后出现的位置i+1.若str[i] != str[i+1]，
则计数器重新初始化为1。遍历结束时，函数返回max的值。*/

int CountRepeatStr(char str[], int *tag) {
	int counter = 1; int max = 0;
	for (int i = 0; i < 80 - 1; i++) {
		if (str[i] == '\0')
			return max;
		else if (str[i] == str[i + 1])
			counter++;
		else {
			if (counter >= max) {
				max = counter;
				*tag = i; //将tag指针的值修改为重复次数最多的字符在字符串里最后一次出现的的地址
			}
			counter = 1;
		}
	}
}

int main() {
	char str[81];
	int pos, max; 
	printf("Input a string:\n");
	gets_s(str); //注意VS2015采用C11标准，gets变成了gets_s，以前标准包括在线测评需要用gets函数

	//C语言的函数只能返回一个值，而我们这里需要两个值，一个是重复最多的字符（是什么），还有一个
	//是重复最多的字符重复了多少次，后者用CountRepeatStr的返回值返回，前者可以通过传入一个地址，
	//在CountRepeatStr中修改这个地址对应的值，这样修改在main中也能保留，通过这样的方式将main中
	//pos这个变量修改为重复次数最多的数字最后一次出现的位置（在str数组中的下标）。
	max = CountRepeatStr(str, &pos);//将pos变量的地址传入CountRepeatStr中，因此在CountRepeatStr
									//中对于pos的修改在main中也会保留。
	printf("%c:%d\n", str[pos], max);
	return 0;
}
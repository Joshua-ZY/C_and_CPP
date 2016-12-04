#include <stdio.h>

/*兔子生崽问题
假设一对小兔的成熟期是一个月，即一个月可长成成兔，那么如果每对成兔每个月都可以生一对小兔，
一对新生的小兔从第二个月起就开始生兔子，试问从一对兔子开始繁殖，n(n<=12)月以后可有多少对
兔子（即当年第n月份总计有多少对兔子，含成兔和小兔）？请编程求解该问题，n的值要求从键盘输入。
参考答案：依题意，兔子的繁殖情况如图所示。图中实线表示成兔仍是成兔或者小兔长成成兔；虚线表
示成兔生小兔。观察分析此图可发现如下规律：
（1）每月小兔对数 = 上个月成兔对数。
（2）每月成兔对数 = 上个月成兔对数 + 上个月小兔对数。
综合（1）和（2）有：每月成兔对数 = 前两个月成兔对数之和。*/

//注意：如果这个题用递归做，会非常慢，其原因在于每次递归计算量都*2，因此是2^n的复杂度。
//用数组记忆结果是较快的方法.

int main() {
	int months, big_rabbits[12] = { 1, 1 }, little_rabbits[12] = { 0, 1 };
	printf("Input n(n<=12):\n");
	scanf("%d", &months);
	for (int i = 2; i < months; i++) {
		big_rabbits[i] = big_rabbits[i - 1] + big_rabbits[i - 2];
		little_rabbits[i] = big_rabbits[i - 1];
	}
	for (int i = 0; i < months; i++) 
		printf("%4d", big_rabbits[i] + little_rabbits[i]);
	printf("\nTotal=%d\n", big_rabbits[months - 1] + little_rabbits[months - 1]);
	return 0;
}
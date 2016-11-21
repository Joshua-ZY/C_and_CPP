#include <stdio.h>

/*完数
题目内容：一个正整数的因子是所有可以整除它的正整数。而一个数如果恰好等于除它本身外的因子之和，
这个数就称为完数。例如6=1＋2＋3(6的因子是1,2,3)。
现在，你要写一个程序，读入两个正整数n和m（1<=n<m<1000），输出[n,m]范围内所有的完数。
提示：可以写一个函数来判断某个数是否是完数。
输入格式:两个正整数，以空格分隔。
输出格式：其间所有的完数，以空格分隔，最后一个数字后面没有空格。如果没有，则输出一行文字：NIL
（输出NIL三个大写字母加回车）。*/

int is_perfect_num(int anum) {
	int sum = 0;
	for (int i = 1; i <= anum / 2; i++) {
		if (anum % i == 0)
			sum += i;
	}
	if (sum == anum)
		return 1;
	else
		return 0;
}

int main() {
	int min, max, have_perfect_num = 0;
	scanf("%d %d", &min, &max);
	//每个完数后面都要有一个空格，但是最后一个不需要，然而很难判断一个完数是不是区间内最后一个，因此特殊处理第一个完数，
	//第一个完数正常输出，前后无空格；后面每个完数前面都加一个空格。
	//这样have_perfect_num这个flag就有两个作用，第一是判断区间内是否有完数，从而决定是否输出NIL；第二是判断完数是不是
	//第一个（第一个完数肯定是have_perfect_num为0），从而决定前面要不要有空格
	for (int i = min; i <= max; i++) {
		if (is_perfect_num(i)) {
			if (have_perfect_num) //说明不是第一个完数
				printf(" %d", i);
			else {
				printf("%d", i);
				have_perfect_num = 1;
			}
		}
	}
	if (!have_perfect_num) {
		printf("NIL\n");
	}
	else
		printf("\n");
	return 0;
}
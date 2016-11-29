#include <stdio.h>

/*程序改错v2.0
下面代码的功能是将百分制成绩转换为5分制成绩，具体功能是：如果用户输入的是非法字符或者不在合理区间内的数据
（例如输入的是a,或者102，或-45等），则程序输出 Input error!，并允许用户重新输入,直到输入合法数据为止，
并将其转换为5分制输出。目前程序存在错误，请将其修改正确。并按照下面给出的运行示例检查程序。*/

int input() {
	int score;
	char eater;
	printf("Please input score:\n");
	//scanf的返回值是接收到了几个参数，因为此处的接收参数类型是整形%d，
	//如果输入值是char类型比如a或者各种符号，那么scanf接受参数为0，返回0，所以可以用这个while语句判别
	//scanf是否接收成功，如果不成功，再次执行scanf
	while (!scanf("%d", &score)) {
		//需要注意的是，在再次执行scanf之前，需要将之前缓冲区里scanf无法接受的字符
		//吃掉。因为输入的是char，而scanf接受的是%d，因此这个char输入值还在输入缓冲区里存着，
		//如果不设置一个eater将其吃掉，那么就会陷入无限循环（scanf返回值永远是0，执行while循环，无限
		//scanf，但是又无限返回0）。
		scanf("%c", &eater);
		printf("Input error!\n");
		printf("Please input score:\n");
	}
	return score;
}

int main()
{
	int score;
	char grade;
	score = input();
	//关键在于如果input不在范围内，允许重新输入，因此可以把input写成一个函数，反复call
	while (score < 0 || score > 100) {
		printf("Input error!\n");
		score = input();
	}
	if (score >= 90)
		grade = 'A';
	else if (score >= 80)
		grade = 'B';
	else if (score >= 70)
		grade = 'C';
	else if (score >= 60)
		grade = 'D';
	else
		grade = 'E';
	printf("grade: %c\n", grade);
	return 0;
}

#include <stdio.h>

/*23根火柴游戏
请编写一个简单的23 根火柴游戏程序，实现人跟计算机玩这个游戏的程序。为了方便程序自动评测，
假设计算机移动的火柴数不是随机的，而是将剩余的火柴根数对3求余后再加1来作为计算机每次取走的
火柴数。如果计算机打算移走的火柴数等于剩下的火柴数，则将计算机打算移走的火柴数减1。但是
计算机不可以不取，剩下的火柴数为1时，必须取走1根火柴。假设游戏规则如下：
1）游戏者开始拥有23根火柴棒；
2）每个游戏者轮流移走1 根、2 根或3 根火柴；
3）谁取走最后一根火柴为失败者。*/

int computer(int remain) {
	if (remain == 1) {
		printf("The number of matches that have been moved by the computer is:%d\n", 1);
		return 0;
	}
	else if (remain <= 3) {
		printf("The number of matches that have been moved by the computer is:%d\n", remain - 1);
		return 1;
	}
	else {
		int plan = remain % 3 + 1;
		printf("The number of matches that have been moved by the computer is:%d\n", plan);
		return remain - plan;
	}
}

int person(int remain) {
	int plan;
	do	{
		printf("Please enter the number of matches you are moving:\n");
		scanf("%d", &plan);
		if (plan > 3 || plan < 1 || plan > remain)
			printf("The number you entered is wrong，please re-enter!\n");
	} while (plan > 3 || plan < 1 || plan > remain);
	printf("The number of matches you are moving is:%d\n", plan);
	return remain - plan;
}

int main() {
	int remain = 23;
	printf("Game start!\n");
	printf("Note: the maximum number is 3\n");
	while (1) {
		remain = person(remain);
		printf("The number of matches left is:%d\n", remain);
		if (remain == 0) {
			printf("I'm sorry. You lost!\n");
			return 0;
		}

		remain = computer(remain);
		printf("The number of matches left is:%d\n", remain);
		if (remain == 0) {
			printf("Congratulations！You won!\n");
			return 0;
		}
	}
}

#include <stdio.h>

/*山地训练
为了能在下一次跑步比赛中有好的发挥，小白在一条山路上开始了她的跑步训练。她希望能在每次训练中跑得尽可能远，
不过她也知道农场中的一条规定：女孩子独自进山的时间不得超过M秒（1 <= M <= 10,000,000）。假设整条山路划分
成T个长度相同的路段（1 <= T <= 100,000），并且小白用si表示第i个路段的路况，用u、f、d这3个字母分别表示
第i个路段是上坡、平地、下坡。小白跑完一段上坡路的耗时是U秒（1 <= U <= 100），跑完一段平地的耗时是F秒
（1 <= F <= 100），跑完一段下坡路的耗时是D秒（1 <= D <= 100）。注意，沿山路原路返回时，原本是上坡的路段
变成了下坡路段，原本是下坡的路段变成了上坡路段。小白想知道，在能按时返回农场的前提下，她最多能在这条山路上
跑多少个路段。请你编程帮助她计算。
函数原型：long Fun(long M, long T, long U, long F, long D, char str[])
函数功能：计算在限时M秒内T个路段的情况下，最多往返可跑的路段数。 参数：M,T,U,F,D分别代表限时、路段数，
以及上坡、平地、下坡的耗时,数组str保存整条山路的路段状况,返回值：最多可跑的路段数*/

long Fun(long M, long T, long U, long F, long D, const char str[]) {
	int time = 0, num = 0;
	for (int i = 0; i < T; i++) {
		if (str[i] == 'f')
			time += 2 * F;
		else
			time += (U + D);//不论是上坡还是下坡，往返需要经过两次，一次上坡一次下坡
		if (time <= M)
			num++;
		else
			return num;
	}
	return num;
}

int main() {
	long M, T, U, F, D, num;
	char cond[100000];
	printf("Input M,T,U,F,D:");
	scanf("%ld%ld%ld%ld%ld", &M, &T, &U, &F, &D);
	printf("Input conditions of road:");
	scanf("%s", cond);
	num = Fun(M, T, U, F, D, cond);
	printf("num=%ld\n", num);
	return 0;
}
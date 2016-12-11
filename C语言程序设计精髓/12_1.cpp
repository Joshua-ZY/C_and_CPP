#include <stdio.h>

/*计算时间差
用结构体定义时钟类型，编程从键盘任意输入两个时间（例如4时55分和1时25分），计算并输出这两个时间之间的间隔。
要求不输出时间差的负号。结构体类型定义如下：
typedef struct clock
{
    int hour;
    int minute;
    int second;
} CLOCK;
函数原型： CLOCK CalculateTime(CLOCK t1, CLOCK t2);
函数功能：计算并返回两个时间t1和t2之间的差*/

typedef struct clock
{
	int hour;
	int minute;
	int second;
} CLOCK;

CLOCK CalculateTime(const CLOCK *t1, const CLOCK *t2) { //传指针效率更高，如果不想结构体被修改，可以用const进行保护
	int total1, total2, diff;
	CLOCK ans = { 0 };

	total1 = t1->hour * 60 + t1->minute;
	total2 = t2->hour * 60 + t2->minute;
	diff = total1 - total2;
	if (diff >= 0) {
		ans.hour = diff / 60;
		ans.minute = diff % 60;
	}
	else {
		ans.hour = - diff / 60;
		ans.minute = - diff % 60;
	}
	return ans;
}

int main() {
	CLOCK time1 = { 0 }, time2 = { 0 }, ans; //结构体初始化，初始化之后，未赋值的项全部为0（不进行初始化的话，这些项的值不确定）。

	printf("Input time one:(hour，minute):");
	scanf("%d,%d", &time1.hour, &time1.minute);
	printf("Input time two: (hour，minute):");
	scanf("%d,%d", &time2.hour, &time2.minute);

	ans = CalculateTime(&time1, &time2);
	printf("%dhour,%dminute\n", ans.hour, ans.minute);
	return 0;
}



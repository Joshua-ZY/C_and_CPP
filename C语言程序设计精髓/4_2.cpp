#include <stdio.h>

/*题目内容：
已知某城市普通出租车收费标准为：起步里程为3公里，起步费为8元，10公里以内超过起步里程的部分，每公里
加收2元，超过10公里以上的部分加收50%的回空补贴费，即每公里3元。出租车营运过程中，因堵车和乘客要求
临时停车等客的，按每5分钟加收2元
计算，不足5分钟的不计费。从键盘任意输入行驶里程（精确到0.1公里）和等待时间（精确到分钟），请编程计
算并输出乘客应支付的车费，对结果进行四舍五入，精确到元。
*/

int main() {
	float distance, money = 8; int time;
	printf("Input distance and time:");
	scanf("%f,%d", &distance, &time);
	if (distance > 10) {
		money += 3 * (distance - 10);
		distance = 10;
	}
	if (distance > 3) 
		money += 2 * (distance - 3);
	money += time / 5 * 2;
	printf("fee = %.0f\n", money);
	return 0;
}
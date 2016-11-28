#include <stdio.h>

/*检测输入数据中奇数和偶数的个数（4分）
题目内容：从键盘输入一系列正整数，输入-1表示输入结束（-1本身不是输入的数据）。编写程序判断输入数据
中奇数和偶数的个数。如果用户输入的第一个数据就是-1，则程序输出"over!"。否则。用户每输入一个数据，
输出该数据是奇数还是偶数，直到用户输入-1为止，分别统计用户输入数据中奇数和偶数的个数。*/

int main() {
	int num, counter_odd = 0, counter_even = 0;
	printf("Please enter the number:\n");
	while (1) {
		scanf("%d", &num);
		if (num == -1) {
			if (counter_odd == 0 && counter_even == 0){
				printf("over!\n");
				break;
			}
			else
				break;
		}
		else if (num % 2 == 0) {
			printf("%d:even\n", num);
			counter_even++;
		}
		else {
			printf("%d:odd\n", num);
			counter_odd++;
		}
	}
	printf("The total number of odd is %d\n", counter_odd);
	printf("The total number of even is %d\n", counter_even);
	return 0;
}

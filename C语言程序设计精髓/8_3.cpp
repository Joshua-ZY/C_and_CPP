#include <stdio.h>

/*抓交通肇事犯
一辆卡车违犯交通规则，撞人后逃跑。现场有三人目击事件，但都没记住车号，只记下车号的一些特征。
甲说：牌照的前两位数字是相同的；乙说：牌照的后两位数字是相同的，但与前两位不同；丙是位数学
家，他说：四位的车号刚好是一个整数的平方。现在请根据以上线索帮助警方找出车号以便尽快破案。
[提示]：假设这个4位数的前两位数字都是i，后两位数字都是j，则这个可能的4位数
k = 1000*i + 100*i + 10*j + j
式中，i和j都在0～9变化。此外，还应使k=m*m，m是整数。由于k是一个4位数，所以m值不可能小于32。*/

int main() {
	int num, thous, hunds, tens, ones;
	for (int i = 32; i < 100; i++) {
		num = i * i;
		thous = num / 1000;
		hunds = num % 1000 / 100;
		if (thous == hunds) {
			tens = num % 100 / 10;
			ones = num % 10;
			if (tens == ones && tens != thous) {
				printf("k=%d,m=%d\n", i * i, i);
				return 0;
			}
		}
	}
}


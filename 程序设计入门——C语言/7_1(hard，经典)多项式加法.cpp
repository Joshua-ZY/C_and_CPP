#include <stdio.h>

/*多项式加法
一个多项式可以表达为x的各次幂与系数乘积的和，比如：2x6+3x5+12x3+6x+20.现在，你的程序要读入两个多项式，
然后输出这两个多项式的和，也就是把对应的幂上的系数相加然后输出。程序要处理的幂最大为100。
输入格式:
总共要输入两个多项式，每个多项式的输入格式如下：每行输入两个数字，第一个表示幂次，第二个表示该幂次的系数，
所有的系数都是整数。第一行一定是最高幂，最后一行一定是0次幂。
注意第一行和最后一行之间不一定按照幂次降低顺序排列；如果某个幂次的系数为0，就不出现在输入数据中了；0次幂的
系数为0时还是会出现在输入数据中。*/

//这个题用函数很方便，因为输出的符号，系数，次数各自的corner case很多，如果写成一段程序进行判别，会非常复杂，
//各种corner case排列组合过多，因此不如各自设置一个输出函数，每个函数把各自的输出管好

//输出符号
void output_mark(int coeff, int first_flag){
    if (coeff > 0){ //如果系数为正，第一项不输出符号，后面的输出加号；
        if (first_flag)
            return;
        else printf("+");
    }
    else //如果系数为负，不需要输出（因为coeff本身带有符号）
        return;
}
//输出系数
void output_coeff(int coeff){
    if (coeff == 1) //如果系数为1.不输出系数，其他情况下输出系数
        return;
    else printf("%d", coeff);
}
//输出次数
void output_power(int power){
    if (power == 1) //如果次数为1，只输出x；如果次数为0,不输出x和次数；其他情况，输出x和次数
        printf("x");
    else if (power == 0)
        return;
    else printf("x%d", power);
}

int main() {
    //Input
	int poly1[100] = { 0 }, poly2[100] = { 0 }, power, coeff;
	do {
		scanf("%d%d", &power, &coeff);
		poly1[power] = coeff;
	} while (power > 0);
	do {
		scanf("%d%d", &power, &coeff);
		poly2[power] = coeff;
	} while (power > 0);
    //Output
	int sum_coeff, first_flag = 1;
	for (int i = 99; i >= 0; i--) {
		sum_coeff = poly1[i] + poly2[i];
		if(sum_coeff){
            output_mark(sum_coeff, first_flag);
            output_coeff(sum_coeff);
            output_power(i);
            first_flag = 0;
		}
	}
    if (first_flag) //如果循环结束，还没有输出第一次，说明全部系数都为0，因此输出的多项式为0
        printf("0");
	printf("\n");
	return 0;
}

#include <stdio.h>

/*题目内容：
你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。
如输入1234，则输出：yi er san si
注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：
fu er san si yi
输入格式:一个整数，范围是[-100000,100000]。
输出格式：表示这个整数的每一位数字的汉语拼音，每一位数字的拼音之间以空格分隔，末尾没有空格。*/

//用数组的方法来做：
/*
int main() {
	char num[8];
	scanf("%s", &num);
	for (int i = 0; i < 8; i++){
		switch (num[i]) //switch后面的条件只能是整数或者char，char的话按照ascii序号转为整数
		{
		case '-':printf("fu"); break; //ascii序号45是负号，序号48-57是数字0-9，case后面跟char可以，跟ascii序号也可以
		case '0':printf("ling"); break;
		case '1':printf("yi"); break;
		case 50:printf("er"); break; //case后面跟ascii序号也可以
		case 51:printf("san"); break;
		case 52:printf("si"); break;
		case 53:printf("wu"); break;
		case 54:printf("liu"); break;
		case 55:printf("qi"); break;
		case 56:printf("ba"); break;
		case 57:printf("jiu"); break;
		}
		if (num[i + 1] == '\0') {
			printf("\n");
			return 0;
		}
		else
			printf(" ");
	}
}
*/

//用循环的方法来做

int main(){
    int num, digit = 1, mask = 1;
    scanf("%d", &num);
    if (num < 0){
        printf("fu ");
        num = -num;
    }

    //求出输入数字的位数
    int newnum = num;
    while (newnum > 9){
        newnum /= 10;
        mask *= 10;
        digit++;
    } ;

    for (int i = 0; i < digit; i++){
        int largest = num / mask;
        switch (largest)
		{
		case 0:printf("ling"); break;
		case 1:printf("yi"); break;
		case 2:printf("er"); break;
		case 3:printf("san"); break;
		case 4:printf("si"); break;
		case 5:printf("wu"); break;
		case 6:printf("liu"); break;
		case 7:printf("qi"); break;
		case 8:printf("ba"); break;
		case 9:printf("jiu"); break;
		}
		if (i != digit - 1) //最后一次循环，不输出空格，
            printf(" ");
        num %= mask;
        mask /= 10;
    }
    return 0;
}

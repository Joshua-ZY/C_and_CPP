#include <stdio.h>

/*逆序的三位数
程序每次读入一个正三位数，然后输出逆序的数字。注意当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。
提示：用%10可以得到个位数，用/100可以得到百位数...。将这样得到的三个数字合起来：百位*100+十位*10+个位，就得到了结果。
输入格式:每个测试是一个3位的正整数。
输出格式：输出逆序的数。*/

int main(){
    int num, ones, tens, hunds;
    scanf("%d", &num);
    hunds = num / 100;
    tens = num % 100 / 10;
    ones = num %10;
    num = hunds + tens * 10 + ones *100;
    printf("%d", num);
    return 0;
}

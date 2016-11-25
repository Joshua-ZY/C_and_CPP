#include <stdio.h>
#include <math.h>

int main(){
    int num, thous, hands, tens, ones;
    printf("Input x:\n");
    scanf("%d", &num);
    if (num < 0)
        num = -num;
    thous = num / 1000; hands = (num % 1000) / 100;
    tens = (num % 100) / 10; ones = num % 10;
    num = ones * 1000 + tens * 100 + hands * 10 + thous;
    printf("y=%d\n", num);
    int num1 = ones * 10 + tens, num2 = hands *10 + thous, result;
    result = pow(num1, 2) + pow(num2,2);
    printf("a=%d,b=%d\n", num1, num2);
    printf("result=%d\n", result);
}

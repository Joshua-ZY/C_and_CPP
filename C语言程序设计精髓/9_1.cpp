#include <stdio.h>

/*重复数字检查
从键盘输入一个数，检查这个数中是否有重复出现的数字。如果这个数中有重复出现的数字，则显示“Repeated digit!”；
否则显示“No repeated digit!”。已知函数原型：int CountRepeatNum(int count[], int n);*/

int CountRepeatNum(int count[], long int num){
    int last_digit;
    while (num != 0){
        last_digit = num % 10;
        count[last_digit]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++){
        if (count[i] > 1)
            return count[i];
    }
    return -1;
}

int main(){
    long int num;
    int numcount[10] = {0};
    printf("Input n:\n");
    scanf("%ld", &num);

    if (CountRepeatNum(numcount, num) == -1)
        printf( "No repeated digit!\n");
    else
        printf("Repeated digit!\n");

    return 0;
}

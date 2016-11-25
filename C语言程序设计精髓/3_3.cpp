#include <stdio.h>
/*从键盘输入某同学的英文名（小写输入，假设学生的英文名只包含3个字母。如: tom），编写程序在屏幕
上输出该同学的英文名，且首字母大写（如: Tom）。同时输出组成该英文名的所有英文字符在26个英文字
母中的序号。*/

int main(){
    char n1, n2, n3, n1cap;
    int no1, no2, no3;
    printf("Input your English name:\n");
    scanf("%c%c%c", &n1, &n2, &n3);
    no1 = n1 - 96; no2 = n2 - 96; no3 = n3 - 96;
    n1cap = n1 - 32;
    printf("%c%c%c\n", n1cap, n2, n3);
    printf("%c:%d\n", n1, no1);
    printf("%c:%d\n", n2, no2);
    printf("%c:%d\n", n3, no3);
    return 0;
}

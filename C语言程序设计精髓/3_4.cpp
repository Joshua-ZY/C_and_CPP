#include <stdio.h>
#include <math.h>

/*从键盘输入某人的身高（以厘米为单位，如174cm）和体重（以公斤为单位，如70公斤），将身高
（以米为单位，如1.74m）和体重（以斤为单位，如140斤）输出在屏幕上，并按照以下公式计算并
输出体指数，要求结果保留到小数点后2位。程序中所有浮点数的数据类型均为float。
假设体重为w公斤，身高为h米，则体指数的计算公式为：t = w/(h^2)*/

int main (){
    int height_in, weight_in;
    float height, weight, t;
    printf("Input weight, height:\n");
    scanf("%d,%d", &weight_in, &height_in);
    height = (float) height_in / 100; weight = weight_in;
    weight_in *= 2;
    printf("weight=%d\n", weight_in);
    printf("height=%.2f\n", height);
    t = weight / pow(height, 2);
    printf("t=%.2f\n", t);
    return 0;
}

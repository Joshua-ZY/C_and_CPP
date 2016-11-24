#include <stdio.h>
#include <math.h>
using namespace std;

int main(){
    float a, b, ans;
    printf("Please input x and y:\n");
    scanf("%f,%f", &a, &b);
    ans = pow(a,2) + pow(b,2);
    printf("Result=%.2f\n", ans);
}

#include <iostream>
using namespace std;

/*冒泡排序算法，原理：外循环i每次增长1，就把序列的前i+1个数排好了；j是位置，最坏的情况下，序列的前i+1个数的最小值
在末尾，那么每次循环最小值都往前移动一个，移动n - i次就移到头上了。*/
int main() {
    int n, a[1000]; //总共n个数排序，n不超过1000。a用来保存这些数
    cin >> n; // 输入排序总数，将这个总数赋值给n
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // 冒泡，不断比较相邻的两个数，如果顺序错了，那么就交换
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n - i; j++){
            if (a[j - 1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    // 依次输出
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}


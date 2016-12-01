#include <iostream>
using namespace std;

/*冒泡排序算法，原理：从第一个值开始，比较相邻两个值，如果前面的比后面的大，就交换，
这样一直遍历到n-1个值的时候，就可以确定第n个值是最大值；然后重来，这一次遍历到n-2就
可以停止了（因为n已经是最大值，不需要再比较了）。*/
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


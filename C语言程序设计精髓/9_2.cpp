#include <stdio.h>

/*教授的课
教授正在为一个有N个学生的班级讲授离散数学课。他对某些学生缺乏纪律性很不满意，于是决定：
如果课程开始后上课的人数小于K，就取消这门课程。从键盘输入每个学生的到达时间，请编程确定
该课程是否被取消。如果该门课程被取消，则输出“Yes”，否则输出“No”。假设教授在时刻0开始上
课。如果一个学生的到达时间是非正整数，则表示该学生在上课前进入教室。如果一个学生的到达时
间是正整数，则表示该学生在上课后进入教室。如果一个学生在时刻0进入教室，也被认为是在上课
前进入教室。假设到达时间的绝对值不超过100，学生数N不超过1000。要求在输入学生的到达时间之
前，先输入N和K。*/

//函数功能：根据数组a中记录的学生到达时间确定课程是否被取消，取消则返回1，否则返回0
int IsCancel(int a[], int n, int k){
    int sum_ontime = 0;
    for(int i = 0; i < n; i++){
        if (a[i] <= 0)
            sum_ontime++;
    }
    if (sum_ontime >= k)
        return 0;
    else
        return 1;
}

int main(){
    int n, k, time[1000];
    printf("Input n,k:\n");
    scanf("%d,%d", &n, &k);
    for(int i = 0; i < n; i++)
        scanf("%d", &time[i]);

    if (IsCancel(time, n, k))
        printf("YES");
    else
        printf("NO");
    return 0;
}

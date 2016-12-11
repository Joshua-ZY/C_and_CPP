#include <stdio.h>

/*奖学金发放
某校的惯例是在每学期的期末考试之后发放奖学金。发放的奖学金共有五种，每项奖学金获取的条件分别如下：
1) 院士奖学金：期末平均成绩高于80分（>80），并且在本学期内发表1篇或1篇以上论文的学生每人均可获得8000元；
2) 五四奖学金：期末平均成绩高于85分（>85），并且班级评议成绩高于80分（>80）的学生每人均可获得4000元；
3) 成绩优秀奖：期末平均成绩高于90分（>90）的学生每人均可获得2000元；
4) 西部奖学金：期末平均成绩高于85分（>85）的西部省份学生每人均可获得1000元；
5) 班级贡献奖：班级评议成绩高于80分（>80）的学生干部每人均可获得850元；
只要符合上述条件就可获得相应的奖项，每项奖学金的获奖人数没有限制，每名学生也可以同时获得多项奖学金。例如
姚明的期末平均成绩是87分，班级评议成绩82分，同时他还是一位学生干部，那么他可以同时获得五四奖学金和班级
贡献奖，奖金总数是4850元。
现在给出若干学生的相关数据（假设总有同学能满足获得奖学金的条件），请编程计算哪些同学获得的奖金总数最高。
结构体类型定义如下：
typedef struct winners
{
    char name[20];
    int finalScore;
    int classScore;
    char work;
    char west;
    int paper;
    int scholarship;
} WIN;

函数原型：void Addup(WIN stu[], int n);
函数原型：int FindMax(WIN student[], int n);*/

#define N 10

typedef struct winners
{
	char name[20];
	int finalScore;
	int classScore;
	char work;
	char west;
	int paper;
	int scholarship;
} WIN;

void Addup(WIN stu[], int i) {
	if ((stu[i].finalScore > 80) && (stu[i].paper > 0))
		stu[i].scholarship += 8000;
	if ((stu[i].finalScore > 85) && (stu[i].classScore > 80))
		stu[i].scholarship += 4000;
	if (stu[i].finalScore > 90)
		stu[i].scholarship += 2000;
	if ((stu[i].finalScore > 85) && (stu[i].west == 'Y'))
		stu[i].scholarship += 1000;
	if ((stu[i].classScore > 80) && (stu[i].work == 'Y'))
		stu[i].scholarship += 850;
	return;
}

int FindMax(WIN student[], int n) {
	int highest = 0, highestID;
	for (int i = 0; i < n; i++) {
		if (student[i].scholarship > highest) {
			highest = student[i].scholarship;
			highestID = i;
		}
	}
	return highestID;
}

int main() {
	int n, maxstu;
	WIN students[N] = { {0} };

	printf("Input n:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Input name:");
		scanf("%s", &students[i].name);
		printf("Input final score:");
		scanf("%d", &students[i].finalScore);
		printf("Input class score:");
		scanf("%d", &students[i].classScore);
		printf("Class cadre or not?(Y/N):");
		scanf(" %c", &students[i].work); //注意，%c前面有个空格，用来吃掉回车
		printf("Students from the West or not?(Y/N):");
		scanf(" %c", &students[i].west); //注意，%c前面有个空格，用来吃掉回车
		printf("Input the number of published papers:");
		scanf("%d", &students[i].paper);
		Addup(students, i);
		printf("name:%s,scholarship:%d\n", students[i].name, students[i].scholarship);
	}

	
	maxstu = FindMax(students, n);
	printf("%s get the highest scholarship %d\n", students[maxstu].name, students[maxstu].scholarship);
	return 0;
}
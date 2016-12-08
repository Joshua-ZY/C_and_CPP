#include <stdio.h>

/*颠倒句子中的单词顺序
从键盘输入一个句子（假设字符数小于100个），句子中的单词之间用空格分隔，句子必须以一个标点符号作为结尾，
句子开头和末尾标点符号前均没有空格，以回车表示输入结束，请编程颠倒句中的单词顺序并输出。
函数原型：int Inverse(char str1[], char str2[][N])
函数功能：将str1中的单词颠倒顺序后分别存入str2的每一行，返回str1中的单词数。*/

int Inverse(char str1[], char str2[][100]) {
	for (int i = 0, j = 0, k = 0; i < 100; i++, k++) {
		if (str1[i]) {
			if (str1[i] == ' ') {
				str2[j][k] = '\0';//如果str1中是空格，说明开始了新单词，因此str2中现在本行输入结束符，然后换行
				j++; k = -1; //从下一行开始记录这个单词，注意我们希望下一次循环的时候k = 0；但是每次循环结束k会加1，因此k此处要回到-1而不是0
			}
			else
				str2[j][k] = str1[i];
		}
		else {
			str2[j][k] = '\0';
			return j; //返回最后一个单词（和结束的符号）所在的位置
		}
	}
}

int main() {
	char str1[100], str2[100][100];
	printf("Input a sentence:");
	gets_s(str1); //提交答案要改成旧标准的gets函数

	int last = Inverse(str1, str2);
	char mark;
	//下面这个循环是将str2最后一行，也就是有组后一个单词和结束符号的一行遍历，然后打印出这个单词
	//（因为最后一个单词是第一个打印），再将结束符号保存到变量mark中，因为结束符号最后才打印
	for (int i = 0; i < 100; i++) {
		mark = str2[last][i];
		if ((mark >= 'A' && mark <= 'Z') || (mark >= 'a' && mark <= 'z'))
			printf("%c", mark);
		else
			break;
	}
	//因为第一个单词上面已经打印了，所以后面每个单词的输入形式就固定位空格+单词
	for (int i = last - 1; i >= 0; i--)
		printf(" %s", str2[i]);
	printf("%c", mark);
	return 0;
}

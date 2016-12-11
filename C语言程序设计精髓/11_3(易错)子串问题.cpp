#include <stdio.h>

/*子串判断
从键盘输入两个长度小于80的字符串A和B，且A的长度大于B的长度，编程判断B是不是A的子串，如果是，
则输出”Yes”，否则输出”No”。这里所谓的该串的子串是指字符串中任意多个连续的字符组成的子序列。
函数原型：int IsSubString(char a[], char b[])
函数功能：判断b是否是a的子串，是则返回1，否则返回0*/
 
int IsSubString(char a[], char b[]){
	for (int i = 0; i < 80; i++)
		if (a[i]) {
			if (a[i] == b[0]) {
				for (int j = 0; j < 80; j++) {
					if (b[j]) {
						if (a[i + j] != b[j]) //注意，如果a[i] = b[0],且后面的一直相等，直到a[i + j] != b[j]，那么
							break;			//此时不能继续比较a[i + j + 1]是不是等于b[0]，而是应该从a[i = 1]接着
											//比，这样才能检测出a = "aaab", b = "aab"这种情况。
					}
					else
						return 1;
				}
			}
		}
		else
			return 0;
}

int main() {
	int ans;
	char str1[80], str2[80];

	printf("Input the first string:");
	gets_s(str1);
	printf("Input the second string:");
	gets_s(str2);

	ans = IsSubString(str1, str2);
	if (ans)
		printf("Yes");
	else
		printf("No");
	printf("\n");
	return 0;
}
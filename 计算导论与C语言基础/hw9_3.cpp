#include <iostream>
using namespace std;

/*描述:一个以'.'结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式
输入:一个以'.'结尾的简单英文句子（长度不超过500），单词之间用空格分隔，没有缩写形式和其它特殊形式
输出:该句子中最长的单词。如果多于一个，则输出第一个*/

int main() {
	char str[501];
	cin.get(str, 500, '.');
	int count_start = 0, count_end = 0, longest_start = 0, longest_length = 0;
	for (int i = 0; i < 500; i++) {
		if (str[i] == ' ' || str[i] == '\0') {
			if ((count_end - count_start) > longest_length) {
				longest_length = count_end - count_start;
				longest_start = count_start;
			}
			count_start = i + 1;
		}
		count_end++;
		if (str[i] == '\0')
			break;
	}
	for (int i = 0; i < longest_length; i++)
		cout << str[longest_start + i];
	return 0;
}
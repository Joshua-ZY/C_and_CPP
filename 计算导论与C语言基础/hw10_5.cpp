#include <iostream>
#include <cstring>
using namespace std;

/*编程题＃5：字符串插入
描述：有两个字符串str和substr，str的字符个数不超过10，substr的字符个数为3。
（字符个数不包括字符串结尾处的'\0'。）将substr插入到str中ASCII码最大的那个
字符后面，若有多个最大则只考虑第一个。
输入：输入包括若干行，每一行为一组测试数据，格式为str substr
输出：对于每一组测试数据，输出插入之后的字符串。*/

int main() {
	while (1) {
        //初始化str，substr和result必须在while循环里面，否则每次开始不能够得到初始化的话，
        //上一次运算的残留值可能会影响到下一次运算
	    char str[11] = { '\0' }, substr[4] = { '\0' }, result[14] = { '\0' };
        if (!(cin >> str >> substr))
            break;
		int len_str = strlen(str), len_sub = strlen(substr), max_id = 0;
		for (int i = 0; i < len_str; i++) {
			if (str[i] > str[max_id])
				max_id = i;
		}
		for (int i = 0; i <= max_id; i++)
			result[i] = str[i];
		for (int i = 0; i < len_sub; i++)
			result[i + max_id + 1] = substr[i];
		for (int i = 0; i < len_str - (max_id + 1); i++)
			result[i + max_id + 1 + len_sub] = str[i + max_id + 1];
		cout << result << endl;
	}
	return 0;
}

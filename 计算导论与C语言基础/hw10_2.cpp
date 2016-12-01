#include <iostream>
using namespace std;

/*能被3，5，7整除的数
描述:输入一个整数，判断它能否被3，5，7整除，并输出以下信息：
1、能同时被3，5，7整除（直接输出3 5 7，每个数中间一个空格）；
2、能被其中两个数整除（输出两个数，小的在前，大的在后。例如：3 5或者 3 7或者5 7,中间用空格分隔）
3、能被其中一个数整除（输出这个除数）
4、不能被任何数整除；（输出小写字符'n',不包括单引号)
输入:一个数字
输出:一行数字,从小到大排列,包含3,5,7中为该输入的除数的数字,数字中间用空格隔开*/

int main() {
	int num;
	while (cin >> num){
        char result[4] = { '\0' }; //虽然输出值最大只能有3个（3 5 7），但是要多预留一个'\0'，否则一次性输出result
                                //即cout << result << enld; 会出现烫烫烫之类的乱码
        if (num % 3 == 0)
            result[0] = '3';
        if (num % 5 == 0)
		result[1] = '5';
        if (num % 7 == 0)
            result[2] = '7';

        bool flag = 1; //是否需要输出n的flag，flag为true输出n
        for (int i = 0; i < 3; i++) {
            if (result[i] != '\0'){
                cout << result[i] << ' ';
                flag = 0;
            }
        }
        if (flag)
            cout << 'n';
        cout << endl;
        }
	return 0;
}

#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sumn = 0, sumd = 1;//储存结果，sumn/sumd
	while (n--) {
		int num, deno;
		char slash;//专门用来吃掉/的
		cin >> num >> slash >> deno;
		//先求分母的最大公约数gcd，防止分母相乘结果太大发生溢出(比如两个1/100000000求和，如果不先约分，分母会溢出），这里用的是欧几里得法，
		int a = sumd, b = deno, c;
		while (a != 0) {
			c = a; a = b%a; b = c;
		}
		int gcd = b;
		//求和
		sumn = sumn * (deno / gcd) + num * (sumd / gcd);
		sumd = (sumd / gcd) * (deno / gcd) * gcd;
	}
	//约分，求分子分母的公约数
	int a = sumd, b = sumn, c;
	while (a != 0) {
		c = a; a = b%a; b = c;
	}
	int gcd = b;
	sumn /= b;
	sumd /= b;

	if (sumd > 1) //判断分母是不是1，如果是1，直接以整数形式输出
		cout << sumn << '/' << sumd << endl;
	else
		cout << sumn << endl;
	return 0;
}

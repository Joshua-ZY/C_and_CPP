#include <stdio.h>

/*星期判断
请输入星期几的第一个字母（不区分大小写）来判断一下是星期几，如果第一个字母一样，
则继续判断第二个字母(小写)，否则输出“data error”。*/

int main() {
	char input1, input2;
	printf("please input the first letter of someday:\n");
	scanf("%c", &input1);
	switch (input1)
	{
	default:printf("data error\n");	break;
	case('M'):
	case('m'):printf("monday\n");	break;
	case('T'):
	case('t'):switch (printf("please input second letter:\n"), scanf(" %c", &input2), input2) //逗号表达式
															//执行完前面所有的命令，但返回最后一个命令的值
													//同时注意%c前面要留空格，因为上一个输入命令还遗留了
													//回车符在内存里，要用空格吃掉，否则input2读入的内容就是回车符
	{
	default:printf("data error\n");	break;
	case('u'):printf("tuesday\n"); break;
	case('h'):printf("thursday\n"); break;
	}break;
	case('W'):
	case('w'):printf("wednesday\n"); break;
	case('F'):
	case('f'):printf("friday\n"); break;
	case('S'):
	case('s'):switch (printf("please input second letter:\n"), scanf(" %c", &input2), input2)
	{
	default:printf("data error\n");	break;
	case('a'):printf("saturday\n"); break;
	case('u'):printf("sunday\n"); break;
	}break;
	}
	return 0;
}
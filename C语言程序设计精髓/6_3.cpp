#include <stdio.h>

/*搬砖问题
n块砖( 27<n<=77 )，36人搬，男搬4，女搬3，两个小孩抬一块砖，要求一次搬完，问男人、女人
和小孩各需多少人？请用穷举法编程求解,n的值要求从键盘输入。输出结果按照男人数量升序给出。*/

int main() {
	int bricks1;
	printf("Input n(27<n<=77):\n");
	scanf("%d", &bricks1);
	for (int men = 0; men <= 36; men++) {
		int bricks2 = bricks1;
		bricks2 -= men * 4;
		if (bricks2 < 0)
			break;
		else 
			for (int women = 0; women <= 36 - men; women++) {
				int bricks3 = bricks2;
				bricks3 -= women * 3;
				if (bricks3 < 0)
					break;
				else {
					int children = bricks3 * 2;
					if (children == 36 - men - women)
						printf("men=%d,women=%d,children=%d\n", men, women, children);
			}
		}
	}
	return 0;
}
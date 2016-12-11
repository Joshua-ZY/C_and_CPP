#include <stdio.h>

/*数列合并
已知两个不同长度的降序排列的数列（假设序列的长度都不超过5），请编程将其合并为一个数列，使合并后的数列仍保持降序排列。
【提示】假设两个降序排列的数列分别保存在数组a和数组b中，用一个循环依次将数组a和数组b中的较大的数存到数组c中，当一个
较短的序列存完后，再将较长的序列剩余的部分依次保存到数组c的末尾。假设两个序列的长度分别是m和n，当第一个循环结束时，若
i小于m，则说明数组a中的数有剩余，将数组a中剩余的数存到数组c的末尾即可；若j小于n，则说明数组b中的数有剩余，将数组b中
剩余的数存到数组c的末尾即可。在第一个循环中，用k记录往数组c中存了多少个数，在第二个循环中，就从k这个位置开始继续存储
较长序列中剩余的数。
函数原型：void Merge(int a[], int b[], int c[], int m, int n)
函数功能：将两个长度分别为m和n、降序排列的子序列a和b合并后放到数组c中*/

void Merge(int a[], int b[], int ans[], int m, int n) {
	int aid = 0, bid = 0, ansid = 0;
	while (aid < m && bid < n) {
		if (a[aid] >= b[bid]) {
			ans[ansid] = a[aid];
			aid++;
		}
		else {
			ans[ansid] = b[bid];
			bid++;
		}
		ansid++;
	}

	for (; ansid < m + n; ansid++) {
		if (aid == m) {//注意aid是先用了再++，因此如果a数组有三个元素，那么a全用完之后aid值应为3
			ans[ansid] = b[bid];
			bid++;
		}
		else {
			ans[ansid] = a[aid];
			aid ++;
		}
	}
	return;
}

int main() {
	int m, n, arr1[5], arr2[5], ans[10];
	printf("Input m,n:");
	scanf("%d,%d", &m, &n);
	printf("Input array a:");
	for (int i = 0; i < m; i++)
		scanf("%d", &arr1[i]);
	printf("Input array b:");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr2[i]);
	Merge(arr1, arr2, ans, m, n);
	for (int i = 0; i < m + n; i++) {
		printf("%4d", ans[i]);
	}
	printf("\n");
	return 0;
}
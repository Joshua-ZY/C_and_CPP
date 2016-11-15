#include <stdio.h>

int main() {
	int utc, bjt, hour;
	scanf("%d", &utc);
	hour = utc / 100;
	if (hour < 8) {
		bjt = utc + 2400 - 800;
	}
	else {
		bjt = utc - 800;
	}
	printf("%d\n", bjt);
	return 0;
}
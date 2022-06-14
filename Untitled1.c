#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int min, max, cnt;
	printf("min = ");
	scanf("%d", &min);
	printf("max = ");
	scanf("%d", &max);
	for (cnt = min; cnt <= max; cnt++) {
		if (cnt % 2 == 0)
		printf("%d\t", cnt);
	}
	return 0;
}

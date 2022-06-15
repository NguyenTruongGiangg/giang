#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	num = 10;
	printf("\n Countdown");
	while (num >= 0) {
		printf("\n%d", num);
		num--;
	}
	return 0;
}

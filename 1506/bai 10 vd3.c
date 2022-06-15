#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int cnt = 0, num;
	do{
		printf("\n Enter a number: ");
		scanf("%d", &num);
		printf("No. is %d", num);
		cnt++;
	}
	while (num != 0);
	printf("\n The total numbers entered were %d", --cnt);
	return 0;
}

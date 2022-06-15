#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i, n, gt = 1;
	printf("Nhap gia tri n ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++ ) {
		gt = gt * i;
	}
	printf("%d! = %d", n, gt);
	return 0;
}
	

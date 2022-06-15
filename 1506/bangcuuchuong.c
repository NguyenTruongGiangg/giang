#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i, kq;
	printf("Nhap bang cuu chuong so: ");
	scanf("%d", &n);
	for (i = 1; i <= 10;i++) {
		kq = i*n;
		printf("%d * %d = %d", n, i, kq);
		printf("\n");
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int top, bottom, height, S;
	
	printf("Tinh dien tich hinh thang\n");
	printf("Nhap gia tri day nho: ");
	scanf("%d", &top);
	printf("Nhap gia tri day lon: ");
	scanf("%d", &bottom);
	printf("Nhap gia tri chieu cao: ");
	scanf("%d", &height);
	
	S = ((top + bottom) * height) / 2;
	printf("Dien tich hinh thang la %d", S);
	return 0;
}

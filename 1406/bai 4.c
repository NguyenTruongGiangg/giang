#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	float C, F;
	printf("Nhap vao nhiet do C: ");
	scanf("%.2f", &C);
	
	F = ((C * 9) / 5) + 32;
	printf("Gia tri nhiet do F chuyen doi tu do C la %.2f", F);
	getch();
}

#include <stdio.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	int num1, num2, tong, hieu, tich;
	double thuong;
	printf("Nhap so num1 = ");
	scanf("%d", &num1);
	printf("Nhap so num2 = ");
	scanf("%d", &num2);
	
	tong = num1 + num2;
	hieu = num1 - num2;
	tich = num1 * num2;
	thuong = num1 / num2;
	printf("Tong cua hai so la: %d\n", tong);
	printf("Hieu cua hai so la: %d\n", hieu);
	printf("Tich cua hai so la: %d\n", tich);
	printf("Thuong cua hai so la: %f\n", thuong);
	getch();
	
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int toan, ly, hoa, tong, tb;
	printf("Tinh tong diem va trung binh 3 mon hoc\n");
	printf("Nhap diem mon toan: ");
	scanf("%d", &toan);
	printf("Nhap diem mon ly: ");
	scanf("%d", &ly);
	printf("Nhap diem mon hoa: ");
	scanf("%d", &hoa);
	
	tong = toan + ly + hoa;
	printf("Tong diem 3 mon la %d\n", tong);
	tb = (toan + ly + hoa) / 3;
	printf("Trung binh 3 mon la %d", tb);
	return 0;
}

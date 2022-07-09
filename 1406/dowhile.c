#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int cardid, pin, a, cash = 10000000, cashr, cashl, cnt = 1;
	char ch;
	printf("Moi ban nhap so the: ");
	scanf("%d", &cardid);
	printf("Moi ban nhap mat khau: ");
	scanf("%d", &pin);
	if (cardid == 123 && pin == 456) {
		printf("1. Rut tien\n2.Chuyen khoan\n3. Xem so du\n4. Ket thuc\n");
		printf("Nhap lua chon cua ban: ");
		scanf("%d", &a);
		do {
		switch (a) {
			case 1:
				printf("\nNhap so tien ban muon rut: ");
				scanf("%d", &cashr);
				cashl = cash - cashr;
				if (cashr > cash) {
					printf("Tai khoan cua ban khong du de thuc hien giao dich\n");}
				else
				printf("\nTai khoan cua ban con %d dong", cashl);
				printf("Ban co muon tiep tuc thuc hien giao dich?");
				ch = getch();
				break;
			case 2:
				printf("\nNhap so tien ban muon chuyen khoan: ");
				scanf("%d", &cashr);
				cashl = cash - cashr;
				if (cashr > cash) {
					printf("Tai khoan cua ban khong du de thuc hien giao dich\n");}
				else
				printf("\nTai khoan cua ban con %d dong", cashl);
				printf("Ban co muon tiep tuc thuc hien giao dich?");
				ch = getch();
				break;
			case 3:
				printf("\nTai khoan cua ban con %d dong", cashl);
				printf("Ban co muon tiep tuc thuc hien giao dich?");
				ch = getch();
				break;
			case 4:
				printf("Cam on quy khach da su dung dich vu cua chung toi!");
				ch = 'n';
				break;}
		} while (ch == 'y' || ch == 'Y');
	}
	else do {
		printf("Sai mat khau hoac id the. Vui long nhap lai.\n");
		printf("Moi ban nhap so the: ");
		scanf("%d", &cardid);
		printf("Moi ban nhap mat khau: ");
		scanf("%d", &pin);
		cnt++;}
		while ((cnt <= 3) && (cardid != 123 || pin != 456));
		printf("Da nhap sai qua 3 lan. The cua ban da bi khoa!");
		return 0;
}

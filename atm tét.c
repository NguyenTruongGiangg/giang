#include <stdio.h>
#include <stdlib.h>
int login(int id, int pass);
void menu();
int ch(char a);
int wdr(int *tien);
int trf(int ids, int *tien);
void sd(int tien);


int main(void) {
	int tien = 100000000;
	int login_time = 0;
	char a;
	int pick, id, ids, pass, j = 1;
	do {
	printf("\nNhap so tai khoan: ");
	scanf("%d", &id);
	printf("\nNhap mat khau: ");
	scanf("%d", &pass);
	if (login(id, pass) == 1)
	break;
	else {
		login_time++;
		if (login_time == 3) {
			printf("Da nhap sai qua 3 lan. The cua ban da bi khoa!\n");
			j = 0;
			exit(0);
		}
		else {
		printf("Sai so tai khoan hoac mat khau! Vui long nhap lai.\n");
		}
	}
}
	while (1);
	if (j == 0) exit(0);
		do {
		menu();
		scanf("%d", &pick);
		switch (pick) {
			case 1: 
				wdr(&tien);
				break;
			case 2: 
				trf(ids, &tien);
				break;
			case 3:
				sd(tien);
				break;
			case 4:
				printf("Cam on ban da su dung dich vu!");
				exit(0);
			default:
				printf("Chon khong khop. Vui long chon lai!\n");
			}
		printf("Ban co muon tiep tuc giao dich? [Y/N]");
		fflush(stdin);
		a = getchar();
	} while (ch(a) == 1);
}
	
	
int login (int id, int pass) {
	if (id == 1234 && pass == 5678)
	return 1;
	else return 0;
}

void menu() {
	printf ("Moi ban chon chuc nang:  \n");
	printf ("1. Rut tien              \n");
	printf ("2. Chuyen khoan          \n");
	printf ("3. Hien thi so du        \n");
	printf ("4. Thoat chuong trinh    \n");
}

int wdr(int *tien) {
	int num;
	printf("Nhap so tien can rut: ");
	scanf("%d", &num);
	if (num % 50000 == 0 && num < 30000000 & num >= 50000) {
		printf("Ban da rut %dvnd", num);
		*tien -= num;
		printf ("\nSo tien con lai trong tai khoan la %dvnd\n", *tien);
	}
	else printf("So tien phai la boi so cua 50.000 va nho hon 30.000.000\n");
}

int trf(int ids, int *tien) {
	int num;
	printf("Nhap so tai khoan ban muon chuyen tien: ");
	scanf("%d", &ids);
	printf("Nhap so tien can chuyen: ");
	scanf("%d", &num);
	*tien -= num;
	printf("Ban da chuyen %dvnd den tai khoan %d\n", num, ids);
	printf("So tien con lai trong tai khoan la %dvnd\n", *tien);
}

void sd(int tien) {
	printf("So du trong tai khoan la %d dong\n", tien);
}

int ch(char a) {
	if (a == 'y' || a == 'Y')
	return 1;
	else return 0;
}

	
	

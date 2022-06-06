#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float r, chv, cd, cr, Cc, Cs, Cr, Sc, Ss, Sr;
	/*  - r la ban kinh hinh tron
		- chv la canh hinh vuong
		- cd, cr lan luot la chieu dai va chieu rong cua hinh chu nhat
		- Cc, Cs, Cr lan luot la chu vi hinh tron, vuong, chu nhat
		- Sc, Ss, Sr lan luot la dien tich hinh tron, vuong, chu nhat */
	
	printf("Nhap ban kinh hinh tron: ");
	scanf("%f", &r);
	printf("Nhap canh hinh vuong: ");
	scanf("%f", &chv);
	printf("Nhap chieu dai cua hinh chu nhat: ");
	scanf("%f", &cd);
	printf("Nhap chieu rong cua hinh chu nhat: ");
	scanf("%f", &cr);
	
	Cc = r * 2 * 3.14;
	printf("Chu vi hinh tron la %.2f\n", Cc);
	
	Sc = r*r * 3.14;
	printf("Dien tich hinh tron la %.2f\n", Sc);
	
	Cs = chv * 4;
	printf("Chu vi hinh vuong la %.2f\n", Cs);
	
	Ss = chv*chv;
	printf("Dien tich hinh vuong la %.2f\n", Ss);
	
	Cr = (cd + cr) * 2;
	printf("Chu vi hinh chu nhat la %.2f\n", Cr);
	
	Sr = cd * cr;
	printf("Dien tich hinh chu nhat la %.2f\n", Sr);
		 
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	float f ;
	double d;
	char c = 'A';
	long int li;
	long double lc;
	
	printf("Kieu int: %d Byte\n", sizeof(i));
	printf("So nguyen: ");
	scanf("%d", &i);
	printf("\n");
	printf("Kieu float: %d Byte\n", sizeof(f));
	printf("So thuc kieu float: ");
	scanf("%f", &f);
	printf("\n");
	printf("Kieu double: %d Byte\n", sizeof(d));
	printf("So thuc kieu double: ");
	scanf("%f", &d);
	printf("\n");
	printf("Kieu char: %d Byte\n", sizeof(c));
	printf("Ky tu: %c\n", c);

	printf("\n");
	printf("Kieu long int: %d Byte\n", sizeof(li));
	printf("\n");
	printf("Kieu long double: %d Byte\n", sizeof(lc));
	
	
	return 0;
}

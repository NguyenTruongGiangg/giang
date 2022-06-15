#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num; 
	printf("The even numbers from 1 to 30 are \n ");
	for (num = 2; num <= 30; num += 2)
	printf("%d\n", num);
	return 0;
}

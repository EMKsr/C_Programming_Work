#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int i, j, boy;

	printf("Boy degeri giriniz: ");
	scanf_s("%d",&boy);

	for (i = 1; i <= boy; i++) {

		for (j = boy; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
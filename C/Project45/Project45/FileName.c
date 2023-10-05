#include <stdio.h>
#include<stdlib.h>

int main() {

	int sayi = 20;
	int sayi2 = 10;
	float sayi3 = 15.44;
	char kelime = 'a';

	printf("%d\n", sayi);
	printf("%d\n", sayi2);
	printf("%.2f\n", sayi3);
	printf("%c", kelime);

	printf("\n\n BELLEK ADRESLERI \n\n");

	printf("%x\n", &sayi);
	printf("%x\n", &sayi2);
	printf("%x\n", &sayi3);
	printf("%x", &kelime);



	return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main() {

	char bilgi[40];
	printf("Bilgiyi giriniz: ");
	gets(&bilgi);
	printf("\n\n");
	puts(bilgi);

	return 0;
}
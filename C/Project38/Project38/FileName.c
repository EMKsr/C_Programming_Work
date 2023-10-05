#include<stdio.h>
#include<stdlib.h>

int main() {
	
	char kelimeler[100];
	printf("Kelimeleri giriniz: ");
	gets(&kelimeler);

	printf("Katar uzunlugu: %d", strlen(kelimeler));

	return 0;
}
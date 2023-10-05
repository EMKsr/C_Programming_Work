#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int sayi = 20;
	int* s = &sayi;

	// sayiyi yazdirma
	printf("sayi= %d\n", sayi);
	//adresini yazdýrma
	printf("adresi: %x\n\n", s);

	//----------------------------------
	printf("------------------------------------\n\n");
	char harf = 'a';
	char* h = &harf;

	//harfi yazdirma
	printf("harf: %c\n", harf);
	//adresini yazdýrma
	printf("adresi: %x", h);

	return 0;
}
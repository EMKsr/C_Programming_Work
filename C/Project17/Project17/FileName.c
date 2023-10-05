#include<stdio.h>
#include<stdlib.h>

int main() {

	int tekrakamlar[] = { 1,3,5,7,9 };
	printf("%d\n", tekrakamlar[3]);

	char sehir[] = { 'a','n','k','a','r','a' };
	printf("%c\n", sehir[0]);

	int sayi[4];

	sayi[0] = 2;
	sayi[1] = 4;
	sayi[2] = 6;
	sayi[3] = 8;
	

	printf("%d", sayi[2]);

	return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main() {

	printf("*** faktoriel hesaplama programi ***\n\n");

	int i, sayi, faktoriyel;

	faktoriyel = 1;

	printf("Hesaplanmasýný istediginiz faktoriyel degerini giriniz: ");
	scanf_s("%d",&sayi);

	for (i = 1; i <= sayi; i++) {
		faktoriyel *= i;
	}

	printf("Faktoriyel sonucu %d dir...",faktoriyel);


	return 0;
}
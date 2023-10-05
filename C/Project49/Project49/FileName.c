#include<stdio.h>
#include<stdlib.h>

int toplam(int s1, int s2) {
	int s3 = (s1 + s2)*5-10;
	return s3;
}


int main() {

	int sayi1, sayi2,t;

	printf("Formulle islem yapmak istediðiniz iki sayiyi giriniz: ");
	scanf_s("%d %d", &sayi1, &sayi2);
	
	t= toplam(sayi1, sayi2);

	printf("formul sonucunuz: %d", t);

	return 0;
}
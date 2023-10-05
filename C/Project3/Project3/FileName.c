#include<stdio.h>
#include<stdlib.h>

int main() {
	char Ad[10], Soyad[10], Yas[3], Sehir[14], meslek[20];

	printf("Adiniz: ");
	scanf("%s", Ad);

	printf("Soyadiniz: ");
	scanf("%s", Soyad);

	printf("Yasiniz: ");
	scanf("%s", Yas);

	printf("Sehiriniz: ");
	scanf("%s", Sehir);

	printf("mesleginiz: ");
	scanf("%s", meslek);


	printf("Adi: %s",Ad);
	printf("Soyadi: %s", Soyad);
	printf("Yasi: %s", Yas);
	printf("Sehiri: %s", Sehir);
	printf(": %s", meslek);

	return 0;

}
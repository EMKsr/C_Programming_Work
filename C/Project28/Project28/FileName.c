#include<stdio.h>
#include<stdlib.h>

int main() {

	int toplam = 0;
	int sayi;
	int i;

	for (i = 0; i < 4; i++) {
		printf("%d . sayiyi girin: ", i + 1);
		scanf_s("%d", &sayi);

		toplam += sayi;
	}

	printf("Toplam deger= %d", toplam);

	return 0;
} 
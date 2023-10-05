#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	int sayi;
	double sonuc;

	printf("Sayiyi girin: ");
	scanf_s("%d", &sayi);

	sonuc = sqrt(sayi);

	printf("Sonuc %.2f", sonuc);

	return 0;
}
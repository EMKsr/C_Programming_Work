#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	double sayi, sonuc;
	printf("Sayiyi Girin: ");
	scanf_s("%lf", &sayi);

	sonuc = fabs(sayi);

	printf("sonuc= %.lf\n", sonuc);

	double sayi2, sonuc2;
	printf("Sayiyi Girin: ");
	scanf_s("%lf", &sayi2);
	sonuc2 = log10(sayi2);
	printf("sonuc= %3.lf", sonuc2);


	return 0;
}
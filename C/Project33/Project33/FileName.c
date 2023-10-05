#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	double sayi, sonuc1, sonuc2;

	printf("Degeri Girin: ");
	scanf_s("%lf",&sayi);

	sonuc1 = floor(sayi);
	sonuc2 = ceil(sayi);


	printf("Tabana yuvarlama sonucu: %f\n", sonuc1);
	printf("Tavana yuvarlama sonucu: %f", sonuc2);

	return 0;
}
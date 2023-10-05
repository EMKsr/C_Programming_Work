#include<stdio.h>
#include<stdlib.h>

int main() {

	printf("Ogrenci ortalama hesaplama sistemi...\n\n");

	int s1, s2, ort;

	printf("Ilk sinav notunuzu giriniz: ");
	scanf_s("%d", &s1);

	printf("Ikinci sinav notunuzu giriniz: ");
	scanf_s("%d", &s2);

	ort = (s1 + s2) / 2;
	
	printf("Ortalamaniz %d 'dir.\n", ort);

	if (ort >= 50 ) {
		printf("Tebriks...");
	}
	else {
		printf("Puuu sana...");
	}

	return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main() {
	float sinav1, sinav2, sinav3,ort;

	printf("sinav1 notunuzu giriniz: ");
	scanf_s("%f", &sinav1);

	printf("sinav2 notunuzu giriniz: ");
	scanf_s("%f", &sinav2);

	printf("sinav3 notunuzu giriniz: ");
	scanf_s("%f", &sinav3);
	
	ort = (sinav1 + sinav2 + sinav3) / 3;
	
	printf("Ortalama notunuz %f", ort);

	return 0;
}
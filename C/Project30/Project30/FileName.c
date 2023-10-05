#include<stdio.h>
#include<stdlib.h>

int main() {

	int a, b;
	int toplam = 0;

	printf("Sayi giriniz: ");
	scanf_s("%d", &a);
	printf("Sayi giriniz: ");
	scanf_s("%d", &b);

	int i;

	if (a < b) {

		for (i = a; i <= b; i++) {
			toplam += i;
		}
		printf("toplam: %d", toplam);

	}
	
	if (a > b) {

		for (i = b; i <= a; i++) {
			toplam += i;
		}
		printf("toplam: %d", toplam);

	}
	
	

	return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main() {

	int sayi;
	int yuzler, onlar, birler;

	printf("lutfen bir sayi girin: ");
	scanf_s("%d", &sayi);

	yuzler = sayi / 100;

	onlar = (sayi / 10)%10;

	birler = sayi % 10;

	printf("%d\n%d\n%d\n", yuzler, onlar, birler);

	return 0;
}
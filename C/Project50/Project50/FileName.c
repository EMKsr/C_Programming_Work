/*

#include<stdio.h>
#include<stdlib.h>

int kupbulma(int s1) {
	int sonuc;
	sonuc = s1 * s1 * s1;
	return sonuc;
}


int main() {
	int al�nansayi,gelensonuc;

	printf("Hangi sayinin kupunu bulmak istiyorsunuz: ");
	scanf_s("%d", &al�nansayi);

	gelensonuc = kupbulma(al�nansayi);
	printf("\nsonuc: %d", gelensonuc);

	return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>

void dikd�rtgenyapma(int k,int u){
	int i, j;

	for (i = 1; i <= k; i++) {
		for (j = 1; j <= u; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n\n");

}

int main() {
	int k�sa, uzun;
	printf("Istediginiz dortgen boyutlarini giriniz..\n");
	printf("Kisa Kenar Boyutu: ");
	scanf_s("%d", &k�sa);
	printf("Uzun Kenar Boyutu: ");
	scanf_s("%d", &uzun);
	printf("\n\n\n");
	dikd�rtgenyapma(k�sa, uzun);

	return 0;
}
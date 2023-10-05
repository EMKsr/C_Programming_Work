#include<stdio.h>
#include<stdlib.h>
int main() {
	/*
		mýsýr 2tl
		kolar 2tl
		su 1tl
		bilet 8tl
	*/

	int mýsýr, kola, su, bilet;
	//int toplam;
	printf("Lutfen aldýgýnýz urun adetlerini giriniz\n");
	
	printf("Misir sayýnýz: ");
	scanf_s("%d", &mýsýr);

	printf("kola sayýnýz: ");
	scanf_s("%d", &kola);

	printf("su sayýnýz: ");
	scanf_s("%d", &su);

	printf("bilet sayýnýz: ");
	scanf_s("%d", &bilet);
	
	//toplam=mýsýr * 2 + kola * 2 + su * 1 + bilet * 8;
	
	printf("Toplam borcunuz %d TL'dir", mýsýr * 2 + kola * 2 + su * 1 + bilet * 8);


	return 0;
}
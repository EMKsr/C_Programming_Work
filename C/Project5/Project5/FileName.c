#include<stdio.h>
#include<stdlib.h>
int main() {
	/*
		m�s�r 2tl
		kolar 2tl
		su 1tl
		bilet 8tl
	*/

	int m�s�r, kola, su, bilet;
	//int toplam;
	printf("Lutfen ald�g�n�z urun adetlerini giriniz\n");
	
	printf("Misir say�n�z: ");
	scanf_s("%d", &m�s�r);

	printf("kola say�n�z: ");
	scanf_s("%d", &kola);

	printf("su say�n�z: ");
	scanf_s("%d", &su);

	printf("bilet say�n�z: ");
	scanf_s("%d", &bilet);
	
	//toplam=m�s�r * 2 + kola * 2 + su * 1 + bilet * 8;
	
	printf("Toplam borcunuz %d TL'dir", m�s�r * 2 + kola * 2 + su * 1 + bilet * 8);


	return 0;
}
#include<stdio.h>
#include<stdlib.h>

#define matpuan 3.47
#define sozpuan 2.19

int main() {
	printf("Puaninizi �grenmek i�in l�tfen netlerinizi giriniz...\n");

	int matnet, soznet;

	printf("Sayisal netinizi giriniz: ");
	scanf_s("%d",&matnet);

	printf("Sozel netinizi giriniz: ");
	scanf_s("%d", &soznet);

	float sonuc,matsonuc,sozsonuc;
	sonuc = 50.25 + (matnet*3.47) + (soznet*2.19);//50.25 ham puan
	matsonuc = 50.25 + (matnet * 3.47);
	sozsonuc = 50.25 + (soznet * 2.19);

	printf("Say�sal net sonuc puan�n�z: %2.2f\n", matsonuc);
	printf("Sozel net sonuc puan�n�z: %2.2f\n", sozsonuc);
	printf("Toplam net sonuc puan�n�z: %2.2f", sonuc);

	return 0;
}
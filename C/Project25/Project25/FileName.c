#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int satir, sutun;
	int i, j;

	printf("Lutfen satir sayisi giriniz: ");
	scanf_s("%d", &satir);

	printf("Lutfen sutun sayisi giriniz: ");
	scanf_s("%d", &sutun);

	int matris [satir][sutun];

	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++) {
			printf("Lutfen %d %d matrisini giriniz: ",i,j);
			scanf_s("%d", &matris[i][j]);
		}
		printf("\n");
	}
	
	for (i = 0; i < satir; i++)
	{
		for (j = 0; j < sutun; j++) {
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
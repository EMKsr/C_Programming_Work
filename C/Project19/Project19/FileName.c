#include<stdio.h>
#include<stdlib.h>

int main() {
	
	printf("Merhaba, 3 sehir giriniz:\n ");
	int i;
	int sehir[3];
	
	char sehi[4][15];

	for (int i = 0; i < 4; i++)
	{
		printf("%d olan sehri giriniz:", (i + 1));
		scanf("%s", sehi[i]);

	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d olan sehri giriniz:", (i + 1));
		scanf("%d", &sehir[i]);

	}
	
	for (i = 0; i < 3; i++) {
		printf("%d",sehir[i]);
	}
	

	return 0; 
}
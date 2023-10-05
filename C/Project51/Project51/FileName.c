#include<stdio.h>
#include<stdlib.h>

int main() {

	printf("***MATEMATIK UYGULAMASI***");

	printf("\n");
	printf("1-iki sayinin toplami\n");
	printf("2-iki sayinin carpimi\n");
	printf("3-alinan sayinin karesi\n");
	printf("4-alinan sayinin kubu\n");
	printf("5-denklem cozme (3x^2+4x+8)\n");

	int secim, sonuc;
	int s1, s2;

	printf("\nBir islem seciniz: ");
	scanf_s("%d", &secim);

	switch (secim)
	{
		case 1:
			printf("Toplamak istediginiz iki sayiyi yazin:");
			scanf_s("%d %d", &s1, &s2);
			sonuc = s1 + s2;
			printf("sonuc= %d", sonuc);
			break;

		case 2:
			printf("Carpmak istediginiz iki sayiyi yazin:");
			scanf_s("%d %d", &s1, &s2);
			sonuc = s1 * s2;
			printf("sonuc= %d", sonuc);
			break;

		case 3:
			printf("Karesini almak istediginiz sayiyi yazin: ");
			scanf_s("%d", &s1);
			sonuc = s1 *s1;
			printf("sonuc= %d", sonuc);
			break;

		case 4:
			printf("Kubunu almak istediginiz sayiyi yazin: ");
			scanf_s("%d", &s1);
			sonuc = s1 * s1 * s1;
			printf("sonuc= %d", sonuc);
			break;
		case 5:
			printf("Denklemi cozmek istediginiz sayiyi yazin: ");
			scanf_s("%d", &s1);
			sonuc = 3*(s1 * s1) + 4*(s1)+8;
			printf("sonuc= %d", sonuc);
			break;
		default:
		break;
	}


	return 0;
}
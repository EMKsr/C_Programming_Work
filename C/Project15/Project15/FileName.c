#include<stdio.h>
#include<stdlib.h>
/*
int main() {

	char kod;
	printf("t --> turkce\nm--> matematik\ns--> sosyal\nf--> fen\n");
	printf("Lutfen ders kodu giriniz: ");
	scanf_s("%c", &kod);

	switch (kod)
	{
		case 't':printf("turkce");
			break;
		case 'm':printf("matematik");
			break;
		case 's':printf("sosyal");
			break;
		case 'f':printf("fen bilgisi");
			break;
		default:
			break;
	}

	return 0;
}
*/
int main() {


	int sayi;

	printf("Bir Ay Numarasi Giriniz : ");
	scanf_s("%d", &sayi);

	switch (sayi)
	{
		case 1:printf("Ocak");
			break;
		case 2:printf("Subat");
			break;
		case 3:printf("Mart");
			break;
		case 4:printf("Nisan");
			break;
		case 5:printf("Mayis");
			break;
		case 6:printf("Haziran");
			break;
		case 7:printf("Temmuz");
			break;
		case 8:printf("Agustos");
			break;
		case 9:printf("Eylul");
			break;
		case 10:printf("Ekim");
			break;
		case 11:printf("Kasim");
			break;
		case 12:printf("Aralik");
			break;
		

	}

	return 0;
}

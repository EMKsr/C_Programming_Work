#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {

	double derece, sonucsin, sonuccos;

	printf("Hesaplamak istediginiz degeri giriniz: ");
	scanf_s("%lf", &derece);

	sonucsin = sin(derece);
	sonuccos = cos(derece);

	printf("sin sonucu= %lf\n", sonucsin);
	printf("cos sonucu= %lf", sonuccos);



	return 0;
}
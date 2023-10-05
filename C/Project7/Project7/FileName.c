#include<stdio.h>
#include<stdlib.h>

int main() {

	/*
		Tr: 1.999
		Mat: 3.998
		Sos: 1
		Fen: 2.999
		Taban: 100.160
	*/

	float tr, mat, sos, fen, taban, sonuc;

	taban = 100.160;
	printf("Turkce netiniz: ");
	scanf_s("%f", &tr);

	printf("Matematik netiniz: ");
	scanf_s("%f", &mat);

	printf("Sosyal netiniz: ");
	scanf_s("%f", &sos);

	printf("Fen netiniz: ");
	scanf_s("%f", &fen);

	sonuc = (tr * 1.999) + (mat * 3.998) + (sos * 1) + (fen * 2.998) + taban;
	printf("%f", sonuc);


	return 0;
}
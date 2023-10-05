#include<stdio.h>
#include<stdlib.h>

int main() {
	//printf("deneme"); //%s scan dan gelir
	
	char kitapad[25] = "Avcunuzda ki kelebek";
	char yazar[30] = "Ahmet Serif Izgoren";
	char turu[10] = "Hikaye";
	char sayfa[3] = "124";
	char basimyil[4] = "2001";

	printf("****** Kitap Tanitim ******\n\n\n");
	printf("Kitapad: %s\nYazar: %s\nTuru: %s\n", kitapad, yazar, turu);
	printf("nSayfa: %s\nBasimyil: %s",sayfa, basimyil);


	return 0;
}
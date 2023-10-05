#include<stdio.h>
#include<stdlib.h>

int main() {
	//1,5,9,13....81 topla
	int bas = 1;
	int sayac = 0;

	for (bas; bas <= 81; bas += 4) {
		sayac += bas;
	}
	printf("sonuc: %d", sayac);


	return 0;
}
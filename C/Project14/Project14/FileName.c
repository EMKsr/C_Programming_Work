#include<stdio.h>
#include<stdlib.h>

int main() {

	// 1 den 20 ye kadar olan �ift say�lar� while d�ng�s�nde yazd�rma.

	int i;
	i = 1;
	while (i <=20) {
		if (i % 2 == 0 && i != 14) {
			printf("%d\n", i);
		}
		i++;
	}
	

	return 0;
}
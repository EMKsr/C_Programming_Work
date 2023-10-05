#include<stdio.h>
#include<stdlib.h>

int main() {

	char kitap[40];
	printf("Ad: ");
	scanf("%s", kitap);

	printf("%s\n", kitap);
	printf("%10s\n", kitap);
	printf("%15.5s\n", kitap);


	return 0;
}
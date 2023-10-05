#include<stdio.h>
#include<stdlib.h>

int main() {

	printf("**** suyun hal durumunu soyleyen program ****\n\n");

	int su;

	printf("Suyun sicaklik derecesini giriniz: ");
	scanf_s("%d", &su);

	if (su <= 0) {
		printf("Su buz haldedir...");
	}
	if (su > 0 && su<100) {
		printf("Su sivi haldedir...");
	}
	if (su > 100) {
		printf("Su buhar haldedir...");
	}

	return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main() {
	int m1[2][2] = {10,12,15,18};
	int m2[2][2] = { 8,11,14,6 };

	int tm[2][2];
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			tm[i][j] = m1[i][j] + m2[i][j];
		}
	}
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d ", tm[i][j]);
		}
		printf("\n");
	}


	return 0;
}
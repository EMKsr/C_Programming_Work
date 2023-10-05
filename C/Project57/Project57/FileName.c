#include<stdio.h>
#include<stdlib.h>

int main() {

	FILE* belge;
	char karakter[50];
	belge = fopen("C:\\Users\\emirh\\Desktop\\belge.txt", "r");

	fgetc(karakter, 15, belge);
	fclose(belge);

	return 0;
}
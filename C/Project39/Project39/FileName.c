#include<stdio.h>
#include<stdlib.h>

int main() {
	char kaynak[30] = "Merhaba Ankara";
	char kopya[30] = "";
	char kopya2[30] = "";

	strcpy(kopya, kaynak);
	printf("strcpy== %s\n", kopya);

	strncpy(kopya2, kaynak, 9);
	printf("strncpy== %s", kopya2);

	return 0;
}
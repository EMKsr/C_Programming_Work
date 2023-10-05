#include<stdio.h>
#include<stdlib.h>

int main() {
	
	char harf = 'b';
	char* pt = &harf;

	printf("1.adresi= %x\n", pt);

	pt++;
	printf("2.adresi= %x\n", pt);

	pt--;
	printf("3.adresi= %x\n", pt);

	pt += 10;
	printf("4.adresi= %x", pt);
	
	return 0;
}
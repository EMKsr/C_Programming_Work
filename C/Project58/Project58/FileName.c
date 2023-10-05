#include<stdio.h>
#include<stdlib.h>

int main() {

	FILE* metinbelgesi;
	metinbelgesi = fopen("C:\\Users\\emirh\\Desktop\\metinbelgesi.txt", "w");

	char karakter;
	karakter = "abcdefg";

	fputs(karakter, metinbelgesi);

	return 0;
}
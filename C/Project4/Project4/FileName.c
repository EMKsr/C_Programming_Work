#include<stdio.h>
#include<stdlib.h>

int main() {

	int bagaj, el;
	int bagajnet, elnet;
	int net,�cret;

	printf("Merhaba Bagaj agirliginizi ve �anta agirliginizi giriniz.\n");
	printf("bagaj agirliginiz: ");
	scanf_s("%d", &bagaj);

	printf("--  el agirliginiz: ");
	scanf_s("%d", &el);

	bagajnet = bagaj - 15;
	elnet = el - 8;

	net = bagajnet + elnet;
	�cret = 5 * net;
	
	printf("odemeniz gereken tutar: %d", �cret);

	return 0;
}
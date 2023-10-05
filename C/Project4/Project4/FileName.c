#include<stdio.h>
#include<stdlib.h>

int main() {

	int bagaj, el;
	int bagajnet, elnet;
	int net,ücret;

	printf("Merhaba Bagaj agirliginizi ve çanta agirliginizi giriniz.\n");
	printf("bagaj agirliginiz: ");
	scanf_s("%d", &bagaj);

	printf("--  el agirliginiz: ");
	scanf_s("%d", &el);

	bagajnet = bagaj - 15;
	elnet = el - 8;

	net = bagajnet + elnet;
	ücret = 5 * net;
	
	printf("odemeniz gereken tutar: %d", ücret);

	return 0;
}
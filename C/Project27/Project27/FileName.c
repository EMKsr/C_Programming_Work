#include<stdio.h>
#include<stdlib.h>

int main() {
	int i;
	int a, b, c;
	int sayac = 0;

	for (i = 999; i >= 100; i--) {
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;

		if (a != b && b != c && a != c) {
			sayac++;
		}

	}
	printf("%d", sayac);
	return 0;
}
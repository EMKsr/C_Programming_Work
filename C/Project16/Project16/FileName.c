#include<stdio.h>
#include<stdlib.h>

int main() {

	int sayi1, sayi2, sonuc;
	char islem;

	sayi1 = 15;
	sayi2 = 30;
	
	printf("'+'-->toplama\n'-'--> cýkarma\n'*'-->carpma\n'/'-->bolme\n");
	printf("Lutfen yapmak istediginiz islem simgesini giriniz: ");
	scanf_s("%c", &islem);
	switch (islem)
	{
		case '+':sonuc = (sayi1 + sayi2); printf("Sonuc: %d", sonuc); break;
		case '-':sonuc = (sayi1 - sayi2); printf("Sonuc: %d", sonuc); break;
		case '*':sonuc = (sayi1 * sayi2); printf("Sonuc: %d", sonuc); break;
		case '/':sonuc = (sayi1 / sayi2); printf("Sonuc: %d", sonuc); break;

		default:
			break;
	}

	return 0;
}
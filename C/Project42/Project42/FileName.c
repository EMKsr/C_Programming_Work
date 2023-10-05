#include<stdio.h>
#include<stdlib.h>

struct kitapbilgi
{
	char kitapad[20];
	char kitapyazar[20];
	int fiyat;
	float puan;
};

int main() {
	
	struct kitapbilgi kb={"SekerPortakali","Vasconceulos",38,7.25};

	printf("Kitap Ad: %s\n", kb.kitapad);
	printf("Kitap Yazar: %s\n", kb.kitapyazar);
	printf("Kitap Fiyat: %d\n", kb.fiyat);
	printf("Kitap Puan: %.2f\n", kb.puan);

	return 0;
}
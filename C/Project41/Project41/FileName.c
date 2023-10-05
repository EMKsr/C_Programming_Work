#include<stdio.h>
#include<stdlib.h>

enum sehirler {
	hatali,adana,adiyaman,agri, amasya,ankara,antalya,ardahan,artvin,aydın
};


int main() {
	
	enum sehirler il;
	il = amasya;
	printf("%d", il);

	return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct ogrbilgi {
    char ad[20];
    char soyad[20];
    int sinif;
    char sube;
    float ortalama;
};

struct ogrbilgi kayit;

int main() {
    printf("Ogrenci adini giriniz: ");
    scanf_s("%s", kayit.ad);

    printf("Ogrenci soyadini giriniz: ");
    scanf_s("%s", kayit.soyad);

    printf("Ogrenci sinifini giriniz: ");
    scanf_s("%d", &kayit.sinif);

    printf("Ogrenci subesini giriniz: ");
    scanf_s(" %c", &kayit.sube); // Boþluk karakteri önemlidir.

    printf("Ogrenci ortalamasini giriniz: ");
    scanf_s("%f", &kayit.ortalama);

    printf("%s %s\n", kayit.ad, kayit.soyad);
    printf("Sinifi ve subesi: %d/%c\n", kayit.sinif, kayit.sube);
    printf("Ortalamasi: %.2f\n", kayit.ortalama);

    return 0;
}

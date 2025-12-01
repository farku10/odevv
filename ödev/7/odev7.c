#include <stdio.h>

int main() {
    int sayi, gecici, ters = 0, basamak;

    printf("Sayi gir: ");
    scanf("%d", &sayi);

    gecici = sayi;

    while (sayi > 0) {
        basamak = sayi % 10;
        ters = ters * 10 + basamak;
        sayi /= 10;
    }

    if (gecici == ters)
        printf("Palindrom");
    else
        printf("Palindrom degil");

    return 0;
}s
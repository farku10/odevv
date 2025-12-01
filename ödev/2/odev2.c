#include <stdio.h>

int main() {
    float a,b,c, ort;
    printf("3 sayi giriniz: ");
    scanf("%f %f %f", &a, &b, &c);
    ort = (a + b + c) / 3;
    printf("Ortalama = %.2f", ort);
    return 0;
}
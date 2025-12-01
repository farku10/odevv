#include <stdio.h>

int main() {
    int n, i;
    printf("Eleman sayisi: ");
    scanf("%d", &n);

    int dizi[n];

    for (i = 0; i < n; i++) {
        printf("%d. eleman: ", i+1);
        scanf("%d", &dizi[i]);
    }

    int min = dizi[0];
    int max = dizi[0];

    for (i = 1; i < n; i++) {
        if (dizi[i] < min)
            min = dizi[i];
        if (dizi[i] > max)
            max = dizi[i];
    }

    printf("En kucuk: %d\nEn buyuk: %d\n", min, max);

    return 0;
}

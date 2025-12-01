#include <stdio.h>

int main() {
    int secim;
    int bakiye = 1000;
    int tutar;

    do {
        printf("\n1- Bakiye\n2- Para Cek\n3- Para Yatir\n0- Cikis\nSecim: ");
        scanf("%d", &secim);

        switch(secim) {
            case 1:
                printf("Bakiye: %d TL\n", bakiye);
                break;

            case 2:
                printf("Cekilecek tutar: ");
                scanf("%d", &tutar);
                if (tutar <= bakiye) {
                    bakiye -= tutar;
                    printf("Yeni bakiye: %d TL\n", bakiye);
                } else {
                    printf("Yetersiz bakiye!\n");
                }
                break;

            case 3:
                printf("Yatirilacak tutar: ");
                scanf("%d", &tutar);
                bakiye += tutar;
                printf("Yeni bakiye: %d TL\n", bakiye);
                break;

            case 0:
                printf("Cikis yapiliyor...\n");
                break;

            default:
                printf("Hatali secim!\n");
        }

    } while(secim != 0);

    return 0;
}

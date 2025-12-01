#include <stdio.h>

int main() {
    int n, i, j, asal;

    printf("N gir: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        asal = 1;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                asal = 0;
                break;
            }
        }
        if (asal == 1)
            printf("%d ", i);
    }

    return 0;
}

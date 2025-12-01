#include <stdio.h>

int main() {
    float n1,n2,n3,ort;
    printf("3 not giriniz: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    ort = (n1+n2+n3)/3;
    if(ort >= 50) printf("Gecti");
    else printf("Kaldi");
    return 0;
}
#include <stdio.h>
#include <stdlib.h> 

int main() {
    // Kenar uzunlukları için değişken tanımlama
    int a, b, c;

    printf("--- Ucgen Olma Sarti Kontrolu ---\n");
    
    // Kullanıcıdan 3 kenar uzunluğunu al
    printf("Lutfen birinci kenar uzunlugunu (a) giriniz: ");
    scanf("%d", &a);
    
    printf("Lutfen ikinci kenar uzunlugunu (b) giriniz: ");
    scanf("%d", &b);
    
    printf("Lutfen ucuncu kenar uzunlugunu (c) giriniz: ");
    scanf("%d", &c);
    
    // Ucgen esitsizligi kuralini kontrol etme: 
    // Herhangi iki kenarin toplami ucuncuden buyuk olmalidir.
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("\nSONUC: Bu kenarlar ile GECERLI bir ucgen OLUSTURULABILIR.\n");
    } else {
        printf("\nSONUC: Bu kenarlar ile ucgen OLUSTURULAMAZ.\n");
    }

    // Konsolun kapanmasını engellemek için
    system("pause");

    return 0;
}
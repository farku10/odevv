#include <stdio.h>

int main(){
    int n,i,asal=1;
    scanf("%d",&n);
    
    for(i=2;i<n;i++){
        if(n % i == 0){
            asal = 0;
            break;
        }
    }
    if(asal) printf("Asal");
    else printf("Asal degil");
}

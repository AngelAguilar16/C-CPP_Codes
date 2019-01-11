#include <stdio.h>
#define max 10

void main(){
    int num[max],x,y,media = 0,tot = 0;
    for(x = 0; x < max; x++){
        printf("Ingresa el valor de num[%d]: ",x + 1);
        scanf("%d",&num[x]);
    }
    for(y = 0; y < max; y++){
        tot = tot + num[y];
    }
    media = tot / 9;
    printf("La media es: %d",media);
}
#include <stdio.h>
#define max 10

void main(){
    int num[max],x,y,prod = 1,cont = 1;
    for(x = 0; x < max; x++){
        num[x] = cont;
        cont += 2;
    }
    for(y = 0; y < max; y++){
        prod = prod * num[y];
    }

    printf("El producto es: %d",prod);
}
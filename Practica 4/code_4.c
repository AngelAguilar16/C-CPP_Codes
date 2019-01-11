#include <stdio.h>
#define max 50

void main(){
    int num[max],x,y,cont = 2,suma = 0;
    for(x = 0; x < max; x++){
        num[x] = cont;
        cont += 2;
    }
    for(y = 0; y < max; y++){
        suma = suma + num[y];
    }

    printf("La suma de los valores es: %d",suma);
}
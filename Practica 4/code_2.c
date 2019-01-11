#include <stdio.h>
#define max 50

void main(){
    int num[max],i,x,cont = 1;
    for(i = 0; i < max; i++){
        num[i] = cont;
        cont += 2;
    }
    for(x = 0; x < max; x++){
        printf("El valor de num[%d] es: %d\n",x + 1,num[x]);
    }
}
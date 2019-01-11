#include <stdio.h>

void pot(int x,int y){
    int pot = 1;
    for(int a = 0; a <= y; a++){
        pot = pot * x;

    }
    printf("La potencia es: %d\n",pot);
}

void main(void){
    int x,y;
    printf("Ingresa el valor base: ");
    scanf("%d",&x);
    printf("Ingresa el exponente: ");
    scanf("%d",&y);
    pot(x,y);
}
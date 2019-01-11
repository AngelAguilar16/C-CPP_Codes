#include <stdio.h>

void num_let(int num){
    if(num == 1)
        printf("Uno");
    if(num == 2)
        printf("Dos");
    if(num == 3)
        printf("Tres");
    if(num == 4)
        printf("Cuatro");
    if(num == 5)
        printf("Cinco");
    if(num == 6)
        printf("Seis");
    if(num == 7)
        printf("Siete");
    if(num == 8)
        printf("Ocho");
    if(num == 9)
        printf("Nueve");
    if(num == 10){
        printf("Diez");
    }
}

void main(void){
    int num;
    printf("Ingresa un numero del 1 al 10: ");
    scanf("%d",&num);
    num_let(num);
}
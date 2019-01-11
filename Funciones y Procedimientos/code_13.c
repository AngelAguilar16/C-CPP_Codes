#include <stdio.h>
#include <math.h>

void cal(int x){
    int total,pot,doble;
    pot = pow(x,2);
    doble = x * 2;
    total = pot - doble;
    printf("El valor final es: %d\n\n",total);
}

void main(void){
    int x;
    printf("Ingresa el valor base: ");
    scanf("%d",&x);
    cal(x);
}
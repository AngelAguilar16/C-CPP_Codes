#include <stdio.h>

void factorial(int a){
    int b, fact = 1;
    for (b = a; b > 1; b--){
        fact = fact * b;
    }
    printf("El factorial de %d = %d\n", a, fact);
}


void main(){
    int a;
    printf("Escribe un numero para calcular su factorial: ");
    scanf("%d", &a);
    factorial(a);
}
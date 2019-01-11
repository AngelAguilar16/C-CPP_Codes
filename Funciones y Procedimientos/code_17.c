#include <stdio.h>

void kelvin(float cel){
    float ke;
    ke = cel + 273.15;
    printf("Los grados Kelvin son: %.2f\n\n",ke);
}

void fahr(float cel){
    float fa;
    fa = (cel * 9/5) + 32;
    printf("Los grados Fahrenheit son: %.2f\n\n",fa);
}

void main(){
    float cel;
    int op;
    printf("Ingresa los grados Celsius: ");
    scanf("%f",&cel);
    printf("Convertir a: \n\n");
    printf("1) Kelvin\n");
    printf("2) Fahrenheit\n");
    printf("Opcion >> ");
    scanf("%d",&op);
    switch(op){
        case 1:
            kelvin(cel);
            break;
        case 2:
            fahr(cel);
            break;
    }
}
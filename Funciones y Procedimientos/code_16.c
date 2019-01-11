#include <stdio.h>

void dias_mes(int mes){
    switch(mes){
        case 1:
            printf("El mes tiene 31 dias");
            break;
        case 2:
            printf("El mes tiene 28 dias");
            break;
        case 3:
            printf("El mes tiene 31 dias");
            break;
        case 4:
            printf("El mes tiene 30 dias");
            break;
        case 5:
            printf("El mes tiene 31 dias");
            break;
        case 6:
            printf("El mes tiene 30 dias");
            break;
        case 7:
            printf("El mes tiene 31 dias");
            break;
        case 8:
            printf("El mes tiene 31 dias");
            break;
        case 9:
            printf("El mes tiene 30 dias");
            break;
        case 10:
            printf("El mes tiene 31 dias");
            break;
        case 11:
            printf("El mes tiene 30 dias");
            break;
        case 12:
            printf("El mes tiene 31 dias");
            break;
    }
}

void main(void){
    int mes;
    printf("Ingresa el numero al mes correspondiente (1-12): ");
    scanf("%d",&mes);
    dias_mes(mes);
}
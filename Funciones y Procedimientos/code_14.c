#include <stdio.h>

void desc(float precio, int cant){
    float compra,total;
    compra = cant * precio;
    if(cant >= 6){
        total = compra * 0.04;
        printf("El precio de compra total es: %.2f\n\n",total);
    }
    else if(cant >= 12){
        total = compra * 0.10;
        printf("El precio de compra total es: %.2f\n\n",total);
    }
}

void main(void){
    int cant;
    float precio;
    printf("Ingresa la cantidad de productos: ");
    scanf("%d",&cant);
    printf("Ingresa el precio de los productos: ");
    scanf("%f",&precio);
    desc(precio,cant);
}
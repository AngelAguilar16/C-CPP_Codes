#include <stdio.h>

void conversion_moneda(int op,float pesos){
    if(op == 1){
        float dolares = pesos * 19.86;
        printf("La conversion es de: %.2f\n",dolares);
    }
    if(op == 2){
        float yenes = pesos * 0.18;
        printf("La conversion es de: %.2f\n",yenes);
    }
    if(op == 3){
        float libras = pesos * 25.94;
        printf("La conversion es de: %.2f\n",libras);
    }
    if(op == 4){
        float euros = pesos * 22.66;
        printf("La conversion es de: %.2f\n",euros);
    }
}

void main(void){
    float pesos;
    int op;
    printf("Ingresa la cantidad en pesos: ");
    scanf("%f",&pesos);
    printf("Conversion a: \n\n");
    printf("1) Dolares\n");
    printf("2) Yenes\n");
    printf("3) Libras\n");
    printf("4) Euros\n");
    printf("Opcion >> ");
    scanf("%d",&op);
    conversion_moneda(op,pesos);
}
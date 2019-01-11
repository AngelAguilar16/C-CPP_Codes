#include <stdio.h>

void main(){
    int num[21],tamano,multiplos,x;
    printf("Ingresa el tama%co del arreglo: ",164);
    scanf("%d",&tamano);
    if(tamano > 20){
        printf("Valor no valido, ingresa uno nuevo: ");
        scanf("%d",&tamano);
    }
    printf("Ingresa de que valor seran los multiplos: ");
    scanf("%d",&multiplos);
    for(x = 1;x <= tamano;x++){
        printf("El multiplo de %d es: %d\n",multiplos,multiplos * x);
    }
}

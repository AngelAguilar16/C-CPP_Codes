#include <stdio.h>

void main(){
    int num[25],valor = 0,entrada,pares = 0,impares = 0,par[25],impar[25],w = 0,q = 0,x;
    do{
        printf("Ingresa el valor de num[%d]: ",valor + 1);
        scanf("%d",&num[valor]);
        entrada = num[valor];
        valor++;
        if(entrada != 0){
            if(entrada % 2 == 0){
                pares += 1;
                par[q] = entrada;
                q += 1;
            }
            else{
                impares += 1;
                impar[w] = entrada;
                w += 1;
            }
            if(valor == 25){
                printf("No se pueden agregar mas valores.");
                entrada = 0;
            }
        }
    }while(entrada != 0);
    for(x = 0; x < w; x++){
        printf("Los valores impares fueron: %d\n",impar[x]);
    }
    for(x = 0; x < q; x++){
        printf("Los valores pares fueron: %d\n",par[x]);
    }
}
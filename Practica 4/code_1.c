#include <stdio.h>
#define max 5
void main(){
    int num[max],i,x;
    for(i = 0; i < max; i++){
        printf("Ingresa el valor de num[%d]: ",i + 1);
        scanf("%d",&num[i]);
    }
    for(x = 0; x < max; x++){
        printf("El valor de num[%d] es: %d\n",x + 1,num[x]);
    }
}
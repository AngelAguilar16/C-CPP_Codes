#include <stdio.h>
#define max 5

void main(){
    int A[max],B[max],i,x,z;
    for(i = 0; i < max; i++){
        printf("Ingresa el valor de A[%d]: ",i + 1);
        scanf("%d",&A[i]);
    }
    for(x = 0; x < max; x++){
        B[x] = A[x] * 2;
    }
    for(z = 4; z >= 0; z--){
        printf("El valor de B[%d] es: %d\n",z + 1,B[z]);
    }
}
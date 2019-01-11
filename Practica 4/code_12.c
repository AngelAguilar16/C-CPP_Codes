#include <stdio.h>
#include <math.h>

void main(){
    int num[2][5] = {{3,6,7,8,9},
                     {0,0,0,0,0}}; 
    int i,j,x;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 5; j++){
            int valor = num[0][j];
            num[1][j] = pow(valor,2);
            printf("El valor de num[%d][%d] es: %d\n",i + 1,j + 1,num[i][j]);
        }
    }
}
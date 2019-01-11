#include <stdio.h>

void main(){
    int num[3][3] = {{-12,23,32},
                     {45,-56,-10},
                     {25,78,89}};
    int i,j,sum = 0;
    for(i = 0; i < 3; i++){
        for(j = 0;j <3; j++){
            sum = sum + num[i][j];
        }
    }
    printf("La suma de la matriz es: %d\n",sum);
}
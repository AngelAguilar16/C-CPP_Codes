#include <stdio.h>

void main(){
    int numero[4][2] = {{3,2},
                        {4,6},
                        {8,9},
                        {0,0}};
    int i,j,suma=0,suma_2 = 0;
    for(i=0;i<3;i++){
        for(j=0;j<1;j++){
            suma = suma + numero[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=1;j<2;j++){
            suma_2 = suma_2 + numero[i][j];
        }
    }
    numero[3][0] = suma;
    numero[3][1] = suma_2;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 2; j++){
            printf("%d ",numero[i][j]);
        }
        printf("\n");
    }
}
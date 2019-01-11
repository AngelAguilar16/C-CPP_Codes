#include <stdio.h>

void main(){
    int num[3][3] = {{4,7,8},
                     {6,9,1},
                     {5,0,3}};
    int num_2[3][3];
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            num_2[i][j] = num[i][j] * 2;
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("El valor de num_2[%d][%d] es: %d\n",i + 1,j + 1,num_2[i][j]);
        }
    }
}

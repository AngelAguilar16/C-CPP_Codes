#include <stdio.h>

void main(){
    int num[2][6] = {{3,6,7,8,9,0},
                     {1,4,3,2,7,0}};

    int x,y,suma = 0,suma_2 = 0;

    for(x = 0; x < 1; x++){
        for(y = 0; y < 5; y++){
            suma = suma + num[x][y];
        }
    }
    for(x = 1; x < 2; x++){
        for(y = 0; y < 5; y++){
            suma_2 = suma_2 + num[x][y];
        }
    }
    num[0][5] = suma;
    num[1][5] = suma_2;

    for(x = 0; x < 2; x++){
        for(y = 0; y < 6; y++){
            printf("%d ",num[x][y]);
        }
        printf("\n");
    }
}
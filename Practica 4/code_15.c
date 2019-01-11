#include <stdio.h>

void main(){
    int num[5][3] = {{1,7,0},
                     {5,6,0},
                     {6,4,0},
                     {7,3,0},
                     {0,0,0}};

    int x,y,suma = 0,suma_2 = 0,suma_3 = 0,suma_4 = 0,suma_5 = 0,sum_1 = 0,sum_2 = 0;
    for(x = 0; x < 1; x++){
        for(y = 0; y < 2; y++){
            suma = suma + num[x][y];
        }
    }
    num[0][2] = suma;

    for(x = 1; x < 2; x++){
        for(y = 0; y < 2; y++){
            suma_2 = suma_2 + num[x][y];
        }
    }
    num[1][2] = suma_2;

    for(x = 2; x < 3; x++){
        for(y = 0; y < 2; y++){
            suma_3 = suma_3 + num[x][y];
        }
    }
    num[2][2] = suma_3;

    for(x = 3; x < 4; x++){
        for(y = 0; y < 2; y++){
            suma_4 = suma_4 + num[x][y];
        }
    }
    num[3][2] = suma_4;

    for(x = 0; x < 4; x++){
        for(y = 0; y < 1; y++){
            sum_1 = sum_1 + num[x][y]; 
        }
    }
    num[4][0] = sum_1;

    for(x = 0; x < 4; x++){
        for(y = 1; y < 2; y++){
            sum_2 = sum_2 + num[x][y]; 
        }
    }
    num[4][1] = sum_2;

    for(x = 4; x < 5; x++){
        for(y = 0; y < 2; y++){
            suma_5 = suma_5 + num[x][y];
        }
    }
    num[4][2] = suma_5;


    for(x = 0; x < 5; x++){
        for(y = 0; y < 3; y++){
            printf("%d ",num[x][y]);
        }
        printf("\n");
    }
}
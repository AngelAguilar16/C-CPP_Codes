#include <stdio.h>

void main(){
    int A[4][4],B[4][4],C[4][4];
    int x,y,suma = 0;

    for(x = 0; x < 4; x++){
        for(y = 0; y < 4; y++){
            printf("Ingresa el valor de A[%d][%d] = ",x + 1,y + 1);
            scanf("%d",&A[x][y]);
        }
    }

    printf("\n\n");

    for(x = 0; x < 4; x++){
        for(y = 0; y < 4; y++){
            printf("Ingresa el valor de B[%d][%d] = ",x + 1,y + 1);
            scanf("%d",&B[x][y]);
        }
    }

    printf("\n\nA: \n");

    for(x = 0; x < 4; x++){
        for(y = 0; y < 4; y++){
            printf("%d  ",A[x][y]);
        }
        printf("\n");
    }

    printf("\n\nB: \n");

    for(x = 0; x < 4; x++){
        for(y = 0; y < 4; y++){
            printf("%d  ",B[x][y]);
        }
        printf("\n");
    }

    printf("\n\nC: \n");

    for(x = 0; x < 4; x++){
        for(y = 0; y < 4; y++){
            suma = A[x][y] + B[x][y];
            C[x][y] = suma;
        }
    }

    for(x = 0; x < 4; x++){
        for(y = 0; y < 4; y++){
            printf("%d  ",C[x][y]);
        }
        printf("\n");
    }

    printf("\n\n");
}
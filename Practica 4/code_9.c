#include <stdio.h>

void main(){
    int num[3][3] = {{23,45,68},
                     {34,99,12},
                     {25,78,89}};
    int i,j,mayor = 12, menor = 99;
    for(i = 0; i < 3; i++){
        for(j = 0; j <3; j++){
            if(num[i][j] > mayor){
                mayor = num[i][j];
            }
            if(num[i][j] < menor){
                menor = num[i][j];
            }
        }
    }
    printf("El valor menor es: %d\n",menor);
    printf("El valor mayor es: %d\n",mayor);
}
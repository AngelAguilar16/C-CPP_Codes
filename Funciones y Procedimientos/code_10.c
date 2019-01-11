#include <stdio.h>

void conver(int num){
    if(num == 0)
        printf("0");
    else if(num == 1)
        printf("1");
    else if(num == 2)
        printf("10");
    else if(num == 3)
        printf("11");
    else if(num == 4)
        printf("100");
    else if(num == 5)
        printf("101");
    else if(num == 6)
        printf("110");
    else if(num == 7)
        printf("111");
    else if(num == 8)
        printf("1000");
    else if(num == 9)
        printf("1001");
    else if(num == 10)
        printf("1010");
    else if(num == 11)
        printf("1011");
    else if(num == 12)
        printf("1100");
    else if(num == 13)
        printf("1101");
    else if(num == 14)
        printf("1110");
    else if(num == 15)
        printf("1111");
    else
        printf("Valor no valido");
}

void main(void){
    int num;
    printf("Ingresa un numero del 1 al 15: ");
    scanf("%d",&num);
    conver(num);
}


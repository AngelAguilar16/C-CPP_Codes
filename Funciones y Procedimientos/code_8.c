#include <stdio.h>
#include <string.h>

void gir(int num){
    const char base[] = "base";
    char string[12];
    sprintf(string,"%d",num);
    printf("El valor es: ");
    for(int i = 12; i >= 0; i--){
        printf("%c",string[i]);
    }
}

void main(){
    int num;
    printf("Ingresa un numero: ");
    scanf("%d",&num);
    gir(num);
}
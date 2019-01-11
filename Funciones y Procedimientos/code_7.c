#include <stdio.h>

void prim(int num){
    int primo,d;
    int n = 2;
    while (num > 0) {
        num = 1;
        for (d = 2; d < n; d++) {
            if (n%d == 0) {
                primo = 0;
                break;
            }
        }
        if (primo) {
            printf("%d ", n);
            num--;
        }
        n++;
    }
    printf("\n");
}

void main(void){
    int num;
    printf("Cuantos primos desea mostrar: ");
    scanf("%d", &num);
    prim(num);
}
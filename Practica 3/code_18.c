#include <stdio.h>

void main(){
    int x = 1,y = 1;
    printf("%d\n", x);
    while(x <= 100){
        printf("%d\n",y);
        y += x;
        x = y - x;
    }
}

#include <stdio.h>

void main(){
    int prim[25],q = 0;
    for(int j = 2; j <= 100; j++){
        int a = 0;
        for(int i = 1;i <= 100; i++){
            if(j%i==0)
                a++;
        }
        if(a == 2){
            prim[q] = j;
            q++;
        }
    }

    for(int x = 0; x < 25; x++){
        printf("prim[%d] = %d\n",x + 1,prim[x]);
    }
}
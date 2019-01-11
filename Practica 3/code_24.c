#include <stdio.h>

void main(){
	int x,y;
	printf("Ingresa un numero: ");
	scanf("%d",&x);
	for(y = 1; y <= x; y++){
		if(x % y == 0){
			printf("Es divisible entre %d\n",y);
		}
	}
}
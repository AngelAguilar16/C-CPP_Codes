#include <stdio.h>

void main(){
	int x,y;
	printf("Ingresa el valor par maximo: ");
	scanf("%d",&x);
	fflush(stdin);
	for(y = 0; y <= x; y += 2){
		printf("- %d\n",y);
	}
}
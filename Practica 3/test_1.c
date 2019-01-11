#include <stdio.h>

void main(){
	int i;
	char p;
	for(i = 1; i < 101; i++){
		printf("%d\n",i);
		if(i % 20 == 0){
			printf("Presiona Enter para continuar.");
			scanf("%c",&p);
		}
	}
}
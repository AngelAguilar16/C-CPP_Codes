#include <stdio.h>

void main(){
	int tabla,x,valor;
	
	printf("Ingresa que tabla de multiplicar quieres: ");
	scanf("%d",&tabla);
	
	for(x = 0; x <= 10; x++){
		valor = x * tabla;
		printf("%d x %d = %d\n",x,tabla,valor);
	}
}

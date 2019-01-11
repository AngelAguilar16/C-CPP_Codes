#include <stdio.h>

void main(){
	int x,y,z,per;
	char op;
	do{
		printf("Ingresa el primer lado: ");
		scanf("%d",&x);
		fflush(stdin);
		printf("Ingresa el segundo lado: ");
		scanf("%d",&y);
		fflush(stdin);
		printf("Ingresa el tercer lado: ");
		scanf("%d",&z);
		fflush(stdin);
		per = x + y + z;
		printf("El perimetro del triangulo es: %d\n",per);
		printf("Desea continuar S/N: ");
		scanf("%c",&op);
		fflush(stdin);
	}while(op != 'N');
}
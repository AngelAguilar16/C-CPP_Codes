#include <stdio.h>

void main(){
	int x,y,z,per;
	do{
		printf("Ingresa el primer lado: ");
		scanf("%d",&x);
		printf("Ingresa el segundo lado: ");
		scanf("%d",&y);
		printf("Ingresa el tercer lado: ");
		scanf("%d",&z);
		per = x + y + z;
		printf("El perimetro del triangulo es: %d\n",per);
	}while(x > 0);
}
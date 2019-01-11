#include <stdio.h>
#include <math.h>

void suma(){
	float x,y,z;
	printf("Ingresa el primer valor: ");
	scanf("%f",&x);
	printf("Ingresa el segundo valor: ");
	scanf("%f",&y);
	z = x + y;
	printf("El resultado de la suma es: %.2f\n\n",z);
}

void resta(){
	float x,y,z;
	printf("Ingresa el primer valor: ");
	scanf("%f",&x);
	printf("Ingresa el segundo valor: ");
	scanf("%f",&y);
	z = x - y;
	printf("El resultado de la resta es: %.2f\n\n",z);
}

void multi(){
	float x,y,z;
	printf("Ingresa el primer valor: ");
	scanf("%f",&x);
	printf("Ingresa el segundo valor: ");
	scanf("%f",&y);
	z = x * y;
	printf("El resultado de la multiplicacion es: %.2f\n\n",z);
}

void divi(){
	float x,y,z;
	printf("Ingresa el primer valor: ");
	scanf("%f",&x);
	printf("Ingresa el segundo valor: ");
	scanf("%f",&y);
	z = x / y;
	printf("El resultado de la division es: %.2f\n\n",z);
}

void menu(){
	int op;
	do{
	printf("Opciones: \n\n");
	printf("1) Suma\n");
	printf("2) Resta\n");
	printf("3) Multiplicacion\n");
	printf("4) Division\n");
	printf("0) Salir \n");
	printf("Opcion >> ");
	scanf("%d",&op);
	switch(op){
		case 1:
			suma();
			break;
		case 2:
			resta();
			break;
		case 3:
			multi();
			break;
		case 4: 
			divi();
			break;
		case 0:
			break;
		default:
			printf("Opcion inexistente.\n\n");
			break;
	}
	}while(op != 0);
}

void main(void){
	menu();
}



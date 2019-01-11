#include <stdio.h>

void main(){
	float a,b,c;
	printf("Ingresa la primera calificacion: ");
	scanf("%f",&a);
	fflush(stdin);
	printf("Ingresa la segunda calificacion: ");
	scanf("%f",&b);
	fflush(stdin);
	printf("Ingresa la tercera calificacion: ");
	scanf("%f",&c);
	fflush(stdin);
	
	if( (c > b) || (c > a) ){
		printf("Primera calificacion: %.2f\n",a);
		printf("Segunda calificacion: %.2f\n",b);
		printf("Tercera calificacion: %.2f\n",c);
		printf("Mejorando");
	}
	
	else if( (c < b) || (c < a) ){
		printf("Primera calificacion: %.2f\n",a);
		printf("Segunda calificacion: %.2f\n",b);
		printf("Tercera calificacion: %.2f\n",c);
		printf("Empeorando");
	}	
	
	else{
		printf("Primera calificacion: %.2f\n",a);
		printf("Segunda calificacion: %.2f\n",b);
		printf("Tercera calificacion: %.2f\n",c);
		printf("Bien!");
	}
}

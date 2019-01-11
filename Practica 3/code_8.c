#include <stdio.h>

void main(){
	int x;
	float pu,c,i,pd0,pd1,pd3,pd4,pd;
	char s;
	printf("Ingresa el precio unitario: ");
	scanf("%f",&pu);
	fflush(stdin);
	for(x = 0; x <= 1000; x++){
		c = x * pu;
		if(x <= 100 && x >= 0){
			printf("El precio por %d unidad(es) es: %.2f\n",x,c);
		}
		else if(x >= 100 && x <= 200){
			pd0 = c * 0.10;
			pd = c - pd0;
			printf("El precio por %d unidad(es) con descuento del 10 porciento es: %.2f\n",x,pd);
		}
		else if(x >= 201 && x <= 500){
			pd0 = c * 0.15;
			pd = c - pd0;
			printf("El precio por %d unidad(es) con descuento del 15 porciento es: %.2f\n",x,pd);
		}
		else{
			pd0 = c * 0.20;
			pd = c - pd0;
			printf("El precio por %d unidad(es) con descuento del 20 porciento es: %.2f\n",x,pd);
		}
	}
}

#include <stdio.h>

void main(){
	float im,venta,multa,total;
	printf("Ingrese el importe de la venta: ");
	scanf("%f",&venta);
	fflush(stdin);
	
	if(venta < 544){
		im = venta * 0.08;
		printf("Venta: %.2f\n",venta);
		if(im > 329){
			im = venta * 0.14;
		}
		printf("Total: %.2f",venta + im);
	}
	
	else{
		im = venta * 0.047;
		printf("Venta: %.2f\n",venta);
		if(im > 329){
			im = venta * 0.107;
		}
		printf("Total: %.2f",venta + im);
	}
}

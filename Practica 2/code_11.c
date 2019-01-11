#include <stdio.h>

void main(){
	float ing,imv;
	printf("Introduce tu ingreso: ");
	scanf("%f",&ing);
	fflush(stdin);
	
	if(ing <= 1000){
		imv = ing * 0.025;
		printf("El impuesto de ventas: %.2f\n\n",imv);
	}
	else{
		imv = ing * 0.052;
		printf("El impuesto de ventas: %.2f\n\n",imv);
	}
}

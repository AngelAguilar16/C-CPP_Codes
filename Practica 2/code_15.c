#include <stdio.h>

void main(){
	int prod_1,prod_2,prod_3,prod_4;
	float tot_1,tot_2,tot_3,tot_4,tot,venta;
	printf("Productos disponibles.\n\n");
	printf("Codigo de Producto - Precio Unitario\n");
	printf("1 - $24.05\n");
	printf("2 - $105.00\n");
	printf("3 - $10.35\n");
	printf("4 - $16.00\n");
	printf("Cuantas unidades desea del producto 1: ");
	scanf("%d",&prod_1);
	fflush(stdin);
	printf("Cuantas unidades desea del producto 2: ");
	scanf("%d",&prod_2);
	fflush(stdin);
	printf("Cuantas unidades desea del producto 3: ");
	scanf("%d",&prod_3);
	fflush(stdin);
	printf("Cuantas unidades desea del producto 4: ");
	scanf("%d",&prod_4);
	fflush(stdin);
	
	tot_1 = prod_1 * 24.05;
	tot_2 = prod_2 * 105.00;
	tot_3 = prod_3 * 10.35;
	tot_4 = prod_4 * 16.00;
	tot = tot_1 + tot_2 + tot_3 + tot_4;
	
	if(tot >= 1000){
		venta = tot * 0.025;
		printf("La venta fue de: %.2f\n\n",tot - venta);
	}
	if( (tot < 1000) && (tot > 800)){
		venta = tot * 0.015;
		printf("La venta fue de: %.2f\n\n",tot - venta);
	}
	else{
		printf("La venta fue de: %.2f\n\n",tot);
	}
}

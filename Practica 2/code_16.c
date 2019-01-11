#include <stdio.h>

void main(){
	char nc[100],r,v;
	float ib,im,imt;
	
	printf("Bienvenido.\n\n");
	printf("Ingresa tu nombre completo: ");
	scanf("%s",nc);
	fflush(stdin);
	printf("De que municipio eres?\n>> ");
	scanf("%c",&r);
	fflush(stdin);
	printf("De cuanto es tu ingreso bruto?\n>> ");
	scanf("%f",&ib);
	fflush(stdin);

	if(r == 'M' || r == 'm'){
		v = 'M';
		im = 2;
		imt = ib*0.02;
	}
	
	if(r == 'T' || r == 't'){
		v = 'T';
		im = 1.5;
		imt = ib*0.015;
	}
	
	if(r == 'C' || r == 'c'){
		v = 'C';
		im = 3;
		imt = ib*0.03;
	}
	
	printf("Nombre: %s\n",nc);
	printf("Clave del municipio: %c\n",v);
	printf("Ingreso bruto: %.2f\nTasa de Impuesto: %.0f\nImpuesto: %.2f\n\n",ib,im,imt);
}

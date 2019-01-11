#include <stdio.h>
#include <math.h>

void main(){
	float num_1,num_2,res;
	int op;
	printf("Ingresa el primer numero: ");
	scanf("%f",&num_1);
	printf("Ingresa el segundo numero: ");
	scanf("%f",&num_2);
	printf("\nSelecciona una opcion.\n1) Suma\n2) Resta\n3) Multiplicacion\n4) Division\n5) Potencia\n>>");
	scanf("%d",&op);
	switch(op){
		case 1:
			res = num_1 + num_2;
			printf("\nLa suma es: %.0f\n\n",res);
			break;
		case 2:
			res = num_1 - num_2;
			printf("\nLa resta es: %0.f\n\n",res);
			break;
		case 3:
			res = num_1 * num_2;
			printf("\nLa Multiplicacion es: %.0f\n\n",res);
			break;
		case 4:
			res = num_1 / num_2;
			printf("\nLa division es: %.0f\n\n",res);
			break;
		case 5:
			res = pow(num_1,num_2);
			printf("\nLa potencia es: %.2f\n\n",res);
			break;
	}
}

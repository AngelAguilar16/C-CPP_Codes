#include <stdio.h>

void main(){
	int a,b,c;
	printf("Ingresa el primer numero: ");
	scanf("%d",&a);
	fflush(stdin);
	printf("Ingresa el segundo numero: ");
	scanf("%d",&b);
	fflush(stdin);
	printf("Ingresa el tercer numero: ");
	scanf("%d",&c);
	fflush(stdin);
	
	if( (a < b) && (a < c)){
		printf("%d es menor a %d y %d.\n\n",a,b,c);
	}
	
	if( (b < a) && (b < c)){
		printf("%d es menor a %d y %d.\n\n",b,a,c);
	}
	
	if( (c < b) && (c < a)){
		printf("%d es menor a %d y %d.\n\n",c,b,a);
	}
}

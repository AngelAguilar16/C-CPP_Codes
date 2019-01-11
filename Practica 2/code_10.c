#include <stdio.h>

void main(){
	int a,b,c;
	printf("Ingresa el valor de a: ");
	scanf("%d",&a);
	fflush(stdin);
	printf("Ingresa el valor de b: ");
	scanf("%d",&b);
	fflush(stdin);
	printf("Ingresa el valor de c: ");
	scanf("%d",&c);
	fflush(stdin);
	
	if( (a < b) && (a < c)){
		printf("%d\n",a);
		if(b < c){
			printf("%d\n",b);
			printf("%d\n",c);
		}
		if(c < b){
			printf("%d\n",c);
			printf("%d\n",b);
		}
	}
	
	if( (b < a) && (b < c)){
		printf("%d\n",b);
		if(a < c){
			printf("%d\n",a);
			printf("%d\n",c);
		}
	}
	
	if( (c < b) && (c < a)){
		printf("%d\n",c);
		if(b < a){
			printf("%d\n",b);
			printf("%d\n",a);
		}
		if(a < b){
			printf("%d\n",a);
			printf("%d\n",b);
		}
	}
}

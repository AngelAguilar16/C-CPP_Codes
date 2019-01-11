#include <stdio.h>
#include <string.h>

void main(){
    char numero[3];
    int num;

    printf("Ingresa un numero(positivo) de 3 digitos: ");
    scanf("%d",&num);
    if( (num > 999 ) || (num < 0) ){
    	printf("El numero debe ser de 3 digitos y/o positivo");
	}
	else {
	    itoa(num,numero,10);
		
		if( (numero[2] == '0') || (numero[2] == '5') || (numero[2] == '7') || (numero[2] == '8') ){
			printf("El valor es: %d",num * num);
		}
		
		else if( (numero[2] == '1') || (numero[2] == '9') ){
			printf("El valor es: %d",num / 10);
		}
		
		else{
			printf("El valor es: %d",num);
		}
	}
}

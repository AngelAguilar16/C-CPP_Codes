#include <stdio.h>

void main(){
	int nom,den;
	int b = 2;
	printf("Ingresa el nominador: ");
	scanf("%d",&nom);
	printf("Ingresa el denominador: ");
	scanf("%d",&den);
	if(den == 1){
		printf("%d/%d\n",nom,den);
	}
	else{
		while(b <= nom){
			if(den % b ==0 && nom % b == 0){
				den = den / b;
				nom = nom / b;
			}
			else{
				b++;
			}
		}
		printf("%d/%d\n",nom,den);
	}
}
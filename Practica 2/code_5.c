#include <stdio.h>

void main(){
	char se;
	float kcal, kg, libras;
	printf("Ingresa tu sexo: \nH) Hombre\nM) Mujer\n>> ");
	scanf("%c",&se);
	fflush(stdin);
	printf("Ingresa tu peso en kg: ");
	scanf("%f",&kg);
	fflush(stdin);
	libras = kg * 2.2;
	
	if( (se == 'H') || (se == 'h') ){
		kcal = kg * 18;
		printf("Las calorias que debes consumir son: %.2f\n\n",kcal);  
	}
	
	if( (se == 'M') || (se == 'm') ){
		kcal = kg * 16;
		printf("Las calorias que debes consumir son: %.2f\n\n",kcal);  
	}
}

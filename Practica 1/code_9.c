#include <stdio.h>
#include <math.h>

void main(){
	float a,b,c,per,sp,area;
	printf("Ingresa el lado a: ");
	scanf("%f",&a);
	printf("Ingresa el lado b: ");
	scanf("%f",&b);
	printf("Ingresa el lado c: ");
	scanf("%f",&c);
	per = a + b + c;
	printf("El perimetro del triangulo es: %.2f\n",per);
	sp = (per / 2);
	area = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
	printf("El area del triangulo es: %.2f\n\n",area);
}

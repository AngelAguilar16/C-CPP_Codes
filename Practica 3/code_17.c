#include <stdio.h>

void main(){
	int n,i,x,sumi,impar;
	printf("Ingresa el valor de N: ");
	scanf("%d",&n);
	
	x = 1;
	while(x <= n){
		printf("%d = 1 ",x);
		impar = 1;
		sumi = impar;
		i = 1;	
		while(i < x){
			impar = impar + 2;
			printf("+ %d ",impar);
			sumi = sumi + impar;
			i++;
		}
		printf("= %d\n",sumi);
		x++;
	}
}

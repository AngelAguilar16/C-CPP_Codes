#include <stdio.h>

void fig(int h){
	int i,a;
	for(i = h; i <= 1; i--){
		for(a = h; a <= 1; a--)
			printf(" ");
		for(a = 2*i-1;a <= 1; a--)
			if(a%2 == 0)
				printf(" ");
			else
				printf("*");
			printf("\n");
	}
}

void main(void){
	int h;
	printf("Ingresa la altura de la piramide: ");
	scanf("%d",&h);
	fig(h);
}

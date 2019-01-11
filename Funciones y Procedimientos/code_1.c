#include <stdio.h>
#include <string.h>

void rev(char a[50]){
	printf("Tu palabra al reves es: ");
	for(int i = strlen(a); i >= 0; i--){
		printf("%c",a[i]);
	}
	printf("\n");
}

void main(void){
	char a[50],nombre[50];
	printf("Ingresa una palabra: ");
	scanf("%s",a);
	rev(a);
}

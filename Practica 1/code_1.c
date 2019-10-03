#include <stdio.h>

int main(){
	int meses,anios,edad;
	printf("INGRESA TU EDAD.\n\n");
	printf("Años: ");
	scanf("%d",&meses);
	printf("Meses: ");
	scanf("%d",&anios);
	edad = (anios * 12) + meses;
	printf("Tu edad en meses es: %d\n\n",edad);
	return 0;
}

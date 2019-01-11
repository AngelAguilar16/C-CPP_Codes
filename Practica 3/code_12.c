#include <stdio.h>

void main(){
	int m,n,x;
	printf("Ingresa el valor de M: ");
	scanf("%d",&m);
	printf("Ingresa el valor de N: ");
	scanf("%d",&n);
	
	for(x = m; x <= n; x++){
		printf("%d\n",x);
	}
}

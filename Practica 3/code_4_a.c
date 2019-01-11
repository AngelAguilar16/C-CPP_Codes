#include <stdio.h>

void main(){
	int x,sum = 1;
	for(x = 1; x <= 100; x++){
		sum = x + sum;
	}
	printf("- %d\n",sum);
}
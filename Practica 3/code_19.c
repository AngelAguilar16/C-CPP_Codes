#include <stdio.h>

void main(){
	int x,y = 1;
	printf("%d\n", x);
	for(x = 1; x <= 100; x++){
		printf("%d\n",y);
		y += x;
		x = y - x;
	}
}

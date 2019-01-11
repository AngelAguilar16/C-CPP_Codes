#include <stdio.h>

void main(){
	int x,y;
	for(x = 1; x <= 999; x += 2){
		printf("- %d\n",x);
	}
	for(y = 0; y <= 1000; y += 2){
		printf("- %d\n",y);
	}
}
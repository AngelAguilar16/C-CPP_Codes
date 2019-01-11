#include <stdio.h>
#include <math.h>

void main(){
	int x,val_1,val_2,val_3;
	val_1 = 2;
	val_2 = 3;
	val_3 = 4;
	int a = val_1 * x;
	int b = val_2 * x;
	int c = val_3 * x;
	for(x = 0; x <= 100; x++){
		printf("%d - %d - %d\n",a,b,c);
	}
}

#include <stdio.h>

void main(){
	int x,y;
	for(x = 1; x <= 500; x++){
		if(x % 3 == 0){
			printf("%d = es numero primo\n",x);
		}
	}
}

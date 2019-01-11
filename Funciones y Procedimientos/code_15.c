#include <stdio.h>

void dist(int x,int y){
    int dist;
    dist = y - x;
    printf("La distancia entre los dos puntos es de %d mts.\n\n",dist);
}

void main(void){
    int x,y;
    printf("Ingresa el punto 1: ");
    scanf("%d",&x);
    printf("Ingresa el punto 2: ");
    scanf("%d",&y);
    dist(x,y);
}
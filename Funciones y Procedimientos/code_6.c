#include <stdio.h>

int media2(int real1,int real2){
    int media_arit;
    media_arit = (real1 + real2) / 2;
    return media_arit;
}

void main(void){
    int real1,real2,m_a;
    printf("Ingresa el primer valor: ");
    scanf("%d",&real1);
    printf("Ingresa el segundo valor: ");
    scanf("%d",&real2);
    m_a = media2(real1,real2);
    printf("La media es: %d\n\n",m_a);
}
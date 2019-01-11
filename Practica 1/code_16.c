#include <stdio.h>
#define min_hora 60
#define horas_dia  24
#define dias_semana 7
#define semanas_mes 4

void main(){
	int min_dia = min_hora * horas_dia;
	int min_sem = min_dia * dias_semana;
	int min_mes = min_sem * semanas_mes;
	int entrada,min,hor,sem,dias,mes,resto;
	printf("Ingresa el total de minutos recorridos: ");
	scanf("%d",&entrada);
	mes = entrada / min_mes;
	resto = entrada % min_mes;
	sem = resto / min_sem;
	resto = resto % min_sem;
	dias = resto / min_dia;
	resto = resto % min_dia;
	hor = resto / min_hora;
	min = resto % min_hora;
	printf("El tiempo recorrido fue: %d meses %d semanas  %d dias %d horas %d minutos.\n\n",mes,sem,dias,hor,min);
}

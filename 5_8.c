/*
Huxley
*/
#include <stdio.h>

int main()
{
	float distancia, consumo_total, consumo_medio;
	scanf("%f%f", &distancia, &consumo_total);
	consumo_medio = distancia/consumo_total;
	printf("%.3f km/l\n",consumo_medio);
	return 0;
}
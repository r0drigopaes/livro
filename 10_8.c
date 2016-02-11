#include <stdio.h>
#include <math.h>

float media(float n[], int tam)
{
	int i;
	float soma = 0;
	for (i = 0; i < tam ; ++i)
	{
		soma += n[i];
	}
	return soma / tam;
}


float variancia(float n[], int tam)
{
	int i;
	float var = 0;
	// chama a função média que criamos
	float m = media(n, tam);
	for (i = 0; i < tam ; ++i)
	{
		var += (n[i] - m) * (n[i] - m);
	}
	return var / tam;
}


float desv_pad(float numeros[], int tam)
{
	return sqrt(variancia(numeros, tam));
}


int main()
{
	int i;
	float exemplo[10];
	printf("Digite 10 números\n");
	for (i = 0; i < 10 ; ++i)
	{
		scanf("%f", &exemplo[i]);
	}
	printf("O desvio padrão é: %f\n", desv_pad(exemplo, 10));
	return 0;
}
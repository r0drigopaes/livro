#include <stdio.h>

void imprimir_linha(int tamanho)
{
	int i;
	for (i = 0; i < tamanho; i++)
	{
		printf("%d", tamanho);
	}
	printf("\n");
}

int main()
{
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		imprimir_linha(i+1);
	}
	return 0;
}
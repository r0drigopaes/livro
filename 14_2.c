#include <stdio.h>
int soma_recursiva(int *a, int i, int tam)
{

	if (i == tam-1)
	{
		return a[i];
	}
	else
	{
		return a[i] + soma_recursiva(a, i+1, tam);
	}
}

int main()
{
	int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int soma = soma_recursiva(num, 0, 10);
	printf("A soma dos elementos é: %d\n", soma);
	return 0;
}
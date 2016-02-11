#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int *a;
	a = (int *) calloc (10 , sizeof(int));
	if (a==NULL)
	{
		printf("Nao foi possivel alocar memória");
		return -1;
	}
	// preenche o array
	for (i=0; i< 10; ++i)
	{
		a[i] = i;
	}
	// aumenta o array para 20 elementos em vez de 10
	a = (int*) realloc(a, 20 * sizeof(int));
	// preenche as novas posições
	for (i=10; i< 20; ++i)
	{
		a[i] = i;
	}

	// imprime todo o array
	for (i=0; i< 20; ++i)
	{
		printf("%d ", a[i]);
	}
	return 0;
}

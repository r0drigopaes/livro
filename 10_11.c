#include <stdio.h>

int main()
{
	int a[100][100], b[100][100], c[100][100];
    int n,m, i,j;
	printf("Digite as dimensões n e m da matriz\n");
	scanf("%d%d",&n,&m);

	printf("Digite os elementos de A, linha a linha\n");
	// lê a matriz A
	for (i=0; i< n; ++i)
	{
		for (j=0; j<m; ++j)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Digite os elementos de B, linha a linha\n");
	// lê a matriz B
	for (i=0; i< n; ++i)
	{
		for (j=0; j<m; ++j)
		{
			scanf("%d", &b[i][j]);
		}
	}

	/*
	Constrói a matriz C, somando cada elemento
	de A com o B
	*/
	for (i=0; i< n; ++i)
	{
		for (j=0; j<m; ++j)
		{
			c[i][j]  = a[i][j] + b[i][j];
		}
	}

	printf("A soma das matrizes A e B é:\n");
	// imprime C
	for (i=0; i< n; ++i)
	{
		for (j=0; j<m; ++j)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
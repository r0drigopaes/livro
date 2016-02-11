#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, linhas,colunas;
	// p é um ponteiro para um ponteiro
	int **p;
	printf("Digita a quantidade de linhas e colunas\n");
	scanf("%d%d",&linhas, &colunas);

	// aloca um array de ponteiros, um para cada linha
	p = (int **) malloc(linhas * sizeof(int *));
	// cada um dos ponteiros receberá um array de inteiros
	for (i= 0 ; i< linhas; ++i)
	{
		p[i] = (int *) malloc (colunas * sizeof(int));
	}
	return 0;
}

#include<stdio.h>
#define TAM 10
int main()
{
	/* declara um array para armazenar 10 inteiros */
	int a[TAM];
	/* controlar o número de repetições */
	int i;
	// conta quantas vezes o número apareceu
	int contador = 0;
	// guardará o número a ser procurado
	int x;

	// lê os números e armazena-os no array
	for (i=0; i < TAM ; ++i)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);

	//procura
	for (i=0; i < TAM ; ++i)
	{
		/* se o elemento do array for igual a x */
		if (a[i] == x)
		{
			++contador;
		}
	}
	printf("%d apareceu %d vezes\n",x,contador);

	return 0;
}
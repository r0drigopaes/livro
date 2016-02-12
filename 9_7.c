#include<stdio.h>

int imprimir_varios(int quantidade)
{
	while (quantidade)
	{
		printf("Adoro programar\n");
		--quantidade;
	}
	printf("O valor de quantidade é: %d\n",quantidade);
}

int main()
{
	int x;
	scanf("%d",&x);
	imprimir_varios(x);
	printf("O valor de X é: %d\n",x);
	return 0;
}
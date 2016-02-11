#include <stdio.h>

#define LIN 5
#define COL 4

int main()
{
	int linha, coluna;
	float notas[LIN][COL];

	for (linha = 0; linha < LIN ; ++linha)
	{
		for (coluna = 0; coluna < COL; ++coluna)
		{
			scanf("%f",&notas[linha][coluna]);
		}
	}
	return 0;
}
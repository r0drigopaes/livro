#include <stdio.h>


/* 
	Calcula o mínimo múltiplo comum.
	Tem outra forma mais eficiente de fazer isso através do
	algoritmo de euclides.
*/
int mmc(int a, int b)
{

	/* 
	se a é maior que b, então x recebe a, senão recebe b 
	(procure por operador ternário )
	*/
	int x = a > b ? a : b;

	while ( x % a != 0  || x % b !=0)
	{
		++x;
	}
	return x;
}

int main()
{

	int n1, d1, n2, d2, n3, d3, divisor;
	// leitura formatada
	scanf("%d/%d + %d/%d", &n1, &d1, &n2, &d2);
	
	if (d1 ==0 || d2 == 0)
	{
		printf("entrada invalida!\n");
	}
	else
	{
		d3 = mmc(d1, d2);		
		
		n3 = (d3 / d1) * n1 + (d3 / d2) * n2;

		divisor = 2;
		// agora é preciso simplificar
		while ( divisor <= n3 && divisor <= d3 )
		{
			if ( (n3 % divisor) != 0 ||  (d3 % divisor) !=0 )
			{
				divisor ++;
			}
			else
			{
				n3 /= divisor;
				d3 /= divisor;
			}
		}

		printf("%d/%d\n", n3, d3);	
	}

	


	return 0;
}
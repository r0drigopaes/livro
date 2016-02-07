#include<stdio.h>
int main()
{
	int n, divisor, achou;
	scanf("%d",&n);
	divisor = 2;
	achou = 0 ; //falso

	/* repete enquanto o divisor for menor que n E não achou nenhum divisor */
	while (divisor < n && !achou)
	{
		if (n % divisor == 0)
		{
			achou = 1;
		}
		else
		{
			// incrementa e tenta com o próximo
			divisor ++;
		}
	}
	if (achou)
	{
		// se achou um dividor, então n não é primo
		printf("N\n");
	}
	else
	{
		// se não encontrou, então n é primo
		printf("S\n");
	}
	return 0;
}
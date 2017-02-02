#include <stdio.h>

/*
Esse exercício é sugerido no capítulo de decisão. 
Portanto, não utilizaremos arrays e nem structs para solucioná-lo.
*/

int main()
{
	int codigo, quantidade;
	float total, preco_unitario;
	float desconto = 1.0; // considera que o desconto padrão é nenhum

	scanf("%d%d", &codigo, &quantidade);
	if (codigo == 1)
	{
		preco_unitario = 5.3;
	}
	else if (codigo == 2)
	{
		preco_unitario = 6;		
	}
	else if (codigo == 3)
	{
		preco_unitario = 3.2;
	}
	else
	{
		preco_unitario = 2.5;
	}
	total = quantidade * preco_unitario;
	
	//regras do desconto
	if (quantidade >= 15 || total >=40)
	{
		desconto -= 0.15;  // 15%
	}
	
	/* 
	Se houve desconto, vai multiplicar por 0.85, ou seja, 15% de desconto. 
	Caso contrário vai multiplicar por 1 e manter o valor.
	*/
	total *= desconto; 

	printf("R$ %.2f\n", total);

	return 0;
}
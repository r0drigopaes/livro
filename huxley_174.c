#include <stdio.h>

#define minimo(a, b) a < b ? a: b

int main()
{	
	int preco = 7, consumo;

	scanf("%d", &consumo);

	consumo -=10; 
	
	if (consumo > 0)
	{		
		preco += minimo(consumo, 20);
		consumo -= 20;
	}
	if (consumo > 0)
	{		
		preco += (minimo(consumo, 70)) * 2 ;
		consumo -= 70;
	}
	if (consumo > 0)
	{		
		preco += consumo * 5;
	}
	printf("%d\n", preco);

	
	return 0;
}
/* 
Huxley
*/
#include <stdio.h>

int main()
{
	float salario;
	scanf("%f",&salario );
	if (salario <= 1000)
	{
		salario = salario * 1.15; // 15% de aumento
	}
	else if (salario <= 2000)
	{
		salario = salario * 1.10; // 10% de aumento
	}
	else
	{
		salario = salario * 1.05; // 5% de aumento
	}
	printf("O novo salário é de: %f\n",salario);
	return 0;
}
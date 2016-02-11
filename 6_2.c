/*
Huxley
*/
#include <stdio.h>

int main()
{
	float numero1, numero2;
	float multiplicacao, divisao, adicao, subtracao;
	scanf("%f%f", &numero1, &numero2);
	multiplicacao = numero1 * numero2;
	divisao = numero1 / numero2;
	adicao = numero1 + numero2;
	subtracao = numero1 - numero2;
	printf("%f\n%f\n%f\n%f\n", multiplicacao, divisao, adicao, subtracao);
	return 0;
}
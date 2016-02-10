/*
Huxley
*/
#include <stdio.h>

int main()
{
	float altura, massa, imc;
	scanf("%f%f", &altura, &massa);
	imc = massa / (altura * altura);
	printf("%f\n", imc);
	return 0;
}
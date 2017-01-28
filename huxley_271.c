#include <stdio.h>

#define PI 3.14159

int main()
{
	// Nesse problema é importante usar double para evitar erros de precisão.
	double raio;	
	scanf("%lf", &raio);
	raio = raio / 100.0; // transforma em metros

	printf("Area = %.4lf\n", PI * raio * raio);
	return 0;
}
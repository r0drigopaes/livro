/*
Lembre de compilar com o parâmetro -lm. Por exemplo:
gcc 9_11.c -lm
*/
#include <stdio.h>
#include <math.h>

float area_circulo(float raio)
{
	return M_PI * pow(raio, 2);
}

int main()
{
	float r, area;
	scanf("%f", &r);
	area = area_circulo(r);
	printf("A área do círculo é: %f\n", area);
	return 0;
}
#include <stdio.h>

float dobro_do_maior(float x, float y)
{
	float dobro;
	if (x>y)
	{
		dobro = x*2;
	}
	else
	{
		dobro = y*2;
	}
	return dobro;
}

int main()
{
	float a,b, resultado;
	scanf("%f%f",&a,&b);
	resultado = dobro_do_maior(a,b);
	printf("O dobro é %f\n",resultado);
	return 0;
}
#include <stdio.h>
/*
	Converte uma temperatura de graus
	Celsius em Farenheit
*/
float celsius_to_fahrenheit(float celsius)
{
	return 1.8 * celsius + 32;
}

int main()
{
	float celsius, fah;
	scanf("%f", &celsius);
	fah = celsius_to_fahrenheit(celsius);
	printf("A temperatura em Fahrenheit é: %f\n", fah);
	return 0;
}
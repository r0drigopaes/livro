#include<stdio.h>
#include<math.h>
#define ERRO 0.0000001
int main()
{
	double x, y;

	if (fabs(x-y) <= ERRO)
	{
		printf("Considerando uma pequena margem de erro\n");
	}
	return 0;
}
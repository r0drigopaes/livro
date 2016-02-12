#include <stdio.h>

#define Q '#'

void parede(int altura)
{
	int i;
	for(i=0; i< altura; ++i)
	{
		printf("%c",Q);
	}
	printf("\n");
}

void casa(int altura_casa)
{
	parede(altura_casa -2);
	parede(altura_casa -2);
	parede(altura_casa);
	parede(altura_casa);
	parede(altura_casa -2);
	parede(altura_casa -2);
   printf("\n");
}

int main()
{
	casa(6);
	casa(15);
	casa(3);
	casa(20);
	return 0;
}
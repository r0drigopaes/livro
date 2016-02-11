#include <stdio.h>

void troca(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}

int main()
{
	int x,y,z;
	scanf("%d%d%d", &x,&y,&z);

	if (y > z)
	{
		troca(&y,&z);
	}

	printf("%d\n%d\n%d\n",x,y,z);
	return 0;
}
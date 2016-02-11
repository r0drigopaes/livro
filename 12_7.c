#include <stdio.h>

int main()
{
	int x,y,z, aux;
	scanf("%d%d%d", &x,&y,&z);

	if (y > z)
	{
		aux = y;
		y = z;
		z = aux;
	}

	printf("%d\n%d\n%d\n",x,y,z);
	return 0;
}
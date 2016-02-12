#include <stdio.h>

int maior2(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	printf("O maior entre %d e %d é: %d\n", x, y, maior2(x,y));
	return 0;
}
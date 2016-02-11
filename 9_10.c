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

int maior3(int n1, int n2, int n3)
{
	return maior2(maior2(n1, n2) , n3);
}

int main()
{
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	printf("O maior entre %d, %d e %d é: %d\n", x, y, z, maior3(x,y,z));
	return 0;
}
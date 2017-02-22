#include <stdio.h>

int main()
{
	int m, n;
	scanf("%d%d", &m, &n);	
	int achou = 0;
	while (n > m)
	{
		if ( n % m == 0)
		{
			achou = 1;
			break;
		}
		n--;
	}
	if ( !achou )
	{
		printf("sem multiplos menores que %d\n", n);
	}
	else
	{
		printf("%d\n", n);
	}
	return 0;
}
#include <stdio.h>

int main()
{
	int n, m, i, primeiro;

	primeiro = 1;
	scanf("%d%d", &n, &m);
	i = n;
	while (i <= m)
	{
		if ( i % 5 == 0 )
		{
			if (primeiro)
			{
				printf("%d", i);
				primeiro = 0;
			}
			else
			{
				printf("|%d", i);
			}

			i += 5;
		}
		else
		{
			i++;
		}
	}
	printf("\n");
	return 0;
}
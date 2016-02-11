#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	int *p[2];
	p[0] = (int *) malloc (5 * sizeof(int));
	p[1] = (int *) malloc (5 * sizeof(int));
	for (i=0; i< 2; ++i)
	{
		for (j=0; j< 5; ++j)
		{
			p[i][j] = 1;
		}
	}

	return 0;
}
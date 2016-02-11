#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int *a;
	a = (int *) malloc (10 * sizeof(int));
	for (i=0; i< 10; ++i)
	{
		a[i] = i;
	}
	return 0;
}
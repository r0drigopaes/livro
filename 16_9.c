#include <stdio.h>

int main()
{
	int a[] = {5,6,7};
	int i;
	int *p;
	p = a;
	for (i=0; i< 3; ++i)
	{
		printf("%d\n", *p);
		++p;
	}
	return 0;
}

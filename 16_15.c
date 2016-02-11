#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i;
	int *a;
	a = (int *) calloc (10 , sizeof(int));
	if (a==NULL)
	{
		printf("Nao foi possivel alocar memória");
		return -1;
	}
	for (i=0; i< 10; ++i)
	{
		a[i] = i;
	}
	return 0;
}
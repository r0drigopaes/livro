#include <stdio.h>
#include <stdlib.h>

void uso_pilha()
{
	int a = 5;
	printf("%d\n", a);
}

void uso_heap()
{
	int *a = (int *) malloc (sizeof(int));
	*a = 5;
	printf("%d\n", *a);
}

int main()
{
	int i;
	for (i=0; i< 10; ++i)
	{
		uso_pilha();
	}
	for (i=0; i< 10; ++i)
	{
		uso_heap();
	}

	return 0;
}
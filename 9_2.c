#include <stdio.h>

#define Q '#'

void casa()
{
	printf("%c%c%c%c\n",Q,Q,Q,Q);
	printf("%c%c%c%c\n",Q,Q,Q,Q);
	printf("%c%c%c%c%c%c\n",Q,Q,Q,Q,Q,Q);
	printf("%c%c%c%c%c%c\n",Q,Q,Q,Q,Q,Q);
	printf("%c%c%c%c\n",Q,Q,Q,Q);
	printf("%c%c%c%c\n",Q,Q,Q,Q);
	printf("\n");
}

int main()
{
	casa();
	return 0;
}
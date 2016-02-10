/*
Huxley
*/
#include <stdio.h>

int main()
{
	int resto, x, eh_par;	
	scanf("%d",&x);
	resto = (x%2);
	eh_par = (resto ==0);
	if (! eh_par)
	{
		printf("Ímpar\n");
	}
	return 0;
}
/*
Huxley
*/
#include <stdio.h>

int main()
{
	int dinheiro, troco;
	scanf("%d", &dinheiro);
	// calcula quanto o cliente perderá no troco
	troco = dinheiro % 7;
	printf("%d\n", troco);
	return 0;
}
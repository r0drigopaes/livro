#include <stdio.h>
#include <locale.h>

int main()
{
	// Usando português do Brasil, explicitamente
	setlocale(LC_ALL,"pt_BR.UTF-8");
	printf("A calçada não está ótima!\n");
	return 0;
}
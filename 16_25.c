#include <stdio.h>
#include <string.h>

int main()
{
	char frase[256];
	printf ("Digite uma frase: ");
	gets (frase);
	printf ("A frase que você digitou tem %d caracteres.\n", (int) strlen(frase));
	return 0;
}
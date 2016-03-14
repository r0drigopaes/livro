#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Uma string simples!";
	char * pch;
	pch = strstr(str, "simples");
	printf("Encontrado na posicao: [%ld]\n", pch-str);
	strncpy(pch, "legal!!", 7);
	puts(str);
	return 0;
}
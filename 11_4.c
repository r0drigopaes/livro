#include <stdio.h>

#define MAX 500
int main()
{
	// 1 caractere a mais para o \0
	char frase[MAX+1];
	int i=0, contador = 0;

	fgets(frase,MAX+1,stdin);

	while (frase[i] != '\0')
	{
		// não conta o \n
		if (frase[i]!='\n')
		{
			++contador;
		}
		++i;
	}

	printf("%d\n",contador);

	return 0;
}
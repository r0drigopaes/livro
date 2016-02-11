#include <stdio.h>

int main()
{
	int x;
	char frase[200];

	scanf("%d", &x);
	getchar(); // joga-se o '\n' fora
	gets(frase);

	return 0;
}
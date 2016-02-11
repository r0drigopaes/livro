#include <stdio.h>

int palindromo(char *palavra, int inicio, int fim)
{
	int tam = fim-inicio+1;
	if (tam <= 1)
	{
		return 1;
	}
	else
	{
		if (palavra[inicio] == palavra[fim])
		{
			return palindromo(palavra, inicio+1, fim-1);
		}
		else
		{
			return 0;
		}
	}
}


int main()
{
	char str1[] = "casa";
	char str2[] = "arara";
	char str3[] = "radar";
	char str4[] = "x";
	char str5[] = "ab";

	// espera-se 0
	printf("%d\n", palindromo(str1,0,3));
	// espera-se 1
	printf("%d\n", palindromo(str2,0,4));
	// espera-se 1
	printf("%d\n", palindromo(str3,0,4));
	// espera-se 1
	printf("%d\n", palindromo(str4,0,0));
	// espera-se 0
	printf("%d\n", palindromo(str5,0,1));
	return 0;
}

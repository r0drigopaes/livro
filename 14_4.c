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
float media(float n[], int tam)
{
	int i;
	float soma = 0;
	for (i=0; i< tam ; ++i)
	{
		soma += n[i];
	}
	return soma/tam;
}
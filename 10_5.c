float variancia(float n[], int tam)
{
	int i;
	float var = 0;
	// chama a função média que criamos
	float m = media(n,tam);
	for (i=0; i< tam ; ++i)
	{
		var += (n[i] - m)*(n[i] - m);
	}
	return var/tam;
}
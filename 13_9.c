int ler_habitante(struct habitante *h)
{
	scanf("%d",&h->idade);
	getchar(); // ignora o /n depois da idade
	if (h->idade != -1)
	{
		/*
 	 	 é importante deixar um espaço entre os
 		%c, pois caso contrário ele lerá o
 		caractere espaço.
 		*/
	 	 scanf("%c %c %c",&h->sexo, &h->cabelos, &h->olhos);
		return 1;
	}
	else
	{
		return 0;
	}
}
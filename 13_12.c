void encontrar_respostas(struct habitante *array, int n, struct resposta *r)
{
	int i;
	int qtd_mulheres = 0;
	r->maior_idade=-1;
	for (i=0; i< n ; ++i)
	{
		if (array[i].idade > r->maior_idade)
		{
	 		r->maior_idade = array[i].idade;
		}
	 	if (array[i].sexo == FEMININO &&
	 		array[i].idade >=18 &&
	 	 	array[i].idade <= 35 &&
	 	 	array[i].cabelos == LOURO &&
	 	 	array[i].olhos == VERDE
			)
		{
			qtd_mulheres++;
		}
	}
	
	r->porcentagem_mulheres = (qtd_mulheres/(double)n)*100;
}
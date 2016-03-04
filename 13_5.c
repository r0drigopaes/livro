void imprimir(struct cliente c)
{
	printf("Codigo.......: %d\n", c.codigo);
	printf("Nome.........: %s", c.nome);
	printf("Nascimento...: %d/%d/%d\n", c.dia_nascimento, c.mes_nascimento,	ano_nascimento);
 	printf("Sexo.........: ");
	if (c.sexo==MASCULINO)
	{
		printf("masculino\n");
	}
 	else
 	{
 		printf("feminino\n");
 	}
}
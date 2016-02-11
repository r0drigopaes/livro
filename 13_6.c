#include <stdio.h>
#define MAX_NOME 500
#define MASCULINO 0

struct cliente
{
	int codigo;
	char nome[MAX_NOME+2];
	int dia_nascimento;
	int mes_nascimento;
	int ano_nascimento;
	int sexo;
};

void imprimir(struct cliente c)
{
	printf("Codigo.......: %d\n", c.codigo);
	printf("Nome.........: %s", c.nome);
	printf("Nascimento...: %d/%d/%d\n", c.dia_nascimento, c.mes_nascimento, c.ano_nascimento);
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

int main()
{
	struct cliente c1;

	c1.codigo = 1;
	fgets(c1.nome , MAX_NOME, stdin);
	scanf("%d%d%d", &c1.dia_nascimento, &c1.mes_nascimento, &c1.ano_nascimento);
	scanf("%d", &c1.sexo);

	imprimir(c1);

	return 0;
}

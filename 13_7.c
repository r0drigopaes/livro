#include <stdio.h>
#define MAX_NOME 500
#define MASCULINO 0
#define MAX_CLIENTES 1000

struct cliente
{
	int codigo;
	char nome[MAX_NOME+1];
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
	int n, i;
	struct cliente c[MAX_CLIENTES];
	// Número de clientes a serem lidos
	scanf("%d",&n);
	for (i=0; i<n; ++i)
	{
		c[i].codigo = i;
		/*
		Quando o scanf é utilizado para ler um inteiro,
		ele deixa na entrada padrão o caractere \n do final
		de linha. Portanto, quando você usa um fgets depois
		do scanf, o fgets vai considerar esse \n como se fosse
		a string que você quer ler.
		Logo, utilizamos aqui o getchar() para descartar o \n
		que sobra do scanf.
		*/
		getchar();
		fgets(c[i].nome , MAX_NOME, stdin);
		scanf("%d%d%d", &c[i].dia_nascimento, &c[i].mes_nascimento, &c[i].ano_nascimento);
		scanf("%d", &c[i].sexo);
	}

	for (i=0; i<n; ++i)
	{
		imprimir(c[i]);
	}

	return 0;
}
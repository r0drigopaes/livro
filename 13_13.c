#include<stdio.h>

#define MAX 100

#define MASCULINO 'm'
#define FEMININO 'f'
#define AZUL 'a'
#define VERDE 'v'
#define CASTANHO 'c'
#define LOURO 'l'
#define PRETO 'p'

struct habitante
{
	char sexo;
	char olhos;
	char cabelos;
	int idade;
};

struct resposta
{
	int maior_idade;
	/*
	porcentagem de mulheres que
	atendem as restrições do
	problema.
	*/
	double porcentagem_mulheres;
};

/* Retorna verdadeiro caso tenha
lido um habitante ou 0 caso
já tenha terminado de ler
todos os habitantes
*/
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

int main()
{
	int lidos = 0;
	struct resposta resp;
	struct habitante habitantes[MAX];
	while (ler_habitante(&habitantes[lidos]))
	{
		++lidos;
	}
	encontrar_respostas(habitantes, lidos, &resp);
	printf("Mais velho: %d\n", resp.maior_idade);
	printf("Mulheres com olhos verdes, loiras com 18 a 35 anos: %.2lf%%\n", resp.porcentagem_mulheres);

	return 0;
}
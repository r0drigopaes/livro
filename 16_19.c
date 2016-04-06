int **p;
// aloca um array de ponteiros, um para cada linha
p = (int **) malloc(linhas * sizeof(int *));
// cada um dos ponteiros receberá um array de inteiros
for (i= 0 ; i< linhas; ++i)
{
	p[i] = (int *) malloc (colunas * sizeof(int));
}
matriz_dinamica(p);
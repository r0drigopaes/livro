#include <stdio.h>
int main()
{
	int total_linhas, total_colunas, linha, coluna, linhas_transposta, colunas_transposta;

	scanf("%d%d",&total_linhas, &total_colunas);
	int a[total_linhas][total_colunas];

	// veja que na transposta invertemos a quantidade de linhas e colunas
	linhas_transposta = total_colunas;
	colunas_transposta = total_linhas;
	int transposta[linhas_transposta][colunas_transposta];

	// lê os dados
	for (linha=0; linha< total_linhas; ++linha)
	{
		for (coluna=0; coluna<total_colunas; ++coluna)
		{
			scanf("%d",&a[linha][coluna]);
		}
	}

	// gera a transposta
	for (linha=0; linha< linhas_transposta; ++linha)
	{
		for (coluna=0; coluna<colunas_transposta; ++coluna)
		{
			// veja que os índices estão invertidos
			transposta[linha][coluna] = a[coluna][linha];
		}
	}

	// imprime a matriz transposta
	for (linha=0; linha< linhas_transposta; ++linha)
	{
		for (coluna=0; coluna<colunas_transposta; ++coluna)
		{
			// veja que os índices estão invertidos
			printf("%d ",transposta[linha][coluna]);
		}
		printf("\n"); //pula uma linha
	}
	return 0;
}
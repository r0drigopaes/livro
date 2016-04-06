int main()
{
	int i;
 	float exemplo[10];
	printf("Digite 10 números\n");
	for (i=0; i< 10 ; ++i)
	{
		scanf("%f",&exemplo[i]);
	}
	printf("O desvio padrão é: %f\n", desv_pad(exemplo,10));
	return 0;
}
#define MAX 100
int main()
{
	int lidos = 0;
	struct habitante habitantes[MAX];
	while (ler_habitante(&habitantes[lidos]))
	{
		++lidos;
	} 	
}
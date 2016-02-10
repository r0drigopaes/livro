/* 
Huxley
*/
#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	if (a > b)
	{
		// imprime b primeiro e a depois
		printf("%d %d\n",b,a);
	}
	else if (a < b)
	{
		// imprime a primeiro e b depois
		printf("%d %d\n",a,b);
	}
	else
	{
		/* tanto faz qual dos valores será impresso
		uma vez que eles são iguais */
		printf("%d %d\n", a,a);
	}
	return 0;
}
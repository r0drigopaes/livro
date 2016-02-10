/* 
Huxley
*/
#include <stdio.h>

int main()
{
	int a, b, temp;
	scanf("%d%d",&a,&b);
	if( a > b )
	{
		// TROCAR O VALOR DE A POR B
		temp = a;
		a = b;
		b = temp;
	}
	printf("%d %d\n",a,b);
	return 0;
}
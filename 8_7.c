/* 
Huxley
*/
#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	for (; n >= 0 ; )
	{
		printf("%d\n", n);
		--n;
	}
	return 0;
}
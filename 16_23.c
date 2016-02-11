#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "This is a sample string";
	char * pch;
	printf ("Procurando pelo 's' em \"%s\"...\n",str);
	pch=strchr(str,'s');
	while (pch!=NULL)
	{
		printf ("encontrado em %ld\n",pch-str+1);
		pch=strchr(pch+1,'s');
	}
	return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[]="Exemplo";
	char str2[40];
	char str3[40];
	// copia str1 para str2
	strcpy (str2,str1);
	// copia "Copia realizada com sucesso" para str3
	strcpy (str3,"Copia realizada com sucesso");
	printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
	return 0;
}
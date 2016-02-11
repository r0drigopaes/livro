#include <stdio.h>
#include <string.h>

int main()
{
	char str[] ="Essa é uma string simples!";
	char * pch;
	pch = strstr (str,"simples");
	strncpy (pch,"legal!!",7);
	puts (str);
	return 0;
}
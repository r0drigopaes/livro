#include <stdio.h>
#include <string.h>

int main()
{
	char key[] = "manga";
	char buffer[80];
	do {
		printf ("Qual minha fruta favorita? ");
		fflush (stdout);
		scanf ("%79s",buffer);
	} while (strcmp (key,buffer) != 0);
	puts ("Acertou!");
	return 0;
}
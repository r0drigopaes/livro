#include <stdio.h>
#include <string.h>

int main()
{
	char str[80];
	strcpy (str,"essas ");
	strcat (str,"strings ");
	strcat (str,"estão ");
	strcat (str,"concatenadas.");
	puts (str);
	return 0;
}
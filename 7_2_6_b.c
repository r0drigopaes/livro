#include <stdio.h>

int main()
{
	int horas;
	scanf("%d", &horas);
	
	if (horas >= 18 || horas <= 5)
	{
		printf("escuro\n");
	}
	return 0;
}
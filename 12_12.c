/*
	Esse código gerará dois warnings nos printfs
	que mostram o endereço de memória.
	O correto seria utilizar o %p ao invés do %d,
	mas o %d serve aos propósitos da explicação dada
	no livro.
*/

#include <stdio.h>

int main()
{
	int x = 7 ;
	int *px ;

	px = &x ;
	*px = 8 ;

	printf("%d\n" , x);
	printf("%d\n" , &x);
	printf("%d\n" , px);
	printf("%d\n" , *px);

	return 0;
}
